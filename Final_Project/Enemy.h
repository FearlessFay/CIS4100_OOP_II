/***************** File name: Enemy.h *****************/
#pragma once
#include <iostream>

using namespace std;

// Create a parent class Enemy
class Enemy{
  // Declare the private data members
private:
  int x_position;
  int y_position;
  int width;
  int height;
  int status;
  // Declare the methods
protected:
  int getXPosition();
  void setXPosition(int x);
  int getYPosition();
  void setYPosition(int y);
  int getWidth();
  void setWidth(int w);
  int getHeight();
  void setHeight(int h);
  int getStatus();
  void setStatus(int s);
public:
  virtual void move_position() = 0;
  virtual void fire_weapon() = 0;
  virtual void update_status() = 0;
};
