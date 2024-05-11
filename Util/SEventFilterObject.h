#ifndef EVENTFILTEROBJECT_H
#define EVENTFILTEROBJECT_H

#include <QObject>
#include <QPoint>

class SEventFilterObject : public QObject
{
    Q_OBJECT
public:
    explicit SEventFilterObject(QObject *parent = nullptr);
    bool eventFilter(QObject *watched, QEvent *event) override;
signals:
private:
    QPoint m_pressPos;       //左键点击的坐标
    bool m_isMoving{false}; //是否正在移动
};

#endif // EVENTFILTEROBJECT_H
