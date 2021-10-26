#include "RemoteControlPlane.h"

RemoteControlPlane::RemoteControlPlane(){}

RemoteControlPlane::~RemoteControlPlane(){}

void RemoteControlPlane::on(){
    cout << "RC plane is turned on." << endl;
    setToggleStatus(true);
}

void RemoteControlPlane::off(){
    cout << "RC place is turned off." << endl;
    setToggleStatus(false);
}

void RemoteControlPlane::forward(){
    if(getToggleStatus())
        cout << "RC plane pulls up into a vertical climb." << endl;
    else
        off();
}

void RemoteControlPlane::backward(){
    if(getToggleStatus())
        cout << "RC plane points its nose down into a dive." << endl;
    else
        off();
}