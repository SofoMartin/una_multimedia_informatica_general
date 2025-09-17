#include "Obstaculo.h"

///////////////////////////////////////////////////////////////////////////
Obstaculo::Obstaculo(int x, int y)
{
  m_x = x;
  m_y = y;
}

///////////////////////////////////////////////////////////////////////////
void Obstaculo::update()
{
  m_y = m_y + 0.4f;

  if (m_y >= 39)
  {
    m_x = rand() % 119 + 1;
    m_y = 1;
  }
}

///////////////////////////////////////////////////////////////////////////
void Obstaculo::draw()
{
  mvaddch((int)m_y, (int)m_x, 'A');
}

///////////////////////////////////////////////////////////////////////////
void Obstaculo::colision(Bote &rBote)
{
  int astX = (int)m_x;
  int astY = (int)m_y;
  
  if(astX >= rBote.getX() && astX <= rBote.getX() + 4 && 
     astY >= rBote.getY() && astY <= rBote.getY() + 2)
  {
    // RESTAR VIDA Y ACTIVAR EXPLOSIÓN
    rBote.setVidas(rBote.getVidas() - 1);
    rBote.explotar(); // Activar animación de explosión

    m_x = rand() % 119 + 1;
    m_y = 1;
  }
}

///////////////////////////////////////////////////////////////////////////
int Obstaculo::getX() { return (int)m_x; }
int Obstaculo::getY() { return (int)m_y; }
