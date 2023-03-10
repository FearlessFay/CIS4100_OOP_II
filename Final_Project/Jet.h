/***************** File name: Jet.h *****************/
#pragma once
#include <iostream>
#include "Enemy.h"

using namespace std;

// Create a child class named Jet
class Jet :public Enemy{
private:
  // Declare the private data members.
  bool direction;//true 8= right; false = left
  int ammo;
public:
  // Declare the methods.
  Jet();
  void move_position();
  void fire_weapon();
  void update_status();
};

