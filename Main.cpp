#include "RemoteControlCar.h"
#include "RemoteControlPlane.h"
#include "TurnOn.h"
#include "TurnOff.h"
#include "MoveForward.h"
#include "MoveBackward.h"
#include "Fly.h"
#include "Speed.h"
#include "Button.h"
#include "RocketAdapter.h"

int main(){
    cout << "==========================================================" << endl;
    cout << "================= COMMAND DESIGN PATTERN =================" << endl;
    cout << "==========================================================" << endl;
    cout <<  endl;

    // Command Design Pattern Showcase
    RemoteControlVehicle* vehicle;
    Button* off;
    Button* on;
    Button* forward;
    Button* backward;
    Button* fly;
    Button* speed;

    vehicle = new RemoteControlCar();
    off = new Button(new TurnOff(vehicle));
    on = new Button(new TurnOn(vehicle));
    forward = new Button(new MoveForward(vehicle));
    backward = new Button(new MoveBackward(vehicle));
    speed = new Button(new Speed(vehicle));

    cout << "----------------VEHICLE IS TURNED \"OFF\"----------------" << endl;
    cout << endl;
    cout << "\"Attempting to move forward\"" << endl;
    forward->press();

    cout << endl;
    // If turning the vehicle on
    cout << "----------------VEHICLE IS TURNED \"ON!\"----------------" << endl;
    cout << endl;

    on->press();
    forward->press();
    backward->press();
    off->press();

    cout << endl;
    // If turning the vehicle on
    cout << "-----------CHAIN OF RESPONSIBILITY INCLUDED-----------" << endl;
    cout << endl;

    on->press();
    speed->press();
    backward->press();
    off->press();

    cout << endl;

    vehicle = new RemoteControlPlane();
    off = new Button(new TurnOff(vehicle));
    on = new Button(new TurnOn(vehicle));
    forward = new Button(new MoveForward(vehicle));
    backward = new Button(new MoveBackward(vehicle));
    fly = new Button(new Fly(vehicle));

    cout << "----------------PLANE IS TURNED \"OFF\"----------------" << endl;
    cout << endl;
    cout << "\"Attempting to move forward\"" << endl;
    forward->press();

    cout << endl;
    // If turning the vehicle on
    cout << "----------------PLANE IS TURNED \"ON!\"----------------" << endl;
    cout << endl;
    
    on->press();
    forward->press();
    backward->press();
    off->press();

    cout << endl;
    // If turning the vehicle on
    cout << "-----------CHAIN OF RESPONSIBILITY INCLUDED-----------" << endl;
    cout << endl;

    on->press();
    fly->press();
    backward->press();
    off->press();
    
    delete vehicle;

    cout << endl;
    cout << "==========================================================" << endl;
    cout << "================= ADAPTER DESIGN PATTERN =================" << endl;
    cout << "==========================================================" << endl;
    cout << endl;
    
    // Adapter Design Pattern Showcase
    RemoteControlRocket* rocket = new RemoteControlRocket();
    RocketAdapter* adapter = new RocketAdapter(rocket);
    // If the vehicle is not already on
    cout << "----------------ROCKET IS TURNED \"OFF\"----------------" << endl;
    cout << endl;
    cout << "\"Attempting to move forward\"" << endl;
    adapter->forward();

    cout << endl;
    // If turning the vehicle on
    cout << "----------------ROCKET IS TURNED \"ON!\"----------------" << endl;
    cout << endl;

    adapter->on();
    adapter->forward();
    adapter->backward();
    cout << endl;
    // Turning the vehicle off
    adapter->off();

    cout << endl;
    cout << "----------------ROCKET IS TURNED \"OFF\"----------------" << endl;
    cout << endl;
    cout << "\"Attempting to move backward after vehicle turned off...\"" << endl;
    adapter->backward();

    cout << endl;

    delete adapter;
    return 0;
}