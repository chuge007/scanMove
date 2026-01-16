#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initWidget();
    connectFun();

}

MainWindow::~MainWindow()
{
    delete scanCtrl;
    delete ui;
}

void MainWindow::initWidget()
{
//    ScanControlAbstract *temp;
    scanCtrlHunChuan = new ScanControlHuiChuan();
    scanCtrlTaiDa = new ScanControlTaiDa();
//    if(ui->IP_Edit->text() == "192.168.1.88"){
//        scanCtrl = scanCtrlHunChuan;
//    }else {
//        scanCtrl = scanCtrlTaiDa;
//    }
    updateWight();

    ui->x_velocity->     setValidator(new QDoubleValidator(0, 99999, 6, this));
    ui->y_velocity->     setValidator(new QDoubleValidator(0, 99999, 6, this));
    ui->jog_velocity->       setValidator(new QDoubleValidator(0, 99999, 6,this));
    ui->jog_add_sub_velocity->  setValidator(new QDoubleValidator(0.0, 99999.0, 6, this));
    ui->backOrigin_velocity->  setValidator(new QDoubleValidator(0.0, 99999.0, 6, this));
    ui->scan_velocity->   setValidator(new QDoubleValidator(0.0, 99999.0, 6, this));
    ui->x_lenght->setValidator(new QDoubleValidator(0, 99999, 6, this));
    ui->y_lenght->setValidator(new QDoubleValidator(0, 99999, 6, this));
    ui->y_step->setValidator(new QDoubleValidator(0, 99999, 6, this));



//    ui->IP_Edit->text()
    scanCtrl->setModbusTcpIP(ui->IP_Edit->text());
    scanCtrl->setModbusPort(ui->port_Edit->text().toInt());

    ui->x_lenght->setText(QString::number(static_cast<double>(scanCtrl->xLenght())));
    ui->y_lenght->setText(QString::number(static_cast<double>(scanCtrl->yLenght())));
    ui->y_step->setText(QString::number(static_cast<double>(scanCtrl->yStep())));


    if(scanCtrl->currentScanModel() == ScanModel::NormalScan){
        ui->singleScan->setChecked(false);
    }else {
        ui->singleScan->setChecked(true);
    }

    ui->setMachineBtn->setEnabled(!scanCtrl->haveMachine());
    ui->setLimitBtn->setEnabled(!scanCtrl->haveLimit());
}

