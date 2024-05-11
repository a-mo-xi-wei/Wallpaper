#include "WallpaperWidget.h"
#include"Util/finddektophwnd.h"
#include<QPainter>
#include<QApplication>
#include<QScreen>
WallpaperWidget::WallpaperWidget(QWidget* parent)
	:QWidget(parent)
{
	showFullScreen();
	//把桌面窗口设置为父对象
	FindDektopHwnd::SetParent(this);
	//获取屏幕列表
	//QList<QScreen*>list = qApp->screens();
	//qDebug() << "list size : " << list.size();
	//for (auto scr : list)
	//{
	//	qDebug() << scr->availableGeometry() << scr->geometry();
	//}
	//this->setGeometry(0, 0, 1376, 774);
}

void WallpaperWidget::setPixmap(const QString& file)
{
	QPixmap pix(file);
	if (!pix.isNull())
	{
		this->m_pixmap = pix.scaled(size(),Qt::KeepAspectRatio);
		//qDebug() << __FUNCTION__<<"pixName : "<<m_pixmap;
		update();//此处若是不更新，就无法加载图片，因为paintEvent只会加载一次
	}
}

void WallpaperWidget::paintEvent(QPaintEvent* ev)
{
	QPainter painter(this);
	this->m_pixmap = this->m_pixmap.scaled(size());
	painter.drawPixmap(0,0,this->m_pixmap);
	//qDebug() <<"background : " << this->m_pixmap;
}

//void WallpaperWidget::resizeEvent(QResizeEvent* ev)
//{
//	this->m_pixmap = this->m_pixmap.scaled(size());
//}
