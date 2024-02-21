#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    state = 1;

    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearClickHandler);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::enterClickHandler);
}

void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();

    if (state == 1)
    {
        number1.append(name);
        ui->num1->setText(number1);
    }
    else if (state == 2)
    {
        number2.append(name);
        ui->num2->setText(number2);
    }
    qDebug() << "Button name:" << name;
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    state = 2;

    if (name == "add")
        operand = 0;
    else if (name == "sub")
        operand = 1;
    else if (name == "mul")
        operand = 2;
    else if (name == "div")
        operand = 3;

    qDebug() << "Button name:" << name;
}

void MainWindow::enterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;

    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    qDebug() << "number 1 = " << n1 << " and number 2 = " << n2 << Qt::endl;

    float result = 0.0f;
    switch (operand) {
    case 0:
        result = n1 + n2;
        break;
    case 1:
        result = n1 - n2;
        break;
    case 2:
        result = n1 * n2;
        break;
    case 3:
        result = n1 / n2;
        break;
    }

    ui->result->setText(QString::number(result));

    state = 1;
}

void MainWindow::clearClickHandler()
{
    number1.clear();
    number2.clear();

    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();

    qDebug() << "Clear button clicked";
}

MainWindow::~MainWindow()
{
    delete ui;
}
