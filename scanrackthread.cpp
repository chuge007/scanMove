#include "scanrackthread.h"
#include "TaiDa/scancontroltaida.h"
#include "HuiChuan/scancontrolhuichuan.h"

ScanRackThread::ScanRackThread(QObject *parent) : QObject(parent)
{
    thread = new QThread;
}

ScanRackThread::~ScanRackThread()
{
    thread->quit();
    thread->wait();
    thread->deleteLater();
}

ScanControlAbstract *ScanRackThread::obj()
{
    return scanControl;
}

int ScanRackThread::switchScanRackConnection(QString plcIP, int port)
{
    if (scanControl && lastIP == plcIP && lastPort == port) {
        scanControl->setModbusTcpIP(plcIP);
        scanControl->setModbusPort(port);
        QMetaObject::invokeMethod(scanControl, "on_connectBtn_clicked", Qt::QueuedConnection);

        return 1;
    } else {
        if (scanControl) {
            scanControl->disconnect();
            delete scanControl;
            scanControl = nullptr;
        }

        if (plcIP == HuiChuan_IP) {
            scanControl = new ScanControlHuiChuan();
            mechanicalType = HuiChuan;
        } else if (plcIP == TaiDa_IP) {
            scanControl = new ScanControlTaiDa();
            mechanicalType = TaiDa;
        } else {
            mechanicalType = -1;
            return 0;
        }

        scanControl->moveToThread(thread);
        connect(thread, &QThread::finished, scanControl, &QObject::deleteLater);

        thread->start();

        scanControl->setModbusTcpIP(plcIP);
        scanControl->setModbusPort(port);
        QMetaObject::invokeMethod(scanControl, "on_connectBtn_clicked", Qt::QueuedConnection);

        lastIP = plcIP;
        lastPort = port;

        return 2;
    }
}

int ScanRackThread::getMechanicalType()
{
    return mechanicalType;
}
