#include "SettingsDlg.h"
#include "ui_SettingsDlg.h"
#include"Util/SEventFilterObject.h"
#include<QPainter>
#include<QStyleOption>
#include<QButtonGroup>
SettingsDlg::SettingsDlg(QWidget* parent)
	:QDialog(parent),
	ui(new Ui::SettingsDlg)
{
	ui->setupUi(this);
	initUi();
	//去掉边框 & 顶置窗口
	setWindowFlag(Qt::FramelessWindowHint);
	setWindowFlag(Qt::WindowStaysOnTopHint);
	//安装过滤器
	installEventFilter(new SEventFilterObject(this));
}

SettingsDlg::~SettingsDlg()
{
	delete ui;
}

void SettingsDlg::initUi()
{
	//桌宠按钮组
	auto btnGroup = new QButtonGroup(this);
	btnGroup->setExclusive(true);		//设置按钮互斥
	btnGroup->addButton(ui->model1Chx,BlackGirl);
	btnGroup->addButton(ui->model2Chx,SummberGirl);
	btnGroup->addButton(ui->model3Chx,LittleBoy);
	//blackgril表情按钮组
	auto rbtnGroup = new QButtonGroup(this);
	rbtnGroup->setExclusive(true);		//设置按钮互斥
	rbtnGroup->addButton(ui->emoji1rbtn, Happy);
	rbtnGroup->addButton(ui->emoji2rbtn, Sad);
	rbtnGroup->addButton(ui->emoji3rbtn, Naughty);
	rbtnGroup->addButton(ui->emoji4rbtn, Shy);
	//background按钮组
	auto bbtnGroup = new QButtonGroup(this);
	bbtnGroup->setExclusive(true);		//设置按钮互斥
	bbtnGroup->addButton(ui->backPng1, One);
	bbtnGroup->addButton(ui->backPng2, Two);
	bbtnGroup->addButton(ui->backPng3, Three);

	connect(btnGroup, &QButtonGroup::idToggled,[=](int id, bool checked) {
		if (checked) {
			emit modelChanged(ModelType(id));
		}
		});
	connect(rbtnGroup, &QButtonGroup::idToggled,[=](int id, bool checked) {
		if (checked) {
			emit emojiChanged(EmojiType(id));
		}
		});
	connect(bbtnGroup, &QButtonGroup::idToggled,[=](int id, bool checked) {
		if (checked) {
			emit backgroundChanged(BackgroundType(id));
		}
		});
	connect(ui->selectPicture, &QPushButton::clicked, [this] {
		emit selectBackground();
		});
}

void SettingsDlg::on_model1btn_clicked()
{
	ui->stackedWidget->setCurrentWidget(ui->page_blackgril);
}

void SettingsDlg::on_model2btn_clicked()
{
	ui->stackedWidget->setCurrentWidget(ui->page_summergril);
}

void SettingsDlg::on_model3btn_clicked()
{
	ui->stackedWidget->setCurrentWidget(ui->page_littleboy);
}

void SettingsDlg::on_settingsbtn_clicked()
{
	ui->stackedWidget->setCurrentWidget(ui->page_settings);
}

void SettingsDlg::on_closeBtn_clicked()
{
	this->close();
}
