/********************************************************************************
** Form generated from reading UI file 'SettingsDlg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDLG_H
#define UI_SETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_settings;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QRadioButton *backPng1;
    QRadioButton *backPng2;
    QRadioButton *backPng3;
    QPushButton *selectPicture;
    QWidget *page_littleboy;
    QLabel *label_2;
    QCheckBox *model3Chx;
    QWidget *page_blackgril;
    QLabel *label_3;
    QCheckBox *model1Chx;
    QRadioButton *emoji1rbtn;
    QRadioButton *emoji2rbtn;
    QRadioButton *emoji3rbtn;
    QRadioButton *emoji4rbtn;
    QWidget *page_summergril;
    QLabel *label;
    QCheckBox *model2Chx;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *closeWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QWidget *btnWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *settingsbtn;
    QPushButton *model1btn;
    QPushButton *model2btn;
    QPushButton *model3btn;

    void setupUi(QDialog *SettingsDlg)
    {
        if (SettingsDlg->objectName().isEmpty())
            SettingsDlg->setObjectName("SettingsDlg");
        SettingsDlg->resize(412, 380);
        SettingsDlg->setMinimumSize(QSize(412, 380));
        SettingsDlg->setMaximumSize(QSize(412, 380));
        SettingsDlg->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:rgb(207,231,244);\n"
"}\n"
"\n"
"QCheckBox,QLabel,QRadioButton{\n"
"	border:none;\n"
"	background-color:transparent;\n"
"}\n"
"QStackedWidget{\n"
"	background-color:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgb(207,231,244),stop:1 white);\n"
"	border-radius:5px;\n"
"}\n"
"QWidget#btnWidget QPushButton{\n"
"	border:none;\n"
"	background-color:rgb(106,140,188);\n"
"	border-radius:8px;\n"
"	height:30px;\n"
"	width:100px;\n"
"	color:white;\n"
"}\n"
"QWidget#btnWidget QPushButton:hover{\n"
"	background-color:rgb(0,151,255);\n"
"	\n"
"}\n"
"QWidget#closeWidget QPushButton{\n"
"	image:url(:/Resource/button/shut.png);\n"
"	border:none;\n"
"	width:32px;\n"
"	height:32x;\n"
"	border-radius:0px;\n"
"	background-color:rgb(217,217,217);\n"
"}\n"
"QWidget#closeWidget QPushButton:hover{background-color:red;}\n"
"QWidget#stackedWidget QPushButton{\n"
"	border:none;\n"
"	background-color:rgb(44,222,133);\n"
"	height:32px;\n"
"	border-radius:8px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(SettingsDlg);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(SettingsDlg);
        stackedWidget->setObjectName("stackedWidget");
        page_settings = new QWidget();
        page_settings->setObjectName("page_settings");
        verticalLayout_4 = new QVBoxLayout(page_settings);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(page_settings);
        groupBox->setObjectName("groupBox");

        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(page_settings);
        groupBox_2->setObjectName("groupBox_2");
        backPng1 = new QRadioButton(groupBox_2);
        backPng1->setObjectName("backPng1");
        backPng1->setGeometry(QRect(21, 31, 89, 16));
        backPng1->setChecked(true);
        backPng2 = new QRadioButton(groupBox_2);
        backPng2->setObjectName("backPng2");
        backPng2->setGeometry(QRect(21, 53, 89, 16));
        backPng3 = new QRadioButton(groupBox_2);
        backPng3->setObjectName("backPng3");
        backPng3->setGeometry(QRect(21, 75, 89, 16));
        selectPicture = new QPushButton(groupBox_2);
        selectPicture->setObjectName("selectPicture");
        selectPicture->setGeometry(QRect(20, 100, 75, 24));

        verticalLayout_4->addWidget(groupBox_2);

        stackedWidget->addWidget(page_settings);
        page_littleboy = new QWidget();
        page_littleboy->setObjectName("page_littleboy");
        label_2 = new QLabel(page_littleboy);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(9, -48, 221, 401));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Resource/desktopRole/littleBoy/0.png")));
        label_2->setScaledContents(false);
        model3Chx = new QCheckBox(page_littleboy);
        model3Chx->setObjectName("model3Chx");
        model3Chx->setGeometry(QRect(20, 20, 57, 20));
        stackedWidget->addWidget(page_littleboy);
        page_blackgril = new QWidget();
        page_blackgril->setObjectName("page_blackgril");
        label_3 = new QLabel(page_blackgril);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 30, 271, 331));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Resource/desktopRole/blackGril/action1-happy/1.png")));
        label_3->setScaledContents(true);
        model1Chx = new QCheckBox(page_blackgril);
        model1Chx->setObjectName("model1Chx");
        model1Chx->setGeometry(QRect(20, 20, 77, 20));
        emoji1rbtn = new QRadioButton(page_blackgril);
        emoji1rbtn->setObjectName("emoji1rbtn");
        emoji1rbtn->setGeometry(QRect(161, 21, 77, 16));
        emoji1rbtn->setChecked(true);
        emoji2rbtn = new QRadioButton(page_blackgril);
        emoji2rbtn->setObjectName("emoji2rbtn");
        emoji2rbtn->setGeometry(QRect(161, 43, 77, 16));
        emoji3rbtn = new QRadioButton(page_blackgril);
        emoji3rbtn->setObjectName("emoji3rbtn");
        emoji3rbtn->setGeometry(QRect(161, 65, 77, 16));
        emoji4rbtn = new QRadioButton(page_blackgril);
        emoji4rbtn->setObjectName("emoji4rbtn");
        emoji4rbtn->setGeometry(QRect(161, 87, 77, 16));
        stackedWidget->addWidget(page_blackgril);
        page_summergril = new QWidget();
        page_summergril->setObjectName("page_summergril");
        label = new QLabel(page_summergril);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 35, 270, 318));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resource/desktopRole/summerGril/0.png")));
        label->setScaledContents(true);
        model2Chx = new QCheckBox(page_summergril);
        model2Chx->setObjectName("model2Chx");
        model2Chx->setGeometry(QRect(20, 20, 57, 20));
        model2Chx->setChecked(true);
        stackedWidget->addWidget(page_summergril);

        horizontalLayout->addWidget(stackedWidget);

        widget_2 = new QWidget(SettingsDlg);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(108, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        closeWidget = new QWidget(widget_2);
        closeWidget->setObjectName("closeWidget");
        closeWidget->setMaximumSize(QSize(16777215, 32));
        horizontalLayout_2 = new QHBoxLayout(closeWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeBtn = new QPushButton(closeWidget);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setMinimumSize(QSize(32, 32));
        closeBtn->setMaximumSize(QSize(32, 32));

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout_2->addWidget(closeWidget);

        btnWidget = new QWidget(widget_2);
        btnWidget->setObjectName("btnWidget");
        verticalLayout = new QVBoxLayout(btnWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        settingsbtn = new QPushButton(btnWidget);
        settingsbtn->setObjectName("settingsbtn");

        verticalLayout->addWidget(settingsbtn);

        model1btn = new QPushButton(btnWidget);
        model1btn->setObjectName("model1btn");

        verticalLayout->addWidget(model1btn);

        model2btn = new QPushButton(btnWidget);
        model2btn->setObjectName("model2btn");

        verticalLayout->addWidget(model2btn);

        model3btn = new QPushButton(btnWidget);
        model3btn->setObjectName("model3btn");

        verticalLayout->addWidget(model3btn);


        verticalLayout_2->addWidget(btnWidget);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(SettingsDlg);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDlg);
    } // setupUi

    void retranslateUi(QDialog *SettingsDlg)
    {
        SettingsDlg->setWindowTitle(QCoreApplication::translate("SettingsDlg", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsDlg", "\347\250\213\345\272\217\350\256\276\347\275\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SettingsDlg", "\350\207\252\345\256\232\344\271\211\346\241\214\351\235\242\345\243\201\347\272\270", nullptr));
        backPng1->setText(QCoreApplication::translate("SettingsDlg", "1.png", nullptr));
        backPng2->setText(QCoreApplication::translate("SettingsDlg", "2.png", nullptr));
        backPng3->setText(QCoreApplication::translate("SettingsDlg", "3.png", nullptr));
        selectPicture->setText(QCoreApplication::translate("SettingsDlg", "\350\207\252\345\256\232\344\271\211\345\243\201\347\272\270", nullptr));
        label_2->setText(QString());
        model3Chx->setText(QCoreApplication::translate("SettingsDlg", "\346\250\241\345\236\213\342\221\242", nullptr));
        label_3->setText(QString());
        model1Chx->setText(QCoreApplication::translate("SettingsDlg", "\346\250\241\345\236\213\342\221\240", nullptr));
        emoji1rbtn->setText(QCoreApplication::translate("SettingsDlg", "\345\274\200\345\277\203\357\274\210\345\226\234\357\274\211", nullptr));
        emoji2rbtn->setText(QCoreApplication::translate("SettingsDlg", "\345\223\200\346\200\250\357\274\210\344\274\244\357\274\211", nullptr));
        emoji3rbtn->setText(QCoreApplication::translate("SettingsDlg", "\350\260\203\347\232\256\357\274\210\347\232\256\357\274\211", nullptr));
        emoji4rbtn->setText(QCoreApplication::translate("SettingsDlg", "\345\256\263\347\276\236\357\274\210\347\276\236\357\274\211", nullptr));
        label->setText(QString());
        model2Chx->setText(QCoreApplication::translate("SettingsDlg", "\346\250\241\345\236\213\342\221\241", nullptr));
        closeBtn->setText(QString());
        settingsbtn->setText(QCoreApplication::translate("SettingsDlg", "\350\256\276\347\275\256", nullptr));
        model1btn->setText(QCoreApplication::translate("SettingsDlg", "\344\272\272\347\211\251\346\250\241\345\236\213\342\221\240", nullptr));
        model2btn->setText(QCoreApplication::translate("SettingsDlg", "\344\272\272\347\211\251\346\250\241\345\236\213\342\221\241", nullptr));
        model3btn->setText(QCoreApplication::translate("SettingsDlg", "\344\272\272\347\211\251\346\250\241\345\236\213\342\221\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDlg: public Ui_SettingsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDLG_H
