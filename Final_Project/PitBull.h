/***************** File name: PitBull.h *****************/
#pragma once
#include <iostream>
#include "Enemy.h"

using namespace std;

// Create a child class named PitBull
class PitBull :public Enemy{
private:
  // Declare the private data members
  bool direction;    //true = right; false = left
public:
  // Create the methods.
  PitBull();
  void move_position();
  void fire_weapon();
  void update_status();
};
