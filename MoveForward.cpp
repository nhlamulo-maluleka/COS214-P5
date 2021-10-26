#include "MoveForward.h"

MoveForward::MoveForward(RemoteControlVehicle* vehicle):Command(vehicle){}

void MoveForward::execute(){
    getReceiver()->forward();
}

void MoveForward::undo(){
    getReceiver()->backward();
}

MoveForward::~MoveForward(){
    cout << "MoveForward destroyed" << endl;
}