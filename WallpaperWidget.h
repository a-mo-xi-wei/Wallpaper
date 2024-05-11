#ifndef WALLPAPERWIDGET_H_
#define WALLPAPERWIDGET_H_

#include<QWidget>

class WallpaperWidget : public QWidget
{
	Q_OBJECT
public:
	WallpaperWidget(QWidget* parent = nullptr);
	void setPixmap(const QString& file);
protected:
	void paintEvent(QPaintEvent* ev)override;
	//void resizeEvent(QResizeEvent* ev)override;
private:
	QPixmap m_pixmap;
};

#endif // !WALLPAPERWIDGET_H_
