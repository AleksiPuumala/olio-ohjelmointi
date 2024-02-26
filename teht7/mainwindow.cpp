#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);

    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);

    ui->label->setText("Select playtime");

    player1Time = 0;
    player2Time = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button120Sec_clicked()
{
    gameTime = 120;
    ui->label->setText("Click start");
}

void MainWindow::on_button5Min_clicked()
{
    gameTime = 300;
    ui->label->setText("Click start");
}

void MainWindow::on_buttonStart_clicked()
{
    if (timer->isActive()) {
        timer->stop();
    }

    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);

    player1Time = gameTime;
    player2Time = gameTime;

    //yritys korjata bugi joka sai uudet pelit kiihtymään liian nopeasti
    disconnect(timer, &QTimer::timeout, this, &MainWindow::updateProgressBar);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateProgressBar);

    timer->start(1000);

    currentPlayer = 1;

    setGameInfoText();
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1) {
        player1Time--;
        ui->progressBar1->setValue((player1Time * 100) / gameTime);
        if (player1Time <= 0) {
            timer->stop();
            ui->label->setText("Player 2 won!");
            return;
        }
    } else {
        player2Time--;
        ui->progressBar2->setValue((player2Time * 100) / gameTime);
        if (player2Time <= 0) {
            timer->stop();
            ui->label->setText("Player 1 won!");
            return;
        }
    }
}

void MainWindow::setGameInfoText()
{
    if (timer->isActive()) {
        ui->label->setText("Game ongoing");
    } else {
        ui->label->setText("Click start for a new game");
    }
}

void MainWindow::on_buttonStop_clicked()
{
    timer->stop();
    setGameInfoText();
}

void MainWindow::on_buttonSwitch1_clicked()
{
    currentPlayer = 2;
    setGameInfoText();
}

void MainWindow::on_buttonSwitch2_clicked()
{
    currentPlayer = 1;
    setGameInfoText();
}
