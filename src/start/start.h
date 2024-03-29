﻿#ifndef START_H
#define START_H

#include <QWidget>
#include <QtWidgets/QWidget>
#include <QPoint>
#include <QMouseEvent>

#include "src/mainWindow/baseMainWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Start; }
QT_END_NAMESPACE

class Start: public QWidget, public qls::BaseMainWindow
{
    Q_OBJECT

public:
    Start(QWidget* parent = nullptr);
    ~Start();

protected slots:
    //界面移动
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);

private:
    Ui::Start* ui;

    bool flag_;
    QPoint _position;
};


#endif // !START_H
