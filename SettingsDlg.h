#ifndef SETTINGSDLG_H_
#define SETTINGSDLG_H_

#include"SGlobalDef.h"
#include<QDialog>
namespace Ui { class SettingsDlg; }
class SettingsDlg : public QDialog
{
	Q_OBJECT
public:
	SettingsDlg(QWidget* parent = nullptr);
	~SettingsDlg();
	void initUi();

signals:
	void modelChanged(ModelType);
signals:
	void emojiChanged(EmojiType);
signals:
	void backgroundChanged(BackgroundType);
signals:
	void selectBackground();
public slots:
	void on_model1btn_clicked();
	void on_model2btn_clicked();
	void on_model3btn_clicked();
	void on_settingsbtn_clicked();
	void on_closeBtn_clicked();
private:
	Ui::SettingsDlg* ui{};

};

#endif // !SETTINGSDLG_H_
