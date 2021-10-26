#include "TurnOn.h"

TurnOn::TurnOn(RemoteControlVehicle* vehicle):Command(vehicle){}

void TurnOn::execute(){
    getReceiver()->on();
}

void TurnOn::undo(){
    getReceiver()->off();
}

TurnOn::~TurnOn(){
    cout << "TurnOn destroyed" << endl;
}