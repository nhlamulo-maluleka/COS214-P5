#ifndef TURNON_H
#define TURNON_H
#include "Command.h"

class TurnOn: public Command{
    public:
        TurnOn(RemoteControlVehicle*);
        virtual void execute();
        virtual void undo();
        ~TurnOn();

};

#endif //TURNON_H