void MainWindow::connectFun()
{
    connect(scanCtrl, &ScanControlClass::modbusStateChange, [=](QModbusDevice::State state){
        if(state == QModbusDevice::ConnectedState){
            ui->connectBtn->setText("disconnect");
        }else if (state == QModbusDevice::UnconnectedState) {
            ui->connectBtn->setText("connect");
        }
    });

    connect(scanCtrl, &ScanControlAbstract::velocityChange, this, &MainWindow::updateVelocity);
    connect(scanCtrl, &ScanControlAbstract::positionChange, this, &MainWindow::updatePosition);
    connect(scanCtrl, &ScanControlAbstract::scanScope, this, &MainWindow::updateScanScope);
    connect(scanCtrl, &ScanControlAbstract::scanSetVelocity, this, &MainWindow::updateTaiDaVelocity);

    connect(ui->connectBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_connectBtn_clicked);
    connect(ui->startScanBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_startScanBtn_clicked);
    connect(ui->stopScanBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_stopScanBtn_clicked);
    connect(ui->endScanBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_endScanBtn_clicked);

    connect(ui->setMachineBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_setMachineBtn_clicked);
    connect(ui->setLimitBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_setLimitBtn_clicked);
    connect(ui->alarmResetBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_alarmResetBtn_clicked);

    connect(ui->singleScan, &QCheckBox::toggled, scanCtrl, &ScanControlAbstract::on_singleScan_toggled);
    connect(ui->jogStep_1, &QRadioButton::clicked, scanCtrl, &ScanControlAbstract::on_jogStep_1_clicked);
    connect(ui->jogStep_5, &QRadioButton::clicked, scanCtrl, &ScanControlAbstract::on_jogStep_5_clicked);
    connect(ui->jogStep_10, &QRadioButton::clicked, scanCtrl, &ScanControlAbstract::on_jogStep_10_clicked);

    connect(ui->setOriginBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_setOriginBtn_clicked);
    connect(ui->xAddBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_xAddBtn_clicked);
    connect(ui->xSubBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_xSubBtn_clicked);
    connect(ui->yAddBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_yAddBtn_clicked);
    connect(ui->ySubBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_ySubBtn_clicked);
    connect(ui->zAddBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_zAddBtn_clicked);
    connect(ui->zSubBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_zSubBtn_clicked);
    connect(ui->rAddBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_rAddBtn_clicked);
    connect(ui->rSubBtn, &QPushButton::clicked, scanCtrl, &ScanControlAbstract::on_rSubBtn_clicked);

    connect(ui->xAddBtn_2, &QPushButton::pressed, scanCtrl, &ScanControlAbstract::on_xAddBtn_pressed);
    connect(ui->xAddBtn_2, &QPushButton::released, scanCtrl, &ScanControlAbstract::on_xAddBtn_released);
    connect(ui->xSubBtn_2, &QPushButton::pressed, scanCtrl, &ScanControlAbstract::on_xSubBtn_pressed);
    connect(ui->xSubBtn_2, &QPushButton::released, scanCtrl, &ScanControlAbstract::on_xSubBtn_released);
    connect(ui->yAddBtn_2, &QPushButton::pressed, scanCtrl, &ScanControlAbstract::on_yAddBtn_pressed);
    connect(ui->yAddBtn_2, &QPushButton::released, scanCtrl, &ScanControlAbstract::on_yAddBtn_released);
    connect(ui->ySubBtn_2, &QPushButton::pressed, scanCtrl, &ScanControlAbstract::on_ySubBtn_pressed);
    connect(ui->ySubBtn_2, &QPushButton::released, scanCtrl, &ScanControlAbstract::on_ySubBtn_released);
    connect(ui->zAddBtn_2, &QPushButton::pressed, scanCtrl, &ScanControlAbstract::on_zAddBtn_pressed);
    connect(ui->zAddBtn_2, &QPushButton::released, scanCtrl, &ScanControlAbstract::on_zAddBtn_released);
    connect(ui->zSubBtn_2, &QPushButton::pressed, scanCtrl, &ScanControlAbstract::on_zSubBtn_pressed);
    connect(ui->zSubBtn_2, &QPushButton::released, scanCtrl, &ScanControlAbstract::on_zSubBtn_released);
    connect(ui->rAddBtn_2, &QPushButton::pressed, scanCtrl, &ScanControlAbstract::on_rAddBtn_pressed);
    connect(ui->rAddBtn_2, &QPushButton::released, scanCtrl, &ScanControlAbstract::on_rAddBtn_released);
    connect(ui->rSubBtn_2, &QPushButton::pressed, scanCtrl, &ScanControlAbstract::on_rSubBtn_pressed);
    connect(ui->rSubBtn_2, &QPushButton::released, scanCtrl, &ScanControlAbstract::on_rSubBtn_released);

    connect(this, &MainWindow::x_velocity_editingFinished, scanCtrl, &ScanControlAbstract::on_x_velocity_editingFinished);
    connect(this, &MainWindow::y_velocity_editingFinished, scanCtrl, &ScanControlAbstract::on_y_velocity_editingFinished);
    connect(this, &MainWindow::jog_velocity_editingFinished, scanCtrl, &ScanControlAbstract::setJogVelocity);

    connect(this, &MainWindow::scan_velocity_editingFinished, scanCtrl, &ScanControlAbstract::on_scan_velocity_editingFinished);
    connect(this, &MainWindow::jog_add_sub_velocity_editingFinished, scanCtrl, &ScanControlAbstract::on_addSub_velocity_editingFinished);
    connect(this, &MainWindow::backOrigin_velocity_editingFinished, scanCtrl, &ScanControlAbstract::on_backOrigin_velocity_editingFinished);

    connect(this, &MainWindow::x_lenght_editingFinished, scanCtrl, &ScanControlAbstract::setXLenght);
    connect(this, &MainWindow::y_lenght_editingFinished, scanCtrl, &ScanControlAbstract::setYLenght);
    connect(this, &MainWindow::y_step_editingFinished, scanCtrl, &ScanControlAbstract::setYStep);
    connect(this, &MainWindow::movePosition, scanCtrl, &ScanControlAbstract::runTargetPosition);

    connect(ui->manualBox, &QCheckBox::toggled, scanCtrl, &ScanControlAbstract::setManualModel);
    connect(ui->nextBtn, &QCheckBox::clicked, scanCtrl, &ScanControlAbstract::nextScan);
    connect(scanCtrl, &ScanControlAbstract::scanRowEnd, this, &MainWindow::scanRowEnd);
    connect(scanCtrl, &ScanControlAbstract::scanTime, this, &MainWindow::timeChange);
//    connect(this, &MainWindow::)

}

