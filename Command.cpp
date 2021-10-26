#include "Command.h"

Command::Command(RemoteControlVehicle* vehicle){
    receiver = vehicle;
}

RemoteControlVehicle* Command::getReceiver(){
    return receiver;
}

Command::~Command(){
    delete receiver;
    cout << "Command destroyed" << endl;
}