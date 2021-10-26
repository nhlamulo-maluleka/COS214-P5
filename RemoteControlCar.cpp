#include "RemoteControlCar.h"

RemoteControlCar::RemoteControlCar(){}

RemoteControlCar::~RemoteControlCar(){}

void RemoteControlCar::on(){
    cout << "RC car is turned on." << endl;
    setToggleStatus(true);
}

void RemoteControlCar::off(){
    cout << "RC car is turned off." << endl;
    setToggleStatus(false);
}

void RemoteControlCar::forward(){
    if(getToggleStatus())
        cout << "RC car drives forward quickly." << endl;
    else
        off();
}

void RemoteControlCar::backward(){
    if(getToggleStatus())
        cout << "RC car reverses backward carefully." << endl;
    else
        off();
}