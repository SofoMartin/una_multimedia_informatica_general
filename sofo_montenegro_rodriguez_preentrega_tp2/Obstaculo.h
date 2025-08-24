#pragma once
#include <ncurses.h>
#include <cstdlib>
#include "Bote.h"

class Obstaculo
{
public:
  Obstaculo(int x, int y);
  void update();
  void draw();

  void colision(Bote &rBote);

  int getX();
  int getY();

private:
  float m_x, m_y;
};
