/***************** File name: Soldier.h *****************/
#pragma once
#include <iostream>
#include "Enemy.h"

using namespace std;
// Create child class named Soldier.
class Soldier :public Enemy{
private:
  // Declare the private data members
  bool direction;    //true = right; false = left
  int ammo;
public:
  // Declare the methods.
  Soldier();
  void move_position();
  void fire_weapon();
  void update_status();
};

