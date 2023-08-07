/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QAction *actionDefault;
    QAction *actionGraphic;
    QAction *actionHelp;
    QAction *actionExit;
    QAction *actionOn;
    QAction *actionOff;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_default;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_degree;
    QPushButton *pushButton_5;
    QPushButton *pushButton_clear;
    QLineEdit *display;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_bracket_left;
    QPushButton *pushButton_Pi;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_7;
    QPushButton *pushButton_bracket_right;
    QPushButton *pushButton_1;
    QPushButton *pushButton_sum;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_8;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_div;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_res;
    QWidget *page_graph;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_rmw;
    QPushButton *pushButton_addw;
    QPushButton *pushButton_draw;
    QCustomPlot *customPlot;
    QVBoxLayout *verticalLayout_LE;
    QLineEdit *lineEdit_expression;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuAntialiasing;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(413, 619);
        Calculator->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: qlineargradient(spread:pad, x1:0.239, y1:0.125182, x2:0.934308, y2:0.931, stop:0 rgba(56, 53, 50, 255), stop:1 rgba(205, 204, 197, 255));\n"
"}"));
        actionDefault = new QAction(Calculator);
        actionDefault->setObjectName(QString::fromUtf8("actionDefault"));
        actionGraphic = new QAction(Calculator);
        actionGraphic->setObjectName(QString::fromUtf8("actionGraphic"));
        actionHelp = new QAction(Calculator);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionExit = new QAction(Calculator);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOn = new QAction(Calculator);
        actionOn->setObjectName(QString::fromUtf8("actionOn"));
        actionOff = new QAction(Calculator);
        actionOff->setObjectName(QString::fromUtf8("actionOff"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_default = new QWidget();
        page_default->setObjectName(QString::fromUtf8("page_default"));
        gridLayout_2 = new QGridLayout(page_default);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_6 = new QPushButton(page_default);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(55, 55));
        QFont font;
        font.setFamilies({QString::fromUtf8("System-ui")});
        font.setPointSize(14);
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_6, 4, 2, 1, 1);

        pushButton_2 = new QPushButton(page_default);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(55, 55));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_2, 5, 1, 1, 1);

        pushButton_degree = new QPushButton(page_default);
        pushButton_degree->setObjectName(QString::fromUtf8("pushButton_degree"));
        sizePolicy.setHeightForWidth(pushButton_degree->sizePolicy().hasHeightForWidth());
        pushButton_degree->setSizePolicy(sizePolicy);
        pushButton_degree->setMinimumSize(QSize(55, 55));
        pushButton_degree->setFont(font);
        pushButton_degree->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #999999;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_degree, 1, 3, 1, 1);

        pushButton_5 = new QPushButton(page_default);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(55, 55));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_5, 4, 1, 1, 1);

        pushButton_clear = new QPushButton(page_default);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setMinimumSize(QSize(55, 55));
        pushButton_clear->setFont(font);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #6D6D64;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #DDD\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_clear, 1, 2, 1, 1);

        display = new QLineEdit(page_default);
        display->setObjectName(QString::fromUtf8("display"));
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("System-ui")});
        font1.setPointSize(36);
        font1.setBold(true);
        display->setFont(font1);
        display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	color: #555555;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(display, 0, 0, 1, 4);

        pushButton_sqrt = new QPushButton(page_default);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        sizePolicy.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy);
        pushButton_sqrt->setMinimumSize(QSize(55, 55));
        pushButton_sqrt->setFont(font);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_sqrt, 1, 1, 1, 1);

        pushButton_bracket_left = new QPushButton(page_default);
        pushButton_bracket_left->setObjectName(QString::fromUtf8("pushButton_bracket_left"));
        sizePolicy.setHeightForWidth(pushButton_bracket_left->sizePolicy().hasHeightForWidth());
        pushButton_bracket_left->setSizePolicy(sizePolicy);
        pushButton_bracket_left->setMinimumSize(QSize(55, 55));
        pushButton_bracket_left->setFont(font);
        pushButton_bracket_left->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_bracket_left, 2, 0, 1, 1);

        pushButton_Pi = new QPushButton(page_default);
        pushButton_Pi->setObjectName(QString::fromUtf8("pushButton_Pi"));
        sizePolicy.setHeightForWidth(pushButton_Pi->sizePolicy().hasHeightForWidth());
        pushButton_Pi->setSizePolicy(sizePolicy);
        pushButton_Pi->setMinimumSize(QSize(55, 55));
        pushButton_Pi->setFont(font);
        pushButton_Pi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_Pi, 2, 2, 1, 1);

        pushButton_exp = new QPushButton(page_default);
        pushButton_exp->setObjectName(QString::fromUtf8("pushButton_exp"));
        sizePolicy.setHeightForWidth(pushButton_exp->sizePolicy().hasHeightForWidth());
        pushButton_exp->setSizePolicy(sizePolicy);
        pushButton_exp->setMinimumSize(QSize(55, 55));
        pushButton_exp->setFont(font);
        pushButton_exp->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_exp, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(page_default);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(55, 55));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_bracket_right = new QPushButton(page_default);
        pushButton_bracket_right->setObjectName(QString::fromUtf8("pushButton_bracket_right"));
        sizePolicy.setHeightForWidth(pushButton_bracket_right->sizePolicy().hasHeightForWidth());
        pushButton_bracket_right->setSizePolicy(sizePolicy);
        pushButton_bracket_right->setMinimumSize(QSize(55, 55));
        pushButton_bracket_right->setFont(font);
        pushButton_bracket_right->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_bracket_right, 2, 1, 1, 1);

        pushButton_1 = new QPushButton(page_default);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(55, 55));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_1, 5, 0, 1, 1);

        pushButton_sum = new QPushButton(page_default);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        sizePolicy.setHeightForWidth(pushButton_sum->sizePolicy().hasHeightForWidth());
        pushButton_sum->setSizePolicy(sizePolicy);
        pushButton_sum->setMinimumSize(QSize(55, 55));
        pushButton_sum->setFont(font);
        pushButton_sum->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #999999;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_sum, 5, 3, 1, 1);

        pushButton_mul = new QPushButton(page_default);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        sizePolicy.setHeightForWidth(pushButton_mul->sizePolicy().hasHeightForWidth());
        pushButton_mul->setSizePolicy(sizePolicy);
        pushButton_mul->setMinimumSize(QSize(55, 55));
        pushButton_mul->setFont(font);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #999999;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_mul, 3, 3, 1, 1);

        pushButton_8 = new QPushButton(page_default);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(55, 55));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_sub = new QPushButton(page_default);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        sizePolicy.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy);
        pushButton_sub->setMinimumSize(QSize(55, 55));
        pushButton_sub->setFont(font);
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #999999;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_sub, 4, 3, 1, 1);

        pushButton_4 = new QPushButton(page_default);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(55, 55));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_4, 4, 0, 1, 1);

        pushButton_3 = new QPushButton(page_default);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(55, 55));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_3, 5, 2, 1, 1);

        pushButton_div = new QPushButton(page_default);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        sizePolicy.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy);
        pushButton_div->setMinimumSize(QSize(55, 55));
        pushButton_div->setFont(font);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #999999;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_div, 2, 3, 1, 1);

        pushButton_9 = new QPushButton(page_default);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(55, 55));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_0 = new QPushButton(page_default);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setMinimumSize(QSize(55, 55));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_0, 6, 0, 1, 1);

        pushButton_dot = new QPushButton(page_default);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        pushButton_dot->setMinimumSize(QSize(55, 55));
        pushButton_dot->setFont(font);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_dot, 6, 1, 1, 1);

        pushButton_backspace = new QPushButton(page_default);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        sizePolicy.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy);
        pushButton_backspace->setMinimumSize(QSize(55, 55));
        pushButton_backspace->setFont(font);
        pushButton_backspace->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_backspace, 6, 2, 1, 1);

        pushButton_res = new QPushButton(page_default);
        pushButton_res->setObjectName(QString::fromUtf8("pushButton_res"));
        sizePolicy.setHeightForWidth(pushButton_res->sizePolicy().hasHeightForWidth());
        pushButton_res->setSizePolicy(sizePolicy);
        pushButton_res->setMinimumSize(QSize(55, 55));
        pushButton_res->setFont(font);
        pushButton_res->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #999999;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_2->addWidget(pushButton_res, 6, 3, 1, 1);

        gridLayout_2->setRowStretch(0, 5);
        gridLayout_2->setRowStretch(1, 3);
        gridLayout_2->setRowStretch(2, 3);
        gridLayout_2->setRowStretch(3, 3);
        gridLayout_2->setRowStretch(4, 3);
        gridLayout_2->setRowStretch(5, 3);
        gridLayout_2->setRowStretch(6, 3);
        stackedWidget->addWidget(page_default);
        page_graph = new QWidget();
        page_graph->setObjectName(QString::fromUtf8("page_graph"));
        gridLayout_3 = new QGridLayout(page_graph);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_rmw = new QPushButton(page_graph);
        pushButton_rmw->setObjectName(QString::fromUtf8("pushButton_rmw"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_rmw->sizePolicy().hasHeightForWidth());
        pushButton_rmw->setSizePolicy(sizePolicy1);
        pushButton_rmw->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #999999;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_3->addWidget(pushButton_rmw, 1, 2, 1, 1);

        pushButton_addw = new QPushButton(page_graph);
        pushButton_addw->setObjectName(QString::fromUtf8("pushButton_addw"));
        sizePolicy1.setHeightForWidth(pushButton_addw->sizePolicy().hasHeightForWidth());
        pushButton_addw->setSizePolicy(sizePolicy1);
        pushButton_addw->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #999999;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_3->addWidget(pushButton_addw, 1, 1, 1, 1);

        pushButton_draw = new QPushButton(page_graph);
        pushButton_draw->setObjectName(QString::fromUtf8("pushButton_draw"));
        sizePolicy1.setHeightForWidth(pushButton_draw->sizePolicy().hasHeightForWidth());
        pushButton_draw->setSizePolicy(sizePolicy1);
        pushButton_draw->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #6D6D64;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #DDD\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #778899;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #CCC\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFF\n"
"}"));

        gridLayout_3->addWidget(pushButton_draw, 0, 1, 1, 2);

        customPlot = new QCustomPlot(page_graph);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 191, 188);"));

        gridLayout_3->addWidget(customPlot, 3, 0, 2, 3);

        verticalLayout_LE = new QVBoxLayout();
        verticalLayout_LE->setObjectName(QString::fromUtf8("verticalLayout_LE"));
        lineEdit_expression = new QLineEdit(page_graph);
        lineEdit_expression->setObjectName(QString::fromUtf8("lineEdit_expression"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_expression->sizePolicy().hasHeightForWidth());
        lineEdit_expression->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("System-ui")});
        font2.setPointSize(11);
        lineEdit_expression->setFont(font2);
        lineEdit_expression->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	color: #555555;\n"
