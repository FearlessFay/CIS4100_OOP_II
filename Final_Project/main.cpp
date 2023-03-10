/***************** File name: main.cpp *****************/
#include "Enemy.h"
#include "Jet.h"
#include "PitBull.h"
#include "Soldier.h"
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char* argv[]){
  const int max_enemy = 20;
  // Declare an arry of objects.
  Enemy* enemy_ptr[max_enemy];
  int num_enemy;
  srand((unsigned int)time(NULL));

  // create Enemy objects, place in array
  enemy_ptr[0] = new Jet();
  enemy_ptr[1] = new PitBull();
  enemy_ptr[2] = new Soldier();
  
  // set value of num_enemy
  num_enemy = 3;
  while (true){
    for (int i = 0; i < num_enemy; i++){
        enemy_ptr[i]->move_position();
}
    cout << endl;

    int RandIndex = rand() % num_enemy;
    enemy_ptr[RandIndex]->fire_weapon();

    RandIndex = rand() % num_enemy;
    enemy_ptr[RandIndex]->update_status();
    _getch();
    cout << endl;
}
  return 0;
}