void MainWindow::updateWight()
{
    if(ui->IP_Edit->text() == "192.168.1.88"){
        ui->widget_2->show();
        ui->widget_3->show();
        ui->widget_5->hide();
        ui->widget_6->hide();
        ui->widget_7->hide();
        ui->alarmResetBtn->show();
        ui->setLimitBtn->show();
        ui->setMachineBtn->show();
        scanCtrl = scanCtrlHunChuan;
        ui->tabWidget->setTabEnabled(0, true);
    }else {
        ui->widget_2->hide();
        ui->widget_3->hide();
        ui->widget_5->show();
        ui->widget_6->show();
        ui->widget_7->show();
        ui->alarmResetBtn->hide();
        ui->setLimitBtn->hide();
        ui->setMachineBtn->hide();
        scanCtrl = scanCtrlTaiDa;
        ui->tabWidget->setTabEnabled(0, false);
    }
}

void MainWindow::updateVelocity(float x, float y, float jog)
{
//    qDebug() << QThread::currentThreadId();
    ui->x_velocity->setText(QString::number(static_cast<double>(x)));
    ui->y_velocity->setText(QString::number(static_cast<double>(y)));
    ui->jog_velocity->setText(QString::number(static_cast<double>(jog)));
}

void MainWindow::updatePosition(QPointF pos)
{
    ui->xCurPos->setText(QString::number(static_cast<double>(pos.x()-scanCtrl->virtualOrigin().x()), 'f', 3));
    ui->yCurPos->setText(QString::number(static_cast<double>(pos.y()-scanCtrl->virtualOrigin().y()), 'f', 3));
}

void MainWindow::updateScanScope(float v1, float v2, float v3)
{
    ui->x_lenght->setText(QString::number(static_cast<double>(v1), 'f', 3));
    ui->y_lenght->setText(QString::number(static_cast<double>(v2), 'f', 3));
    ui->y_step->setText(QString::number(static_cast<double>(v3), 'f', 3));
}

void MainWindow::updateTaiDaVelocity(float v1, float v2, float v3, float v4)
{
    ui->jog_velocity->setText(QString::number(static_cast<double>(v1)));
    ui->jog_add_sub_velocity->setText(QString::number(static_cast<double>(v2)));
    ui->backOrigin_velocity->setText(QString::number(static_cast<double>(v3)));
    ui->scan_velocity->setText(QString::number(static_cast<double>(v4)));
}

void MainWindow::scanRowEnd(AxisState)
{
    qDebug() << __FUNCTION__;
}

void MainWindow::timeChange(QString ms)
{
    qDebug() << ms;
}

void MainWindow::on_x_velocity_editingFinished()
{
    emit x_velocity_editingFinished(ui->x_velocity->text().toFloat());
}

void MainWindow::on_y_velocity_editingFinished()
{
    emit y_velocity_editingFinished(ui->y_velocity->text().toFloat());
}

void MainWindow::on_jog_velocity_editingFinished()
{
    emit jog_velocity_editingFinished(ui->jog_velocity->text().toFloat());
}

void MainWindow::on_x_lenght_editingFinished()
{
    emit x_lenght_editingFinished(ui->x_lenght->text().toFloat());
}

void MainWindow::on_y_lenght_editingFinished()
{
    emit y_lenght_editingFinished(ui->y_lenght->text().toFloat());
}

void MainWindow::on_y_step_editingFinished()
{
    emit y_step_editingFinished(ui->y_step->text().toFloat());
}

void MainWindow::on_IP_Edit_editingFinished()
{
    scanCtrl->setModbusTcpIP(ui->IP_Edit->text());
}

void MainWindow::on_port_Edit_editingFinished()
{
    scanCtrl->setModbusPort(ui->port_Edit->text().toInt());
}

void MainWindow::on_backOrigin_velocity_editingFinished()
{
    emit backOrigin_velocity_editingFinished(ui->backOrigin_velocity->text().toFloat());
}

void MainWindow::on_scan_velocity_editingFinished()
{
    emit scan_velocity_editingFinished(ui->scan_velocity->text().toFloat());
}

void MainWindow::on_jog_add_sub_velocity_editingFinished()
{
    emit jog_add_sub_velocity_editingFinished(ui->jog_add_sub_velocity->text().toFloat());
}

void MainWindow::on_pushButton_clicked()
{
    auto xpos = ui->xTargetPos->value();
    auto ypos = ui->yTargetPos->value();
    auto curpos = scanCtrlHunChuan->currentPosition();
    auto limit = scanCtrlHunChuan->limitRegion();

    auto movX = curpos.x()+xpos;
    auto movY = curpos.y()+ypos;
    if((movX >= 0 && movX <= limit.x()) &&
       (movY >= 0 && movY <= limit.y())){
        emit movePosition(movX, movY);
    }

}
