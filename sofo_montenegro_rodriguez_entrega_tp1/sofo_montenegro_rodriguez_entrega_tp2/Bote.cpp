#include "Bote.h"

///////////////////////////////////////////////////////////////////////////
void Bote::setup()
{
  m_x = 60;
  m_y = 20;
  
  m_vidas = 5;          
  m_explotar = false;
}

void Bote::update()
{
  if (m_explotar)
  {

  }
}

///////////////////////////////////////////////////////////////////////////
void Bote::explotar()
{
  m_explotar = true; // Activar la animación de explosión
}
///////////////////////////////////////////////////////////////////////////
void Bote::draw()
{
  if (!m_explotar)
  {
    // Bote
    mvaddch(m_y, m_x + 1, '|');
    mvaddch(m_y, m_x + 2, '>');
    
    mvaddch(m_y + 1, m_x, ACS_ULCORNER);
    mvaddch(m_y + 1, m_x + 1, ACS_HLINE);
    mvaddch(m_y + 1, m_x + 2, ACS_HLINE);
    mvaddch(m_y + 1, m_x + 3, ACS_HLINE);
    mvaddch(m_y + 1, m_x + 4, ACS_URCORNER);
    
    mvaddch(m_y + 2, m_x + 1, ACS_LLCORNER);
    mvaddch(m_y + 2, m_x + 2, ACS_HLINE);
    mvaddch(m_y + 2, m_x + 3, ACS_LRCORNER);
  }
  else
  {
    // Animación de explosión
    mvprintw(m_y, m_x - 2, "   ***   ");
    mvprintw(m_y + 1, m_x - 2, "  *****  ");
    mvprintw(m_y + 2, m_x - 2, "   ***   ");

    refresh();
    delay_output(200);

    mvprintw(m_y - 1, m_x - 3, ".    *    .");
    mvprintw(m_y, m_x - 2, "*  * *  *");
    mvprintw(m_y + 1, m_x - 3, "*  *   *  *");
    mvprintw(m_y + 2, m_x - 2, "*  * *  *");
    mvprintw(m_y + 3, m_x - 3, "'    *    '");

    refresh();
    delay_output(200);
  
    m_explotar = false;
  }
}

///////////////////////////////////////////////////////////////////////////
void Bote::setX(int x) { m_x = x; }
void Bote::setY(int y) { m_y = y; }
int Bote::getX() { return m_x; }
int Bote::getY() { return m_y; }
void Bote::setVidas(int vidas) { m_vidas = vidas; }
int Bote::getVidas() { return m_vidas; }
