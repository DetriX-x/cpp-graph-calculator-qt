#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QtMath>
#include <QMessageBox>
#include <string>
#include <muParser.h>
#include <helpwindow.h>
#include <qcustomplot.h>
#include <QVector>

#define POINTS_SIZE 1001

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

    void on_actionExit_triggered();

    void on_actionHelp_triggered();

    void on_actionDefault_triggered();

    void on_actionGraphic_triggered();

    void on_pushButton_clicked();

    void xAxisChanged(QCPRange newRange);


private:
    Ui::Calculator *ui;
    std::string tmp;
    QString str;
    double result;
    Parser parser;
    Parser graphParser;
    HelpWindow* hw = nullptr;
    QCPGraph* graph;
    QVector<double> x, y;
    double varX;
    bool isBadGraphExpr = true;
    enum class Mode{
        Default, Graphic
    };

};
#endif // CALCULATOR_H