"}"));

        verticalLayout_LE->addWidget(lineEdit_expression);


        gridLayout_3->addLayout(verticalLayout_LE, 0, 0, 2, 1);

        gridLayout_3->setRowStretch(3, 3);
        gridLayout_3->setColumnStretch(0, 10);
        gridLayout_3->setColumnStretch(1, 2);
        gridLayout_3->setColumnStretch(2, 2);
        stackedWidget->addWidget(page_graph);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 413, 22));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ubuntu")});
        font3.setPointSize(11);
        font3.setBold(true);
        menubar->setFont(font3);
        menubar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.542045, y1:0.034, x2:0.532, y2:0.983, stop:0 rgba(45, 45, 45, 255), stop:1 rgba(81, 80, 77, 255));\n"
"color: #DDD;"));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuAntialiasing = new QMenu(menuMenu);
        menuAntialiasing->setObjectName(QString::fromUtf8("menuAntialiasing"));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Ubuntu")});
        font4.setPointSize(18);
        font4.setBold(false);
        statusbar->setFont(font4);
        statusbar->setStyleSheet(QString::fromUtf8("color: #7d0e0e;"));
        Calculator->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionDefault);
        menuMenu->addAction(actionGraphic);
        menuMenu->addAction(menuAntialiasing->menuAction());
        menuMenu->addAction(actionHelp);
        menuMenu->addAction(actionExit);
        menuAntialiasing->addAction(actionOn);
        menuAntialiasing->addAction(actionOff);

        retranslateUi(Calculator);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        actionDefault->setText(QCoreApplication::translate("Calculator", "Default mode", nullptr));
        actionGraphic->setText(QCoreApplication::translate("Calculator", "Graphic mode", nullptr));
        actionHelp->setText(QCoreApplication::translate("Calculator", "Help", nullptr));
        actionExit->setText(QCoreApplication::translate("Calculator", "Exit", nullptr));
        actionOn->setText(QCoreApplication::translate("Calculator", "On", nullptr));
        actionOff->setText(QCoreApplication::translate("Calculator", "Off", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_degree->setText(QCoreApplication::translate("Calculator", "^", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        display->setText(QString());
        pushButton_sqrt->setText(QCoreApplication::translate("Calculator", "\342\210\232", nullptr));
        pushButton_bracket_left->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        pushButton_Pi->setText(QCoreApplication::translate("Calculator", "\360\235\234\213", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("Calculator", "exp", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_bracket_right->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        pushButton_backspace->setText(QCoreApplication::translate("Calculator", "\342\214\253", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_backspace->setShortcut(QCoreApplication::translate("Calculator", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_res->setText(QCoreApplication::translate("Calculator", "=", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_res->setShortcut(QCoreApplication::translate("Calculator", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_rmw->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_addw->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_draw->setText(QCoreApplication::translate("Calculator", "Draw", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_draw->setShortcut(QCoreApplication::translate("Calculator", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        menuMenu->setTitle(QCoreApplication::translate("Calculator", "Menu", nullptr));
        menuAntialiasing->setTitle(QCoreApplication::translate("Calculator", "Antialiasing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
