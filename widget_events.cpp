// widget_events.cpp

#include "widget_events.hpp"
#include <QMetaEnum>
#include <iostream>

WidgetEvent::WidgetEvent(QWidget *parent) : QWidget(parent){}

bool WidgetEvent::event(QEvent *event){
    //reverselookup

    int enumIndex = QEvent::staticMetaObject.indexOfEnumerator("Type");
    QMetaEnum metaEnum = QEvent::staticMetaObject.enumerator(enumIndex);
    const char *name= metaEnum.valueToKey(event->type());

    if(name){
        std::cout << "Event type: " << name << " (" << event->type() << ")" << std::endl;
    }
    else{
        std::cout << "Event type: " << event->type() << std::endl;
    }

    //std::string input;
    //std::cin >> input;

    return true;
}