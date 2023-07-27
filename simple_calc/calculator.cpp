#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) // constructor
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->display->setPlaceholderText(QString("Type here..."));
    ui->lineEdit_expression->setPlaceholderText(QString("Enter an expression..."));
    // setting names to buttons
    ui->pushButton_0->setProperty("name", '0');
    ui->pushButton_1->setProperty("name", '1');
    ui->pushButton_2->setProperty("name", '2');
    ui->pushButton_3->setProperty("name", '3');
    ui->pushButton_4->setProperty("name", '4');
    ui->pushButton_5->setProperty("name", '5');
    ui->pushButton_6->setProperty("name", '6');
    ui->pushButton_7->setProperty("name", '7');
    ui->pushButton_8->setProperty("name", '8');
    ui->pushButton_9->setProperty("name", '9');
    ui->pushButton_percent->setProperty("name", '%');
    ui->pushButton_sqrt->setProperty("name", 's');
    ui->pushButton_degree->setProperty("name", '^');
    ui->pushButton_Pi->setProperty("name", 'p');
    ui->pushButton_bracket_left->setProperty("name", '(');
    ui->pushButton_bracket_right->setProperty("name", ')');
    ui->pushButton_div->setProperty("name", '/');
    ui->pushButton_mul->setProperty("name", '*');
    ui->pushButton_sub->setProperty("name", '-');
    ui->pushButton_sum->setProperty("name", '+');
    ui->pushButton_dot->setProperty("name", '.');
    ui->pushButton_res->setProperty("name", '=');
    ui->pushButton_backspace->setProperty("name", 'b');

    //connecting buttons
    connect(ui->pushButton_backspace, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_0, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_percent, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_sqrt, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_degree, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_Pi, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_bracket_left, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_bracket_right, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_div, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_mul, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_sub, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_sum, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_dot, &QPushButton::clicked, this, &Calculator::calc_key_handler);
    connect(ui->pushButton_res, &QPushButton::clicked, this, &Calculator::calc_key_handler);

    ui->stackedWidget->setCurrentIndex(int(Mode::Default));

    parser.DefineConst("pi", M_PI);
    parser.DefineConst("exp", M_E);

    // QCustomPlot
    x.resize(1000);
    // create and configure plottables:
    graph = ui->customPlot->addGraph();
    graph->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssNone, QPen(Qt::black, 1.5), QBrush(Qt::white), 9));
    graph->setPen(QPen(QColor(120, 120, 120), 2));
    // set some pens, brushes and backgrounds:
    ui->customPlot->xAxis->setBasePen(QPen(Qt::white, 1));
    ui->customPlot->yAxis->setBasePen(QPen(Qt::white, 1));
    ui->customPlot->xAxis->setTickPen(QPen(Qt::white, 1));
    ui->customPlot->yAxis->setTickPen(QPen(Qt::white, 1));
    ui->customPlot->xAxis->setSubTickPen(QPen(Qt::white, 1));
    ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white, 1));
    ui->customPlot->xAxis->setTickLabelColor(Qt::white);
    ui->customPlot->yAxis->setTickLabelColor(Qt::white);
    ui->customPlot->xAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    ui->customPlot->yAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    ui->customPlot->xAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    ui->customPlot->xAxis->grid()->setSubGridVisible(true);
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");
    QLinearGradient plotGradient;
    plotGradient.setStart(0, 0);
    plotGradient.setFinalStop(0, 350);
    plotGradient.setColorAt(0, QColor(80, 80, 80));
    plotGradient.setColorAt(1, QColor(50, 50, 50));
    ui->customPlot->setBackground(plotGradient);
    QLinearGradient axisRectGradient;
    axisRectGradient.setStart(0, 0);
    axisRectGradient.setFinalStop(0, 350);
    axisRectGradient.setColorAt(0, QColor(80, 80, 80));
    axisRectGradient.setColorAt(1, QColor(30, 30, 30));
    ui->customPlot->axisRect()->setBackground(axisRectGradient);
    ui->customPlot->rescaleAxes();
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(-1, 1);


    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
}

Calculator::~Calculator() // destructor
{
    delete ui;
}


void Calculator::on_pushButton_clear_clicked() // clear button
{
    ui->display->clear();
    ui->statusbar->clearMessage();
}


void Calculator::on_pushButton_res_clicked() // result button clicked
{
    str = ui->display->text();
    tmp = str.toStdString();
    parser.SetExpr(tmp);
    try
    {
        result = parser.Eval();
    }
    catch(...)
    {
        ui->statusbar->showMessage("Error, expression is incorrect");
        return;
    }
    if(std::isinf(result) or std::isnan(result)) // division by zero handling
    {
        ui->statusbar->showMessage("Error, division by zero");
        return;
    }
    ui->statusbar->clearMessage();
    ui->display->setText(QString::number(result, 'f', 4));
}

void Calculator::calc_key_handler()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    switch(btn->property("name").toInt())
    {
    case 0: return;
    case 'b': ui->display->backspace(); break;
    case '0': ui->display->insert("0"); break;
    case '1': ui->display->insert("1"); break;
    case '2': ui->display->insert("2"); break;
    case '3': ui->display->insert("3"); break;
    case '4': ui->display->insert("4"); break;
    case '5': ui->display->insert("5"); break;
    case '6': ui->display->insert("6"); break;
    case '7': ui->display->insert("7"); break;
    case '8': ui->display->insert("8"); break;
    case '9': ui->display->insert("9"); break;
    case 's': ui->display->insert("sqrt("); break;
    case '%': ui->display->insert("%"); break;
    case '^': ui->display->insert("^"); break;
    case '(': ui->display->insert("("); break;
    case ')': ui->display->insert(")"); break;
    case '.': ui->display->insert("."); break;
    case '+': ui->display->insert("+"); break;
    case '-': ui->display->insert("-"); break;
    case '*': ui->display->insert("*"); break;
    case '/': ui->display->insert("/"); break;
    case 'p': ui->display->insert("pi"); break;
    default:
        break;
    }
}


void Calculator::on_actionExit_triggered() // close event
{
    this->close();
}


void Calculator::on_actionHelp_triggered() // help window open
{
    if(!hw)
    {
      hw = new HelpWindow(this);
      hw->setWindowModality(Qt::NonModal);
      hw->show();
      return;
    }
    hw->activateWindow();
}


void Calculator::on_actionDefault_triggered() // Default mode
{
    ui->stackedWidget->setCurrentIndex(int(Mode::Default));
}


void Calculator::on_actionGraphic_triggered() // Graphic mode
{
    ui->stackedWidget->setCurrentIndex(int(Mode::Graphic));
}

