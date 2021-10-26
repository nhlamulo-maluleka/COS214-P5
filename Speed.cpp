#include "Speed.h"

Speed::Speed(RemoteControlVehicle* vehicle):Command(vehicle){}

void Speed::execute(){
    handleRequest();
}

void Speed::undo(){
    getReceiver()->on();
}

Speed::~Speed(){
    cout << "Speed destroyed" << endl;
}

void Speed::handleRequest(){
    getReceiver()->forward();
}