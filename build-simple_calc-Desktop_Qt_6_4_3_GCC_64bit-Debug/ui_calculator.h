/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_degree;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_2;
    QLineEdit *display;
    QPushButton *pushButton_sum;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_bracket_left;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_bracket_right;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_res;
    QPushButton *pushButton_Pi;
    QPushButton *pushButton_5;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_8;
    QPushButton *pushButton_div;
    QMenuBar *menubar;
    QMenu *menuMode;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(413, 592);
        Calculator->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: qlineargradient(spread:pad, x1:0.239, y1:0.125182, x2:0.934308, y2:0.931, stop:0 rgba(56, 53, 50, 255), stop:1 rgba(205, 204, 197, 255));\n"
"}"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton_degree = new QPushButton(centralwidget);
        pushButton_degree->setObjectName("pushButton_degree");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_degree->sizePolicy().hasHeightForWidth());
        pushButton_degree->setSizePolicy(sizePolicy);
        pushButton_degree->setMinimumSize(QSize(55, 55));
        QFont font;
        font.setFamilies({QString::fromUtf8("System-ui")});
        font.setPointSize(14);
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

        gridLayout->addWidget(pushButton_degree, 1, 3, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
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

        gridLayout->addWidget(pushButton_0, 6, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(55, 55));
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

        gridLayout->addWidget(pushButton_6, 4, 2, 1, 1);

        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName("pushButton_sub");
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

        gridLayout->addWidget(pushButton_sub, 4, 3, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
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

        gridLayout->addWidget(pushButton_2, 5, 1, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
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

        gridLayout->addWidget(display, 0, 0, 1, 4);

        pushButton_sum = new QPushButton(centralwidget);
        pushButton_sum->setObjectName("pushButton_sum");
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

        gridLayout->addWidget(pushButton_sum, 5, 3, 1, 1);

        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        sizePolicy.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy);
        pushButton_percent->setMinimumSize(QSize(55, 55));
        pushButton_percent->setFont(font);
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(pushButton_percent, 1, 0, 1, 1);

        pushButton_bracket_left = new QPushButton(centralwidget);
        pushButton_bracket_left->setObjectName("pushButton_bracket_left");
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

        gridLayout->addWidget(pushButton_bracket_left, 2, 0, 1, 1);

        pushButton_backspace = new QPushButton(centralwidget);
        pushButton_backspace->setObjectName("pushButton_backspace");
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

        gridLayout->addWidget(pushButton_backspace, 6, 2, 1, 1);

        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName("pushButton_mul");
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

        gridLayout->addWidget(pushButton_mul, 3, 3, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
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

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
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

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
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

        gridLayout->addWidget(pushButton_1, 5, 0, 1, 1);

        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName("pushButton_sqrt");
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

        gridLayout->addWidget(pushButton_sqrt, 1, 1, 1, 1);

        pushButton_bracket_right = new QPushButton(centralwidget);
        pushButton_bracket_right->setObjectName("pushButton_bracket_right");
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

        gridLayout->addWidget(pushButton_bracket_right, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
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

        gridLayout->addWidget(pushButton_3, 5, 2, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
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

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_res = new QPushButton(centralwidget);
        pushButton_res->setObjectName("pushButton_res");
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

        gridLayout->addWidget(pushButton_res, 6, 3, 1, 1);

        pushButton_Pi = new QPushButton(centralwidget);
        pushButton_Pi->setObjectName("pushButton_Pi");
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

        gridLayout->addWidget(pushButton_Pi, 2, 2, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
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

        gridLayout->addWidget(pushButton_5, 4, 1, 1, 1);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
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

        gridLayout->addWidget(pushButton_clear, 1, 2, 1, 1);

        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName("pushButton_dot");
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

        gridLayout->addWidget(pushButton_dot, 6, 1, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
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

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName("pushButton_div");
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

        gridLayout->addWidget(pushButton_div, 2, 3, 1, 1);

        gridLayout->setRowStretch(0, 5);
        gridLayout->setRowStretch(1, 2);
        gridLayout->setRowStretch(2, 2);
        gridLayout->setRowStretch(3, 2);
        gridLayout->setRowStretch(4, 2);
        gridLayout->setRowStretch(5, 2);
        gridLayout->setRowStretch(6, 2);
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 413, 22));
        menubar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.542045, y1:0.034, x2:0.532, y2:0.983, stop:0 rgba(45, 45, 45, 255), stop:1 rgba(81, 80, 77, 255));"));
        menuMode = new QMenu(menubar);
        menuMode->setObjectName("menuMode");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        menubar->addAction(menuMode->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        pushButton_degree->setText(QCoreApplication::translate("Calculator", "^", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        display->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        pushButton_bracket_left->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        pushButton_backspace->setText(QCoreApplication::translate("Calculator", "\342\214\253", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_backspace->setShortcut(QCoreApplication::translate("Calculator", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_mul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("Calculator", "\342\210\232", nullptr));
        pushButton_bracket_right->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_res->setText(QCoreApplication::translate("Calculator", "=", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_res->setShortcut(QCoreApplication::translate("Calculator", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_Pi->setText(QCoreApplication::translate("Calculator", "\360\235\234\213", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        menuMode->setTitle(QCoreApplication::translate("Calculator", "Mode", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Calculator", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
