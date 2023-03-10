/***************** File name: Jet.cpp *****************/
#include <iostream>
#include "Enemy.h"
#include "Jet.h"

using namespace std;

Jet::Jet(){
    setXPosition(800);
    setYPosition(100);
    setStatus(8);
    direction = false;
    ammo = 4;
}

void Jet::move_position(){
    if (getStatus() != 0){
        if ((direction) && ((getXPosition() + 30) > 800)){
            direction = false;
}
        else if (!(direction) && (getXPosition() - 30) < 0){
            direction = true;
}
        if (direction){
            setXPosition(getXPosition() + 30);
}
        else
            setXPosition(getXPosition() - 30);
            cout << "Jet move to " << getXPosition() << "," << getYPosition() << " ";
}
    //object is dead
    else{
        cout << "Jet's destroyed parts remain at " << getXPosition() << "," << getYPosition() << " ";
}
}

void Jet::fire_weapon(){
    cout << "Jet fires weapon: ";
    //check if object is not dead
    if (getStatus() != 0){
        //check if has ammo
        if (ammo != 0){
            ammo--;
            cout << "missile (" << ammo << " left)" << endl;
}
        //does not have ammo
        else{
        cout << "none (no ammo available)" << endl;
}
}
    //object is dead
    else{
        cout << "dead" << endl;
}
}

void Jet::update_status(){
    //check if object is not dead or about to die
    if (getStatus() > 1){
        setStatus(getStatus() - 1);
        cout << "Jet update status: hit by bullet, status points: " << getStatus() << " (ping)" << endl;
}
    //object is dead
    else
        cout << "Jet update status: hit by bullet, status points: 0 (dead)" << endl;
}
