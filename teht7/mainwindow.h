#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button120Sec_clicked();
    void on_button5Min_clicked();
    void on_buttonStart_clicked();
    void on_buttonStop_clicked();
    void on_buttonSwitch1_clicked();
    void on_buttonSwitch2_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    short gameTime;
    short currentPlayer;
    short player1Time;
    short player2Time;

    void setGameInfoText(); //tämä ei nyt toimi ohjeiden määrämällä tavalla mutta mielestäni tarpeeksi toimiva
    void updateProgressBar();
};
#endif // MAINWINDOW_H
