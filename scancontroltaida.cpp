#include "scancontroltaida.h"
#include <QDebug>
ScanControlTaiDa::ScanControlTaiDa(QObject *parent)
    : ScanControlAbstract(parent)
{
    qRegisterMetaType<QModbusDevice::State>("QModbusDevice::State");
    QMetaObject::invokeMethod(this, "init", Qt::QueuedConnection);
}

ScanControlTaiDa::~ScanControlTaiDa()
{
    QMetaObject::invokeMethod(this, "destroy", Qt::QueuedConnection);
}

void ScanControlTaiDa::setXLenght(float lenght)
{
    if(modbusClient->state() != QModbusDevice::ConnectedState)
        return;

    xScanLenght = lenght;
    QModbusDataUnit modbusData(QModbusDataUnit::HoldingRegisters, WORKPIECEWIDE, 2);

    auto d = writeModbusFloatData(lenght);
    modbusData.setValue(0, d.first);
    modbusData.setValue(1, d.second);
    modbusClient->sendWriteRequest(modbusData, 1);
}

void ScanControlTaiDa::setYLenght(float lenght)
{
    if(modbusClient->state() != QModbusDevice::ConnectedState)
        return;

    yScanLenght = lenght;
    QModbusDataUnit modbusData(QModbusDataUnit::HoldingRegisters, WORKPIECEHIGH,2);

    auto d = writeModbusFloatData(lenght);
    modbusData.setValue(0, d.first);
    modbusData.setValue(1, d.second);
    modbusClient->sendWriteRequest(modbusData, 1);
}

void ScanControlTaiDa::setYStep(float step)
{
    if(modbusClient->state() != QModbusDevice::ConnectedState)
        return;

    yScanStep = step;
    QModbusDataUnit modbusData(QModbusDataUnit::HoldingRegisters, SCANSCOPE, 2);

    auto d = writeModbusFloatData(step);
    modbusData.setValue(0, d.first);
    modbusData.setValue(1, d.second);
    modbusClient->sendWriteRequest(modbusData, 1);
}

void ScanControlTaiDa::writeSetting()
{
    if(settings == nullptr) return;

    settings->setValue("Point_Speed",           (double)jogVelocity);
    settings->setValue("Find_Origin_Velocity",  (double)backOriginVelocity);
    settings->setValue("Scanning_Speed",        (double)scanVelocity);
    settings->setValue("Point_Add_Sub_Speed",   (double)jogAddSubVelocity);

}

void ScanControlTaiDa::readSetting()
{
    if(settings == nullptr) return;

    jogVelocity = settings->value("Point_Speed", 20).toFloat();
    backOriginVelocity = settings->value("Find_Origin_Velocity", 20).toFloat();
    scanVelocity = settings->value("Scanning_Speed", 20).toFloat();
    jogAddSubVelocity = settings->value("Point_Add_Sub_Speed", 15).toInt();

    if(jogVelocity <= 0){
//        on_pointValue_editingFinished();
//        on_speedValue_editingFinished();
//        on_scanValue_editingFinished();
//        on_add_subValue_editingFinished();
    }


}

void ScanControlTaiDa::init()
{
    initModbus();
    settings = new QSettings("./ScanRack_TaiDa.ini", QSettings::IniFormat);
    readSetting();
}

