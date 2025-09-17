#pragma once
#include <ncurses.h>
#include <cstdlib>
#include "Bote.h"

class Personita
{
public:
  Personita(int x, int y);
  void update();
  void draw();
  bool checkColision(Bote &rBote);
  void reposition();
  bool isActiva();

  int getX();
  int getY();

private:
  float m_x, m_y;
  bool m_activa;
};
