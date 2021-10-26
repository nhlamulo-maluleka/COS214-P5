#ifndef FLY_H
#define FLY_H
#include "Command.h"

class Fly: public Command{
    public:
        Fly(RemoteControlVehicle*);
        virtual void execute();
        virtual void undo();
        virtual void handleRequest();
        ~Fly();
};

#endif //FLY_H