#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    QMainWindow::setWindowIcon(QIcon(":/icon.iso"));
}

Calculator::~Calculator()
{
    delete ui;
}

