#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include"SettingsDlg.h"
#include"WallpaperWidget.h"
#include<QWidget>
#include<QPushButton>
#include<QSystemTrayIcon>
class MainWindow : public QWidget
{
	Q_OBJECT
public:
	MainWindow(QWidget* parent = nullptr);
	void initUi();
	void initTrayIconMenu();
protected:
	void paintEvent(QPaintEvent* paint)override;
	void mouseReleaseEvent(QMouseEvent* ev)override;
private:
	int m_frameIndex = 0;	//当前帧索引
	int m_modelId = 0;		//角色模型Id
	int m_modelEmoji = 0;	//角色模型心情Id

	QPushButton* m_closeBtn{};
	QPushButton* m_settingsBtn{};

	SettingsDlg* m_settingsDlg{};

	WallpaperWidget* m_wallpaperWidget{};
	QString m_wallpaperBackground = ":/Resource/wallpaper/1.jpg";
	QString m_selectBackground;
	//托盘菜单
	QSystemTrayIcon* m_TrayIcon;
};

#endif // !MAINWINDOW_H_
