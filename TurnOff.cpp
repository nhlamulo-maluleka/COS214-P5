#include "TurnOff.h"

TurnOff::TurnOff(RemoteControlVehicle* vehicle):Command(vehicle){}

void TurnOff::execute(){
    getReceiver()->off();
}

void TurnOff::undo(){
    getReceiver()->on();
}

TurnOff::~TurnOff(){
    cout << "TurnOff destroyed" << endl;
}