#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) // constructor
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->display->setPlaceholderText(QString("Type here..."));
    ui->lineEdit_expression->setPlaceholderText(QString("Enter a f(x) expression..."));
    ui->lineEdit_expression_2->setPlaceholderText(QString("Enter a f(x) expression..."));
    LEArray[0] = ui->lineEdit_expression;
    LEArray[1] = ui->lineEdit_expression_2;
    LEArray[1]->setVisible(false);
    connect(LEArray[0], &QLineEdit::textChanged, this, &Calculator::LEChanged);
    connect(LEArray[1], &QLineEdit::textChanged, this, &Calculator::LEChanged);
    for(int i = 2; i < LE_COUNT; ++i)
    {
        LEArray[i] = new QLineEdit(this);
        LEArray[i]->setPlaceholderText(QString("Enter a f(x) expression..."));
        LEArray[i]->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        LEArray[i]->setStyleSheet("QLineEdit{\n	background-color: #D3D3D3;"
                                  "\n	border: 1px solid gray;"
                                  "\n	color: #555555;\n}");
        LEArray[i]->setFont(QFont("System-ui", 11));
        LEArray[i]->setPlaceholderText(QString("Enter a f(x) expression..."));
        ui->verticalLayout_LE->addWidget(LEArray[i]);
        LEArray[i]->setVisible(false);
        connect(LEArray[i], &QLineEdit::textChanged, this, &Calculator::LEChanged);
    }
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
    ui->pushButton_exp->setProperty("name", 'e');
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
    connect(ui->pushButton_exp, &QPushButton::clicked, this, &Calculator::calc_key_handler);
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

    // setting up parsers
    parser.DefineConst("pi", I_PI); // more accurate that M_PI
    parser.DefineConst("exp", M_E);
    parser.DefineFun("cos", Icos);
    parser.DefineFun("sin", Isin);
    parser.DefineFun("tan", Itan);
    parser.DefineFun("ctan", Ictan);

    for(int i = 0; i < LE_COUNT + 1; ++i)
    {
        graphParser[i].DefineConst("pi", M_PI);
        graphParser[i].DefineConst("exp", M_E);
        graphParser[i].DefineVar("x", &(varX[i]));
    }


    // initialiasing coordinates
    x.resize(POINTS_SIZE);
    vecY.resize(LE_COUNT);
    for (int i = 0; i < LE_COUNT; ++i)
    {
        vecY[i].resize(POINTS_SIZE);
    }
    for (int i = 0; i < x.size(); ++i)
    {
        x[i] = i / 500.0 - 1.0;
    }
    // QCustomPlot
    ui->customPlot->setAttribute(Qt::WA_OpaquePaintEvent);
    ui->customPlot->setOpenGl(true);
    ui->customPlot->setNoAntialiasingOnDrag(false); // cause opengl works
    connect(ui->customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(xAxisChanged(QCPRange)));
    // create and configure plottables:
    for(int i = 0; i < LE_COUNT; i++)
    {
        graph[i] = ui->customPlot->addGraph();
        //graph[i]->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssNone, QPen(Qt::black, 1.5), QBrush(Qt::white), 9));
        graph[i]->setAdaptiveSampling(false); // !IMPORTANT -- for no optimization of gap(nan) points
    }
    graph[0]->setPen(QPen(QColor(0, 180, 0), 2));
    graph[1]->setPen(QPen(QColor(180, 0, 0), 2));
    graph[2]->setPen(QPen(QColor(0, 0, 180), 2));
    graph[3]->setPen(QPen(QColor(160, 75, 135), 2));
    graph[4]->setPen(QPen(QColor(200, 160, 75), 2));
    // set some pens, brushes and backgrounds:
    ui->customPlot->xAxis->setBasePen(QPen(Qt::white, 2));
    ui->customPlot->yAxis->setBasePen(QPen(Qt::white, 2));
    ui->customPlot->xAxis->setTickPen(QPen(Qt::white, 2));
    ui->customPlot->yAxis->setTickPen(QPen(Qt::white, 2));
    ui->customPlot->xAxis->setSubTickPen(QPen(Qt::white, 2));
    ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white, 2));
    ui->customPlot->xAxis->setTickLabelColor(Qt::white);
    ui->customPlot->yAxis->setTickLabelColor(Qt::white);
    ui->customPlot->xAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    ui->customPlot->yAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    ui->customPlot->xAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    ui->customPlot->xAxis->grid()->setSubGridVisible(true);
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    ui->customPlot->xAxis->setLabel("X");
    ui->customPlot->yAxis->setLabel("Y");
    ui->customPlot->xAxis->setLabelColor(Qt::white);
    ui->customPlot->yAxis->setLabelColor(Qt::white);
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
    str = ui->display->text().toStdString();
    parser.SetExpr(str);
    try
    {
        result = parser.Eval();
    }
    catch(...)
    {
        ui->statusbar->showMessage("Error, expression is incorrect");
        return;
    }
    if(std::isinf(result) or std::isnan(result)) // error
    {
        ui->statusbar->showMessage("Error, expression is incorrect");
        return;
    }
    ui->statusbar->clearMessage();
    ui->display->setText(QString::number(result));
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
    case 'e': ui->display->insert("exp"); break;
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
        connect(hw, &QDialog::finished, this, &Calculator::deleteHelpMenu);
        hw->setWindowModality(Qt::NonModal);
        hw->show();
    }
}


