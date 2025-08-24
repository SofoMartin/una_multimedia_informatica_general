#include "Personita.h"

///////////////////////////////////////////////////////////////////////////
Personita::Personita(int x, int y)
{
  m_x = x;
  m_y = y;
  m_activa = true;
}

///////////////////////////////////////////////////////////////////////////
void Personita::update()
{
  if (m_activa)
  {
    m_y = m_y + 0.3f;

    if (m_y >= 39)
    {
      reposition();
    }
  }
}

///////////////////////////////////////////////////////////////////////////
void Personita::draw()
{
  if (m_activa)
  {
    mvaddch(m_y, m_x, 'O');
    mvaddch(m_y + 1, m_x, '|');
    mvaddch(m_y + 2, m_x - 1, '/');
    mvaddch(m_y + 2, m_x + 1, '\\');
  }
}

///////////////////////////////////////////////////////////////////////////
bool Personita::checkColision(Bote &rBote)
{
  if (m_activa)
  {
    int persX = (int)m_x;
    int persY = (int)m_y;
    
    if (persX >= rBote.getX() && persX <= rBote.getX() + 4 && 
        persY >= rBote.getY() - 2 && persY <= rBote.getY() + 2)
    {
      m_activa = false;
      return true; 
    }
  }
  return false;
}

///////////////////////////////////////////////////////////////////////////
void Personita::reposition()
{
  m_x = rand() % 119 + 1;
  m_y = 1;
  m_activa = true;
}

///////////////////////////////////////////////////////////////////////////
bool Personita::isActiva() { return m_activa; }
int Personita::getX() { return (int)m_x; }
int Personita::getY() { return (int)m_y; }

