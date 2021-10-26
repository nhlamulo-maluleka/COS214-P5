#include "RocketAdapter.h"

RocketAdapter::RocketAdapter(RemoteControlRocket* adaptee){
    this->adaptee = adaptee;
    toggle = false;
}

RocketAdapter::~RocketAdapter(){
    delete adaptee;
}

void RocketAdapter::on(){
    cout << "The Rocket is turned on." << endl;
    adaptee->takeOff();
    setToggleStatus(true);
}

void RocketAdapter::off(){
    cout << "The Rocket is turned off." << endl;
    setToggleStatus(false);
    adaptee->stopLaunch();
}

void RocketAdapter::forward(){
    if(getToggleStatus()){
        adaptee->increaseThrottle();
    }
    else
        cout << "The Rocket is turned Off." << endl;
}

void RocketAdapter::backward(){
    if(getToggleStatus()){
        adaptee->decreaseThrottle();
    }
    else
        cout << "The Rocket is turned Off." << endl;
}

void RocketAdapter::setToggleStatus(bool t){
    toggle = t;
}

bool RocketAdapter::getToggleStatus(){
    return toggle;
}