void Calculator::deleteHelpMenu()
{
    delete hw;
    hw = nullptr;
}


void Calculator::on_actionDefault_triggered() // Default mode
{
    ui->stackedWidget->setCurrentIndex(int(Mode::Default));
}


void Calculator::on_actionGraphic_triggered() // Graphic mode
{
    ui->stackedWidget->setCurrentIndex(int(Mode::Graphic));
}


bool Calculator::checkLE()
{
    bool fl = true;
    for(int i =0; i < currentLEIndex; ++i)
    {
        str = LEArray[i]->text().toStdString();
        graphParser[i].SetExpr(str);
        try
        {
            graphParser[i].Eval();
        }
        catch(...)
        {
            LEArray[i]->setStyleSheet("background-color: #AE0000; border: 1px solid red; color: #000;");
            fl = false;
            continue;
        }
        LEArray[i]->setStyleSheet("background-color: #D3D3D3; border: 1px solid gray; color: #555555;");
    }
    return fl;
}


void Calculator::LEChanged(const QString arg)
{
    QLineEdit* le = qobject_cast<QLineEdit*>(sender());
    le->setStyleSheet("background-color: #D3D3D3; border: 1px solid gray; color: #555555;");
    graphParser[5].SetExpr(arg.toStdString());
    try
    {
        graphParser[5].Eval();
    }
    catch(...)
    {
        le->setStyleSheet("background-color: #AE0000; border: 1px solid red; color: #000;");
        return;
    }
}


void Calculator::on_pushButton_draw_clicked() // Draw graph
{
    //
    bool ok = checkLE();
    if(!ok)
    {
        ui->statusbar->showMessage("Error, expression is incorrect");
        for(int i = 0; i < currentLEIndex; ++i)
        {
            graph[i]->setVisible(false);
        }
        ui->customPlot->replot();
        isBadGraphExpr = true;
        return;
    }
    for(int i = 0; i < currentLEIndex; ++i)
    {
        graph[i]->setVisible(true);
    }
    isBadGraphExpr = false;
    ui->statusbar->clearMessage();
    xAxisChanged(ui->customPlot->xAxis->range());
}


void Calculator::xAxisChanged(const QCPRange& newRange) // changed xAxis max or min value
{
    if(isBadGraphExpr)
    {
        return;
    }
    // vecY[j][i] - double value of j graph y coordinate
    // formula of recalculating of current x[i] coordinate accroding to new xAxis range
    varX[0] = x[0] = newRange.lower + 0 * (abs(newRange.lower - newRange.upper) / (POINTS_SIZE - 1));
    for(int j = 0; j < currentLEIndex; ++j) // for every graph
    {
        vecY[j][0] = graphParser[j].Eval();
        for(int i = 1; i < x.size(); ++i) // calculate every coordinate
        {
            varX[j] = x[i] = newRange.lower + i * (abs(newRange.lower - newRange.upper) / (POINTS_SIZE - 1)) ;
            vecY[j][i] = graphParser[j].Eval();
            if(isMulNext) // if on prev step gap was detected
            {
                vecY[j][i] *= ACTUALLY_BIG_NUMBER;
                isMulNext = false;
            }
            if(diffSigns(vecY[j][i], vecY[j][i-1]) && abs(vecY[j][i]) + abs(vecY[j][i-1]) > 1.0) // gap detected
            {
                vecY[j][i] = std::numeric_limits<double>::quiet_NaN(); // gap point
                vecY[j][i - 1] *= ACTUALLY_BIG_NUMBER; // prev should be super big or super small
                isMulNext = true; // NEXT should be super big or super small
            }
        }
        graph[j]->setData(x, vecY[j]);
    }
    ui->customPlot->replot();
}


void Calculator::on_actionOn_triggered() // toggle antialiasing on
{
    ui->customPlot->setNotAntialiasedElements(QCP::aeNone); // some optimisation
    ui->customPlot->replot();
}


void Calculator::on_actionOff_triggered() // toggle antialiasing off
{
    ui->customPlot->setNotAntialiasedElements(QCP::aeAll); // some optimisation
    ui->customPlot->replot();
}


void Calculator::on_pushButton_addw_clicked() // show lineEdit
{
    if(currentLEIndex == LE_COUNT)
    {
        currentLEIndex--;
    }
    LEArray[currentLEIndex++]->show();
}


void Calculator::on_pushButton_rmw_clicked() // hide lineEdit
{
    if(currentLEIndex == 1)
        currentLEIndex++;
    LEArray[--currentLEIndex]->hide();
    LEArray[currentLEIndex]->clear();
    LEArray[currentLEIndex]->setStyleSheet("background-color: #D3D3D3; border: 1px solid gray; color: #555555;");
    graph[currentLEIndex]->setVisible(false);
    ui->customPlot->replot();
}
