#ifndef REMOTECONTROLVEVICLE_H
#define REMOTECONTROLVEVICLE_H
#include<iostream>
#include<string>
using namespace std;

class RemoteControlVehicle{
    private:
        bool toggle;
        
    public:
        RemoteControlVehicle(){ toggle = false; }
        virtual ~RemoteControlVehicle(){}
        virtual void on() = 0;
        virtual void off() = 0;
        virtual void forward() = 0;
        virtual void backward() = 0;
        virtual bool getToggleStatus(){ return toggle; }
        virtual void setToggleStatus(bool s){ toggle = s; }
};

#endif //REMOTECONTROLVEVICLE_H