void ScanControlTaiDa::destroy()
{
    if (settings) {
        writeSetting();
        delete settings;
        settings = nullptr;
    }
    if (modbusClient) {
         modbusClient->disconnectDevice();
         delete modbusClient;
         modbusClient= nullptr;
    }
    if (timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
}

void ScanControlTaiDa::on_connectBtn_clicked()
{
    if(modbusClient->state() != QModbusDevice::ConnectedState ){
        modbusClient->setConnectionParameter(QModbusDevice::NetworkAddressParameter, PlcIP);
        modbusClient->setConnectionParameter(QModbusDevice::NetworkPortParameter, PlcPort);
        modbusClient->setNumberOfRetries(3);
        modbusClient->setTimeout(1000);

        if(modbusClient->connectDevice()){
        }else {
        }
    }else {
        modbusClient->disconnectDevice();
    }
}

void ScanControlTaiDa::on_startScanBtn_clicked()
{
    writeCoilsData(STARTSCANE, 1, 1);
}

void ScanControlTaiDa::on_stopScanBtn_clicked()
{
    writeCoilsData(STOPSCAN, 1, 1);
}

void ScanControlTaiDa::on_endScanBtn_clicked()
{
    writeCoilsData(ENDSCAN, 1, 1);
}

void ScanControlTaiDa::on_setOriginBtn_clicked()
{
    writeCoilsData(SETORIGIN, 1, 1);
}

void ScanControlTaiDa::on_jog_velocity_editingFinished(float val)
{
    jogVelocity = val;
    writeHoldingRegistersData(POINT_VELOCITY, 2, val);
}

void ScanControlTaiDa::on_backOrigin_velocity_editingFinished(float val)
{
    backOriginVelocity = val;
    writeHoldingRegistersData(GO_ORIGIN_VELOCITY, 2, val);
}

void ScanControlTaiDa::on_scan_velocity_editingFinished(float val)
{
    scanVelocity = val;
    writeHoldingRegistersData(SCANSPEED, 2, val);
}

void ScanControlTaiDa::on_addSub_velocity_editingFinished(float val)
{
    jogAddSubVelocity = val;
    writeHoldingRegistersData(POINT_ADD_SUB_VELOCITY, 2, val);
}

void ScanControlTaiDa::on_xAddBtn_pressed()
{
    writeCoilsData(T_X_ADD, 1, 1);
}

void ScanControlTaiDa::on_xAddBtn_released()
{
    writeCoilsData(T_X_ADD, 1, 0);
}

void ScanControlTaiDa::on_xSubBtn_pressed()
{
    writeCoilsData(T_X_SUB, 1, 1);
}

void ScanControlTaiDa::on_xSubBtn_released()
{
    writeCoilsData(T_X_SUB, 1, 0);
}

void ScanControlTaiDa::on_yAddBtn_pressed()
{
    writeCoilsData(T_Y_ADD, 1, 1);
}

void ScanControlTaiDa::on_yAddBtn_released()
{
    writeCoilsData(T_Y_ADD, 1, 0);
}

void ScanControlTaiDa::on_ySubBtn_pressed()
{
    writeCoilsData(T_Y_SUB, 1, 1);
}

void ScanControlTaiDa::on_ySubBtn_released()
{
    writeCoilsData(T_Y_SUB, 1, 0);
}

void ScanControlTaiDa::on_singleScan_toggled(bool checked)
{
    if(checked){
        writeCoilsData(UNILATERALSCAN, 1, 1);
    }else {
        writeCoilsData(UNILATERALSCAN, 1, 0);
    }
}

void ScanControlTaiDa::updateView()
{
    QModbusDataUnit dataUnit(QModbusDataUnit::HoldingRegisters, XCURPOS, 4);

    QModbusReply *reply = modbusClient->sendReadRequest(dataUnit, 1);
    if(reply){
        connect(reply, &QModbusReply::finished, [=](){
            if(reply->error() == QModbusDevice::NoError){
                quint16 data[4] = {0};
                for (int i=0; i<4; ++i) {
                    data[i] = reply->result().value(i);
                }
                qint32 *temp = reinterpret_cast<qint32 *>(data);
                currentPos.setX((double)temp[1]/1000);
                currentPos.setY((double)temp[0]/1000);

                emit positionChange(currentPos);
            }
            reply->deleteLater();
        });
    }
}

void ScanControlTaiDa::modbusState()
{
    if(modbusClient->state() == QModbusDevice::ConnectedState){

//        readSetting();
        initViewData();
        timer->start();
        qDebug() << "PLC Connection Successful!";
    }else if (modbusClient->state() == QModbusDevice::UnconnectedState) {
        timer->stop();
        qDebug() << "PLC Connection Failure!";
    }
    emit modbusStateChange(modbusClient->state());
}

void ScanControlTaiDa::initModbus()
{
    modbusClient = new QModbusTcpClient();

    timer = new QTimer();
    timer->setInterval(500);

    connect(timer, &QTimer::timeout, this, &ScanControlTaiDa::updateView);
    connect(modbusClient, &QModbusClient::stateChanged, this, &ScanControlTaiDa::modbusState);
}

void ScanControlTaiDa::initViewData()
{
    if(modbusClient->state() != QModbusDevice::ConnectedState)
        return;

    QModbusDataUnit dataUnit(QModbusDataUnit::HoldingRegisters);

    dataUnit.setStartAddress(WORKPIECEHIGH);
    dataUnit.setValueCount(6);

    QModbusReply *reply = modbusClient->sendReadRequest(dataUnit, 1);
    if(reply){
        connect(reply, &QModbusReply::finished, [=](){
            if(reply->error() == QModbusDevice::NoError){
                auto v1 = readModbusFloatData(reply->result().value(1), reply->result().value(0));
                auto v2 = readModbusFloatData(reply->result().value(3), reply->result().value(2));
                auto v3 = readModbusFloatData(reply->result().value(5), reply->result().value(4));

                xScanLenght = v1;
                yScanStep = v2;
                yScanStep = v3;

                emit scanScope(v1, v2, v3);
            }
            reply->deleteLater();
        });
    }

    dataUnit.setStartAddress(POINT_VELOCITY);
    dataUnit.setValueCount(2);
    reply = modbusClient->sendReadRequest(dataUnit, 1);
    if(reply){
        connect(reply, &QModbusReply::finished, [=](){
            if(reply->error() == QModbusDevice::NoError){
                quint16 data[2] = {0};
                data[0] = reply->result().value(0);
                data[1] = reply->result().value(1);
                quint32 *d = reinterpret_cast<quint32 *>(data);

                qDebug() << data[0] << data[1];
                jogVelocity = (double)*d;

                emit scanSetVelocity(jogVelocity, jogAddSubVelocity, backOriginVelocity, scanVelocity);
            }
            reply->deleteLater();
        });
    }

    dataUnit.setStartAddress(POINT_ADD_SUB_VELOCITY);
    dataUnit.setValueCount(4);
    reply = modbusClient->sendReadRequest(dataUnit, 1);
    if(reply){
        connect(reply, &QModbusReply::finished, [=](){
            if(reply->error() == QModbusDevice::NoError){
                quint16 data[4] = {0};
                for (int i=0; i<4; ++i) {
                    data[i] = reply->result().value(i);
                }

                quint32 *d = reinterpret_cast<quint32 *>(data);

                jogAddSubVelocity = (double)d[0];
                backOriginVelocity = (double)d[1];
                emit scanSetVelocity(jogVelocity, jogAddSubVelocity, backOriginVelocity, scanVelocity);

            }
            reply->deleteLater();
        });
    }

    dataUnit.setStartAddress(SCANSPEED);
    dataUnit.setValueCount(2);
    reply = modbusClient->sendReadRequest(dataUnit, 1);
    if(reply){
        connect(reply, &QModbusReply::finished, [=](){
            if(reply->error() == QModbusDevice::NoError){
                quint16 data[2] = {0};
                for (int i=0; i<2; ++i) {
                    data[i] = reply->result().value(i);
                }

                quint32 *d = reinterpret_cast<quint32 *>(data);

                scanVelocity = (double)d[0];
                emit scanSetVelocity(jogVelocity, jogAddSubVelocity, backOriginVelocity, scanVelocity);
            }
            reply->deleteLater();
        });
    }

    dataUnit.setRegisterType(QModbusDataUnit::Coils);
    dataUnit.setStartAddress(ILLUMINATING);
    dataUnit.setValueCount(2);
    dataUnit.setValue(1, 0);
    reply = modbusClient->sendWriteRequest(dataUnit, 1);
    if(reply){
        connect(reply, &QModbusReply::finished, [=](){
            if(reply->error() == QModbusDevice::NoError){
                scanModel = ScanModel::NormalScan;
            }
            reply->deleteLater();
        });

    }
}

float ScanControlTaiDa::readModbusFloatData(int v1, int v2)
{
    uint32_t intValue = (static_cast<uint32_t>(v1) << 16) | static_cast<uint32_t>(v2);
    return *reinterpret_cast<float*>(&intValue);
}

QPair<quint16, quint16> ScanControlTaiDa::writeModbusFloatData(float value) {
    quint32 intValue = *reinterpret_cast<uint32_t*>(&value);
    quint16 v2 = (intValue >> 16) & 0xFFFF;
    quint16 v1 = intValue & 0xFFFF;

    return QPair<quint16, quint16>(v1, v2);
}


void ScanControlTaiDa::writeCoilsData(int address, quint16 size, quint16 data)
{
    if(modbusClient->state() != QModbusDevice::ConnectedState)
        return;

    QModbusDataUnit modbusData(QModbusDataUnit::Coils, address, size);
    modbusData.setValue(0, data);
    auto reply = modbusClient->sendWriteRequest(modbusData, 1);
    if(reply){
        connect(reply, &QModbusReply::finished, [=](){
            if(reply->error() == QModbusDevice::NoError){
                if(address == STARTSCANE || address == STOPSCAN ||
                   address ==  ENDSCAN || address == SETORIGIN ){
                    writeCoilsData(address, size, 0);
                }
            }else {
                if(data == 0){
                    writeCoilsData(address, size, data);
                }
            }
            reply->deleteLater();
        });
    }

}

void ScanControlTaiDa::writeHoldingRegistersData(int address, quint16 size, quint32 data)
{
    if(modbusClient->state() != QModbusDevice::ConnectedState)
        return;

    quint32 temp = data;
    quint16 *d = reinterpret_cast<quint16 *>(&temp);

    QModbusDataUnit modbusData(QModbusDataUnit::HoldingRegisters, address, size);
    modbusData.setValue(0, d[0]);
    modbusData.setValue(1, d[1]);
    auto reply = modbusClient->sendWriteRequest(modbusData, 1);

    if(reply){
        connect(reply, &QModbusReply::finished, [=](){
            if(reply->error() == QModbusDevice::NoError){

            }else {
                writeHoldingRegistersData(address, size, data);
            }
            reply->deleteLater();
        });
    }
}
