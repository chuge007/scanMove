#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDoubleValidator>

#include "scancontrolclass.h"
#include "./TaiDa/scancontroltaida.h"
#include "./HuiChuan/scancontrolhuichuan.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void initWidget();
    void connectFun();
    void updateWight();

private slots:
    void updateVelocity(float x, float y, float jog);
    void updatePosition(QPointF pos);

    void updateScanScope(float v1, float v2, float v3);
    void updateTaiDaVelocity(float v1, float v2, float v3, float v4);
    void scanRowEnd(AxisState);
    void timeChange(QString ms);

    void on_x_velocity_editingFinished();
    void on_y_velocity_editingFinished();
    void on_jog_velocity_editingFinished();
    void on_x_lenght_editingFinished();
    void on_y_lenght_editingFinished();
    void on_y_step_editingFinished();

    void on_IP_Edit_editingFinished();

    void on_port_Edit_editingFinished();

    void on_backOrigin_velocity_editingFinished();

    void on_scan_velocity_editingFinished();

    void on_jog_add_sub_velocity_editingFinished();

    void on_pushButton_clicked();

signals:
    void x_velocity_editingFinished(float arg);
    void y_velocity_editingFinished(float arg);
    void jog_velocity_editingFinished(float arg);
    void x_lenght_editingFinished(float arg);
    void y_lenght_editingFinished(float arg);
    void y_step_editingFinished(float arg);

    void backOrigin_velocity_editingFinished(float arg);
    void scan_velocity_editingFinished(float arg);
    void jog_add_sub_velocity_editingFinished(float arg);

    void movePosition(double x, double y);

private:
    Ui::MainWindow *ui;

    ScanControlAbstract *scanCtrl;
    ScanControlHuiChuan *scanCtrlHunChuan;
    ScanControlTaiDa *scanCtrlTaiDa;

};

#endif // MAINWINDOW_H
