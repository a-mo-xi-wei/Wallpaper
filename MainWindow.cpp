#include "MainWindow.h"
#include"Util/SEventFilterObject.h"
#include"SGlobalDef.h"
#include<QPainter>
#include<QTimer>
#include<QMouseEvent>
#include<QFileDialog>
#include<QStandardPaths>
#include<QMenu>
#include<QApplication>
MainWindow::MainWindow(QWidget* parent)
	:QWidget(parent),
	m_wallpaperWidget(new WallpaperWidget)
{
	initUi();
	this->setWindowIcon(QIcon(":/Resource/trayIcon.jpg"));
	this->m_wallpaperWidget->setPixmap(this->m_wallpaperBackground);
	//去掉边框 & 顶置窗口
	setWindowFlag(Qt::FramelessWindowHint);
	setWindowFlag(Qt::WindowStaysOnTopHint);
	//背景透明
	setAttribute(Qt::WA_TranslucentBackground);
	//安装过滤器
	installEventFilter(new SEventFilterObject);
	this->m_modelId = 0;
	this->m_modelEmoji = 3;
	//固定大小
	setFixedSize(343, 480);
	//动画定时器
	auto timer = new QTimer(this);
	timer->callOnTimeout(this, QOverload<>::of(&MainWindow::update));
	timer->start(100);
	
}

void MainWindow::initUi()
{
	initTrayIconMenu();
	this->m_closeBtn = new QPushButton(this);
	this->m_closeBtn->setObjectName("closeBtn");
	this->m_settingsBtn = new QPushButton(this);
	this->m_settingsBtn->setObjectName("settingsBtn");

	this->m_closeBtn->move(136, 224);
	this->m_settingsBtn->move(176, 224);

	//初始化设置窗口
	this->m_settingsDlg = new SettingsDlg(this);
	//接收人物模型改变信号
	connect(this->m_settingsDlg, &SettingsDlg::modelChanged, [=] (ModelType type){
		this->m_modelId = type;
		});
	//接收人物表情改变信号
	connect(this->m_settingsDlg, &SettingsDlg::emojiChanged, [=](EmojiType type) {
		this->m_modelEmoji = type;
		});
	//接收壁纸变化
	connect(this->m_settingsDlg, &SettingsDlg::backgroundChanged, [=](BackgroundType type) {
		QString pixName = QString(":/Resource/wallpaper/%1.jpg").arg(type + 1);
		this->m_wallpaperBackground = pixName;
		this->m_wallpaperWidget->setPixmap(this->m_wallpaperBackground);
		//this->m_wallpaperWidget->update();
		//qDebug() << pixName;
		});

	//接收自定义壁纸
	connect(this->m_settingsDlg, &SettingsDlg::selectBackground, [=] {
		auto filename = QFileDialog::getOpenFileName(this, "请选择壁纸",
		QStandardPaths::writableLocation(QStandardPaths::PicturesLocation),
		"all(*.*);;png(*.png);;jpg(*.jpg)");
		if (filename.isEmpty())return;
		//this->m_selectBackground = QFileInfo(filename).path() + '/' + QFileInfo(filename).fileName();
		this->m_selectBackground = QFileInfo(filename).filePath();
		//qDebug() << QFileInfo(filename).filePath();
		this->m_wallpaperWidget->setPixmap(this->m_selectBackground);
		});

	connect(this->m_closeBtn, &QPushButton::clicked, this, &QWidget::close); 
	connect(this->m_settingsBtn, &QPushButton::clicked, this->m_settingsDlg, &QDialog::show);

	this->setStyleSheet(R"(
		QPushButton{width:32px;height:32px;border:none;border-radius:15px;background-color:rgba(230,231,239,200);}
		QPushButton:hover{background-color:rgba(194,195,201,200);}
		QPushButton#closeBtn{image:url(:/Resource/button/shut.png);}
		QPushButton#closeBtn:hover{background-color:red;}
		QPushButton#settingsBtn{icon:url(:/Resource/button/setting.png);}
	)");
}

void MainWindow::initTrayIconMenu() {
	auto m_TrayMenu = new QMenu(this);
	m_TrayMenu->addAction("打开主面板", [=] {
		this->showNormal();
		this->raise();
		});
	m_TrayMenu->addSeparator();
	m_TrayMenu->addAction("退出", [] {qApp->quit(); });
	//创建托盘（一定要设置图标，没有图标，托盘不可见）
	this->m_TrayIcon = new  QSystemTrayIcon(QIcon(":/Resource/trayIcon.jpg"), this);
	this->m_TrayIcon->setContextMenu(m_TrayMenu);
	//显示托盘
	this->m_TrayIcon->show();
	connect(this->m_TrayIcon, &QSystemTrayIcon::activated, this, [=](QSystemTrayIcon::ActivationReason reason) {
		if (reason == QSystemTrayIcon::Trigger) {
			if (this->isMinimized())
			{
				this->showNormal();
				this->raise();
			}
			else
			{
				this->showMinimized();
			}
		}
		});

}

void MainWindow::paintEvent(QPaintEvent* paint)
{
	QPainter painter(this);
	QString pixName = QString("%1.png").arg(m_frameIndex);
	//painter.fillRect(rect(), Qt::green);
	if(this->m_modelId == 0)
		painter.drawPixmap(0, 0, QPixmap(":/Resource/desktopRole/summerGril/"+pixName));
	else if(this->m_modelId == 1)
		painter.drawPixmap(0, 0, QPixmap(":/Resource/desktopRole/littleBoy/" + pixName));
	else if (this->m_modelId == 2)
	{
		if (this->m_modelEmoji == 0)
			painter.drawPixmap(0, 0, QPixmap(":/Resource/desktopRole/blackGril/action1-happy/" + pixName));
		else if(this->m_modelEmoji == 1)
			painter.drawPixmap(0, 0, QPixmap(":/Resource/desktopRole/blackGril/action2-sad/" + pixName));
		else if(this->m_modelEmoji == 2)
			painter.drawPixmap(0, 0, QPixmap(":/Resource/desktopRole/blackGril/action3-naughty/" + pixName));
		else 
			painter.drawPixmap(0, 0, QPixmap(":/Resource/desktopRole/blackGril/action4-shy/" + pixName));
		
	}
	this->m_frameIndex = (this->m_frameIndex + 1) % 6;
	//qDebug() <<"wallpaperBackground : " << this->m_wallpaperBackground;
	//qDebug() << this->m_frameIndex;
}

void MainWindow::mouseReleaseEvent(QMouseEvent* ev)
{
	if (ev->button() == Qt::RightButton) {
		this->m_closeBtn->setHidden(!this->m_closeBtn->isHidden());
		this->m_settingsBtn->setHidden(!this->m_settingsBtn->isHidden());
	}
}
