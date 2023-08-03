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
#include <Imath.h>

#define POINTS_SIZE 2501
#define ACTUALLY_BIG_NUMBER 1.0e+16 // for filling gaps
#define LE_COUNT 5

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

    void xAxisChanged(const QCPRange &newRange);

    void deleteHelpMenu();

    void on_actionOn_triggered();

    void on_actionOff_triggered();

    void on_pushButton_draw_clicked();

    void on_pushButton_addw_clicked();

    void on_pushButton_rmw_clicked();

    void LEChanged(const QString arg);

private:

    bool diffSigns(double a, double b)
    {
        if(std::isnan(a) || std::isnan(b))
            return false;
        if(std::signbit(a) && std::signbit(b))
            return false;
        else if(!std::signbit(a) && !std::signbit(b))
            return false;
        else
            return true;
        return true;
    }

    bool checkLE();

    enum class Mode{
        Default, Graphic
    };
    Ui::Calculator *ui;
    HelpWindow* hw = nullptr;
    std::string str;
    double result;
    Parser parser;
    Parser      graphParser [LE_COUNT + 1]; // + 1 for cheking lineEdits
    double      varX        [LE_COUNT + 1];
    QCPGraph*   graph       [LE_COUNT];
    QLineEdit*  LEArray     [LE_COUNT];
    int         currentLEIndex = 1;
    QVector<double> x; // all x's are the same
    QVector<QVector<double> > vecY;
    bool isBadGraphExpr = true;
    bool isMulNext = false;
};
#endif // CALCULATOR_H
