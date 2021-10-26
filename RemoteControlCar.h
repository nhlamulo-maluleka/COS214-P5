#ifndef REMOTECONTROLCAR_H
#define REMOTECONTROLCAR_H
#include "RemoteControlVehicle.h"

class RemoteControlCar: public RemoteControlVehicle{
    private:
        /* data */
    public:
        RemoteControlCar();
        ~RemoteControlCar();
        virtual void on();
        virtual void off();
        virtual void forward();
        virtual void backward();
};

#endif //REMOTECONTROLCAR_H