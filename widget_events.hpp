// widget_events.hpp
#ifndef WIDGET_EVENTS_H
#define WIDGET_EVENTS_H

#include <QWidget>
#include <QEvent>

class WidgetEvent : public QWidget{
    Q_OBJECT

public:
    explicit WidgetEvent(QWidget *parent = nullptr);
protected:
    bool event(QEvent *event) override;
};

#endif
