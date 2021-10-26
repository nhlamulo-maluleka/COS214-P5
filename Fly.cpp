#include "Fly.h"

Fly::Fly(RemoteControlVehicle* vehicle):Command(vehicle){}

void Fly::execute(){
    handleRequest();
}

void Fly::undo(){
    getReceiver()->on();
}

Fly::~Fly(){
    cout << "Fly destroyed" << endl;
}

void Fly::handleRequest(){
    getReceiver()->forward();
}