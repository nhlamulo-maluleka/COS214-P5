#ifndef COMMAND_H
#define COMMAND_H
#include "RemoteControlVehicle.h"

class Command{
    private:
        RemoteControlVehicle* receiver;

    public:
        Command(RemoteControlVehicle*);
        virtual void execute() = 0;
        virtual void undo() = 0;
        virtual RemoteControlVehicle* getReceiver();
        virtual void handleRequest(){}
        virtual ~Command();
};

#endif //COMMAND_H