#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QtMath>
#include <QMessageBox>
#include <string>
#include <muParser.h>

typedef mu::Parser Parser;

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();


private slots:
    void on_pushButton_clear_clicked();

    void on_pushButton_res_clicked();

    void calc_key_handler();

private:
    Ui::Calculator *ui;
    std::string tmp;
    QString str;
    double result;
    Parser parser;
};
#endif // CALCULATOR_H
