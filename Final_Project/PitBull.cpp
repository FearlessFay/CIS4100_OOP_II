/***************** File name: PitBull.cpp *****************/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Enemy.h"
#include "PitBull.h"

using namespace std;

PitBull::PitBull(){
    setXPosition(400);
    setYPosition(500);
    setStatus(2);
    direction = true;
}
void PitBull::move_position(){
    if (getStatus() != 0){
        //check to make sure it won't move past 2D space boundary
        //object will change direction if it would go past boundary
        if ((direction) && (getXPosition() + 10) > 800){
            direction = false;
}
        else if (!(direction) && (getXPosition() - 10) < 0){
            direction = true;
}
        //move to right
        if (direction){
            setXPosition(getXPosition() + 10);
}
        //move to left
        else
            setXPosition(getXPosition() - 10);
            cout << "PitBull moves to " << getXPosition() << "," << getYPosition() << " ";
}
    else
        cout << "PitBull's dead body remains at " << getXPosition() << "," << getYPosition() << " ";
}

void PitBull::fire_weapon(){
    string attacks[8] = { "rip head", "bite head", "rip chest", "bite chest", "rip arm", "bite arm", "rip leg", "bite leg" };
    int randAttack;
    srand((unsigned int)time(NULL));
    cout << "PitBull uses weapon: ";

    if (getStatus() != 0){
        randAttack = rand() % 8;
        cout << attacks[randAttack] << endl;
}

    else
        cout << "dead" << endl;
}

void PitBull::update_status(){
    //check if object is not dead or about to die
    if (getStatus() > 1){
        setStatus(getStatus() - 1);
        cout << "PitBull update status: hit by bullet, status points: " << getStatus() << " (ARRRGH )" << endl;
}
    //object is dead
    else
        cout << "PitBull update status: hit by bullet, status points: 0 (dead)" << endl;
}
