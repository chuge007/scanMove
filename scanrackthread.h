#ifndef SCANRACKTHREAD_H
#define SCANRACKTHREAD_H

#include "scancontrolabstract.h"
#include <QMutex>
#include <QThread>

class ScanRackThread : public QObject {
    Q_OBJECT
public:
    // 机械型号
    enum MechanicalType {
        HuiChuan = 0,
        TaiDa,
    };

    explicit ScanRackThread(QObject* parent = nullptr);
    ~ScanRackThread();
    ScanControlAbstract* obj();
    /**
    * 进行连接操作时，判断扫查架型号再进行连接
    * @param plcIP - plc ip，判断型号的依据
    * @return 0:失败，1:不生成新对象，2:生成新对象
    */
    int switchScanRackConnection(QString plcIP, int port);
    int getMechanicalType();

signals:

public slots:

private:
    QThread *thread = nullptr;
    ScanControlAbstract* scanControl = nullptr;
    int mechanicalType = -1;
    QString lastIP;
    int lastPort;
};

#endif // SCANRACKTHREAD_H
