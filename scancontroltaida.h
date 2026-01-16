#ifndef SCANCONTROLTAIDA_H
#define SCANCONTROLTAIDA_H

#include "../scancontrolabstract.h"


class ScanControlTaiDa : public ScanControlAbstract
{
    Q_OBJECT

public:
    explicit ScanControlTaiDa(QObject *parent = nullptr);
    ~ScanControlTaiDa();

    void setModbusTcpIP(QString ip)  { PlcIP = ip; }  //设置IP
    void setModbusPort(int port){ PlcPort = port; }      //设置端口

    QPointF virtualOrigin() const   {return QPointF(0,0);}     //虚拟0点
    QPointF limitRegion() const  {return QPointF(0,0);}     //极限区域
    QPointF currentPosition() const  { return currentPos;}   //当前位置

    float xLenght() const  {return  xScanLenght; }
    float yLenght() const  {return  yScanLenght; }
    float yStep()   const  {return  yScanStep; }

    void setXAxisVelocity(float vel)  { Q_UNUSED(vel)}   //设置X轴速度
    void setYAxisVelocity(float vel)  { Q_UNUSED(vel)}     //设置Y轴速度
    void setJogVelocity(float vel)  {jogVelocity = vel;}     //设置点动速度

    void setAxisJogStep(int step)  { Q_UNUSED(step)}       //设置轴寸动步进

    bool isXCrossed()  {return false;}                 //判断扫查区域的X轴是否越界
    bool isYCrossed()  {return false;}                 //判断扫查区域的Y轴是否越界
    bool isJogCrossed(int &address, float &data)  {Q_UNUSED(address) Q_UNUSED(data) return false;} //点动判断是都越界

    ScanModel currentScanModel() const { return scanModel;}       //当前扫查模式
    QSettings *scanControlSetting() const  {return settings;}    //配置表句柄

    bool haveMachine() const  {return false;}           //是否有设置机械原点
    bool haveLimit() const  {return false;}            //是否有设置机械极限位

    void setManualModel(bool states){Q_UNUSED(states)}
    bool nextScan(){ return false;}

    void writeSetting();
    void readSetting();

public slots:
    void init();
    void destroy();

    void on_connectBtn_clicked() ;       //连接服务

    void on_startScanBtn_clicked() ;     //开始扫查
    void on_stopScanBtn_clicked() ;      //暂停扫查
    void on_endScanBtn_clicked() ;       //结束扫描

    void on_setOriginBtn_clicked() ;     //设置起点

    void setXLenght(float lenght) ;    //设置扫查X轴
    void setYLenght(float lenght) ;     //设置扫查Y轴
    void setYStep(float step)  ;     //设置扫查步进

    void on_x_velocity_editingFinished(float val)  {Q_UNUSED(val)} // 设置X轴速度
    void on_y_velocity_editingFinished(float val)  {Q_UNUSED(val)} // 设置Y轴速度
    void on_jog_velocity_editingFinished(float val) ; // 设置点动速度

    void on_backOrigin_velocity_editingFinished(float val) ;    //回原速度
    void on_scan_velocity_editingFinished(float val) ;  //扫查速度
    void on_addSub_velocity_editingFinished(float val) ;    //点动加减速

    void on_jogStep_1_clicked() {}    //点动步进1
    void on_jogStep_5_clicked() {}    //点动步进5
    void on_jogStep_10_clicked() {}   //点动不经10

    //寸动
    void on_xAddBtn_clicked()  {}  //X+
    void on_xSubBtn_clicked()  {}  //X-
    void on_yAddBtn_clicked()  {}  //Y+
    void on_ySubBtn_clicked()  {}  //Y-
    void on_zAddBtn_clicked()  {}//X+
    void on_zSubBtn_clicked()  {} //X-
    void on_rAddBtn_clicked()  {} //Y+
    void on_rSubBtn_clicked()  {} //Y

    //点动
    void on_xAddBtn_pressed() ;  //X+
    void on_xAddBtn_released() ;
    void on_xSubBtn_pressed() ;  //X-
    void on_xSubBtn_released() ;
    void on_yAddBtn_pressed() ;  //Y+
    void on_yAddBtn_released() ;
    void on_ySubBtn_pressed() ;  //Y-
    void on_ySubBtn_released() ;
    void on_zAddBtn_pressed() {}  //Z+
    void on_zAddBtn_released() {}
    void on_zSubBtn_pressed() {}  //Z-
    void on_zSubBtn_released() {}
    void on_rAddBtn_pressed(){}//Z+
    void on_rAddBtn_released(){}
    void on_rSubBtn_pressed(){}  //Z-
    void on_rSubBtn_released() {}

    void on_alarmResetBtn_clicked() {}    //报警复位
    void on_setLimitBtn_clicked() {}      //设置机械极限位
    void on_setMachineBtn_clicked() {}    //设置机械极原点

    void on_singleScan_toggled(bool checked) ;   //单边模式

    void runTargetPosition(double, double) {}

private slots:
    void updateView();
    void modbusState();

private:
    void initModbus();
    void initViewData();

    float readModbusFloatData(int v1, int v2);
    QPair<quint16, quint16> writeModbusFloatData(float value) ;

    void writeCoilsData(int address, quint16 size, quint16 data);
    void writeHoldingRegistersData(int address, quint16 size, quint32 data);

private:
    QModbusTcpClient *modbusClient = nullptr;
    QString PlcIP;
    int PlcPort = 502;
    QSettings *settings = nullptr;
    QTimer *timer = nullptr;

    float xScanLenght = 0;
    float yScanLenght = 0;
    float yScanStep = 0;
    float xVelocity = 20;
    float yVelocity = 20;
    float jogVelocity = 20;
    float jogAddSubVelocity = 0;
    float scanVelocity = 0;
    float backOriginVelocity = 0;

    ScanModel scanModel = ScanModel::NormalScan;    //扫查模式
    QPointF currentPos = QPointF(0,0);
};

#endif // SCANCONTROLTAIDA_H
