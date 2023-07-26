#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "qlineedit.h"
#include <QMainWindow>
#include <QtMath>
#include <QMessageBox>
#include <exprtk.hpp>
#include <string>

typedef exprtk::parser<double>		 parser_d;
typedef exprtk::symbol_table<double> table_d;
typedef exprtk::expression<double>	 expression_d;

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
    parser_d parser;
    table_d table;
    expression_d expression;
    double result;
};
#endif // CALCULATOR_H
