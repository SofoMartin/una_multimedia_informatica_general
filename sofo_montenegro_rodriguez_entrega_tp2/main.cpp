// Sofo Martin
// Montenegro Marcos
// Rodriguez Melisa
#include <iostream>
#include <ncurses.h>
#include "Bote.h"
#include <cstdlib>
#include <ctime>
#include "Obstaculo.h"
#include "Personita.h"
#include <vector>
#include <limits>
#include <string>
#include <array>

using namespace std;
using std::string;

const int ANCHO = 120;
const int ALTO = 40;
const int DELAY = 30;

enum GameState {
   STATE_MENU,
   STATE_PLAYING,
   STATE_GAME_OVER,
   STATE_VICTORY,
   STATE_EXIT,
   STATE_INSTRUCTIONS  
};

enum Direction {
   DIR_UP,
   DIR_DOWN,
   DIR_LEFT,
   DIR_RIGHT,
   DIR_NONE
};

enum GameConfig {
   
   TECHO = 1,
   SUELO = ALTO - 1,
   IZQUIERDA = 1,
   DERECHA = ANCHO - 1,
  
   BOTE_ALTURA = 3,
   BOTE_ANCHO = 5,
   BOTE_MARGEN_INFERIOR = 4,
  
   MAX_OBSTACULOS = 6,
   MAX_PERSONITAS = 3,
   PERSONAS_PARA_GANAR = 20,
   VIDAS_INICIALES = 5,
  
   POS_MIN_X = 1,
   POS_MAX_X = 119,
   POS_INICIAL_Y = 1
};

// colores
enum ColorPairs {
   COLOR_TITULO = 1,    // AZUL
   COLOR_HUD = 2,       // CYAN
   COLOR_BORDE = 3,     // BLANCO
   COLOR_BOTE = 4,      // ROJO 
   COLOR_OBSTACULO = 5, // BLANCO 
   COLOR_PERSONITA = 6, // AMARILLO
   COLOR_MENSAJE = 7    // CYAN 
};

GameState currentState;
int personas_rescatadas;
bool salir;

Bote miBote;
vector<Obstaculo> Obstaculos;
vector<Personita> Personitas;

std::array<std::string, 16> instrucciones = {
    "=== PROPUESTA ===",
    "El mundo quedó arrasado por inundaciones enormes, y ahora casi",
    "todo está bajo el agua. No sos un héroe ni alguien especial: solo",
    "una persona común, con un botecito y la decisión de ayudar.",
    "Navegas por calles convertidas en ríos, buscando a quienes",
    "todavía necesitan ser rescatados. Cada persona que logró ",
    "salvar es un recordatorio de que incluso en medio del desastre,",
    "todavía podemos ayudar a los demás."
    "¿Podes rescatar a las 20 personas que necesitan ayuda?",
    "",
    "=== CONTROLES ===",
    "flechas para mover el bote",
    "esc para salir",
    "",
    "=== CREDITOS ===",
    "Sofo Martin, Montenegro Marcos, Rodriguez Melisa",
};

const int NUM_INSTRUCCIONES = instrucciones.size();

void setup();
void input();
void update();
void draw();
void gameover();
void ganaste();
void jugar_juego_rescate();
void mostrar_menu_principal();
void init_colors();
bool verificar_tamano_terminal(int ancho_min, int alto_min);
void mostrar_instrucciones();  

int main() {
   srand(time(0));
   currentState = STATE_MENU;
   mostrar_menu_principal();
   return 0;
}

void init_colors() {
   start_color();
   use_default_colors();
  
   init_pair(COLOR_TITULO, COLOR_BLUE, COLOR_BLACK);     // AZUL
   init_pair(COLOR_HUD, COLOR_CYAN, COLOR_BLACK);        // CYAN
   init_pair(COLOR_BORDE, COLOR_WHITE, COLOR_BLACK);     // BLANCO
   init_pair(COLOR_BOTE, COLOR_RED, COLOR_BLACK);        // ROJO 
   init_pair(COLOR_OBSTACULO, COLOR_WHITE, COLOR_BLACK); // BLANCO 
   init_pair(COLOR_PERSONITA, COLOR_YELLOW, COLOR_BLACK);// AMARILLO
   init_pair(COLOR_MENSAJE, COLOR_CYAN, COLOR_BLACK);    // CYAN
}

bool verificar_tamano_terminal(int ancho_min, int alto_min) {
   //dimensiones de la terminal
   int ancho_actual, alto_actual;
   getmaxyx(stdscr, alto_actual, ancho_actual);
  
   // Verificar si cumple con los requisitos mínimos
   if (ancho_actual < ancho_min || alto_actual < alto_min) {
       // Mostrar mensaje de error
       clear();
       printw("ERROR: Terminal demasiado pequeña\n");
       printw("Se requiere mínimo: %dx%d\n", ancho_min, alto_min);
       printw("Tamaño actual: %dx%d\n", ancho_actual, alto_actual);
       printw("\nPresiona cualquier tecla para continuar...");
       refresh();
      
       nodelay(stdscr, FALSE);
       getch();
       nodelay(stdscr, TRUE);
      
       return false;
   }
  
   return true;
}

void jugar_juego_rescate() {
   initscr();
   noecho();
   curs_set(FALSE);
   keypad(stdscr, TRUE);
   nodelay(stdscr, TRUE);
  
   // Iniciar colores
   init_colors();

   // Verificar tamaño de terminal
   if (!verificar_tamano_terminal(ANCHO, ALTO)) {
       endwin();
       currentState = STATE_MENU;
       return;
   }

   setup();
   salir = false;

   while (!salir) {
       while (currentState == STATE_PLAYING) {
           input();
           update();
           draw();
       }
      
       if (currentState == STATE_GAME_OVER) {
           gameover();
       } else if (currentState == STATE_VICTORY) {
           ganaste();
       }
   }
   endwin();
}

void setup() {
   currentState = STATE_PLAYING;
   personas_rescatadas = 0;
   miBote.setup();
   Obstaculos.clear();
   Personitas.clear();

   for (int i = 0; i < MAX_OBSTACULOS; i++) {
       Obstaculos.push_back(Obstaculo(rand() % POS_MAX_X + POS_MIN_X, POS_INICIAL_Y));
   }
  
   for (int i = 0; i < MAX_PERSONITAS; i++) {
       Personitas.push_back(Personita(rand() % POS_MAX_X + POS_MIN_X, POS_INICIAL_Y));
   }
}


void input() {
   int tecla = getch();
   switch (tecla) {
       case KEY_UP:
           if (miBote.getY() > TECHO) miBote.setY(miBote.getY() - 1);
           break;
       case KEY_DOWN:
           if (miBote.getY() < SUELO - BOTE_ALTURA) miBote.setY(miBote.getY() + 1);
           break;
       case KEY_LEFT:
           if (miBote.getX() > IZQUIERDA) miBote.setX(miBote.getX() - 1);
           break;
       case KEY_RIGHT:
           if (miBote.getX() < DERECHA - BOTE_ANCHO + 1) miBote.setX(miBote.getX() + 1);
           break;
       case 27:
           currentState = STATE_GAME_OVER;
           break;
       default:
           break;
   }
}

void update() {
   miBote.update();
   if (miBote.getVidas() <= 0) currentState = STATE_GAME_OVER;

   // Actualizar Obstaculos
   for (int i = 0; i < Obstaculos.size(); i++) {
       Obstaculos[i].update();
       Obstaculos[i].colision(miBote);
   }

   // Actualizar y detectar colisión con personitas
   for (int i = 0; i < Personitas.size(); i++) {
       Personitas[i].update();
       if (Personitas[i].checkColision(miBote)) {
           personas_rescatadas++;
           Personitas[i].reposition();
       }
   }
  
   // Verificar victoria
   if (personas_rescatadas >= PERSONAS_PARA_GANAR) {
       currentState = STATE_VICTORY;
   }
}

void draw() {
   erase();
  
   // DIBUJAR BORDE CON COLOR
   attron(COLOR_PAIR(COLOR_BORDE));
   box(stdscr, 0, 0);
   attroff(COLOR_PAIR(COLOR_BORDE));

   // MOSTRAR PERSONAS RESCATADAS CON COLOR
   attron(COLOR_PAIR(COLOR_HUD));
   string rescateStr = "[ RESCATADAS: " + std::to_string(personas_rescatadas) + " ]";
   mvprintw(0, 5, "%s", rescateStr.c_str());
   attroff(COLOR_PAIR(COLOR_HUD));

   // MOSTRAR VIDAS CON COLOR
   attron(COLOR_PAIR(COLOR_HUD));
   string vidasStr = "[ VIDAS: ";
   for (int i = 0; i < miBote.getVidas(); i++) {
       vidasStr += "O"; 
   }
   vidasStr += " ]";
   mvprintw(0, 80, "%s", vidasStr.c_str());
   attroff(COLOR_PAIR(COLOR_HUD));

   // DIBUJAR BOTE CON COLOR ROJO
   attron(COLOR_PAIR(COLOR_BOTE));
   miBote.draw();
   attroff(COLOR_PAIR(COLOR_BOTE));

   // DIBUJAR OBSTACULOS EN COLOR BLANCO
   attron(COLOR_PAIR(COLOR_OBSTACULO));
   for (int i = 0; i < Obstaculos.size(); i++) {
       Obstaculos[i].draw();
   }
   attroff(COLOR_PAIR(COLOR_OBSTACULO));

   // DIBUJAR PERSONITAS CON COLOR AMARILLO
   attron(COLOR_PAIR(COLOR_PERSONITA));
   for (int i = 0; i < Personitas.size(); i++) {
       if (Personitas[i].isActiva()) {
           Personitas[i].draw();
       }
   }
   attroff(COLOR_PAIR(COLOR_PERSONITA));
   refresh();
   delay_output(DELAY);
}

void gameover() {
   // Limpiar área del mensaje
   for (int y = 10; y < 16; y++) {
       for (int x = 40; x < 80; x++) {
           mvaddch(y, x, ' ');
       }
   }

   // Dibujar marco con color cyan
   attron(COLOR_PAIR(COLOR_MENSAJE));
   mvaddch(9, 39, ACS_ULCORNER);
   mvaddch(9, 80, ACS_URCORNER);
   mvaddch(16, 39, ACS_LLCORNER);
   mvaddch(16, 80, ACS_LRCORNER);
   mvhline(9, 40, ACS_HLINE, 40);
   mvhline(16, 40, ACS_HLINE, 40);
   mvvline(10, 39, ACS_VLINE, 6);
   mvvline(10, 80, ACS_VLINE, 6);

   mvprintw(12, 55, "GAME OVER");
   mvprintw(13, 50, "VOLVER A JUGAR? (S/N)");
   attroff(COLOR_PAIR(COLOR_MENSAJE));
  
   refresh();

   // Esperar entrada del usuario
   nodelay(stdscr, FALSE);
   int opcion;
   while ((opcion = getch()) != 's' && opcion != 'S' && opcion != 'n' && opcion != 'N') {
       // Esperar hasta que se presione una tecla válida
   }
   nodelay(stdscr, TRUE);

   if (opcion == 's' || opcion == 'S') {
       currentState = STATE_PLAYING;
       setup();
   } else if (opcion == 'n' || opcion == 'N') {
       currentState = STATE_MENU;
       salir = true;
   }
}


void ganaste() {
   // Limpiar área del mensaje
   for (int y = 10; y < 16; y++) {
       for (int x = 40; x < 80; x++) {
           mvaddch(y, x, ' ');
       }
   }

   // Dibujar marco con color CYAN
   attron(COLOR_PAIR(COLOR_MENSAJE));
   mvaddch(9, 39, ACS_ULCORNER);
   mvaddch(9, 80, ACS_URCORNER);
   mvaddch(16, 39, ACS_LLCORNER);
   mvaddch(16, 80, ACS_LRCORNER);
   mvhline(9, 40, ACS_HLINE, 40);
   mvhline(16, 40, ACS_HLINE, 40);
   mvvline(10, 39, ACS_VLINE, 6);
   mvvline(10, 80, ACS_VLINE, 6);

   mvprintw(12, 50, "¡FELICIDADES, GANASTE!");
   mvprintw(13, 48, "Rescataste 20 personitas!");
   mvprintw(14, 50, "VOLVER A JUGAR? (S/N)");
   attroff(COLOR_PAIR(COLOR_MENSAJE));
  
   refresh();

   // esperar entrada del usuario
   nodelay(stdscr, FALSE);
   int opcion;
   while ((opcion = getch()) != 's' && opcion != 'S' && opcion != 'n' && opcion != 'N') {
       // esperar entrada válida
   }
   nodelay(stdscr, TRUE);

   if (opcion == 's' || opcion == 'S') {
       currentState = STATE_PLAYING;
       setup();
   } else if (opcion == 'n' || opcion == 'N') {
       currentState = STATE_MENU;
       salir = true;
   }
}

void mostrar_instrucciones() {
    clear();
    
    attron(COLOR_PAIR(COLOR_BORDE));
    box(stdscr, 0, 0);
    attroff(COLOR_PAIR(COLOR_BORDE));
    
    attron(COLOR_PAIR(COLOR_TITULO));
    mvprintw(1, (ANCHO - 18) / 2, "INSTRUCCIONES DEL JUEGO");
    attroff(COLOR_PAIR(COLOR_TITULO));
    
    attron(COLOR_PAIR(COLOR_HUD));
    int start_y = 5;
    for (int i = 0; i < instrucciones.size(); i++) {
        int x_pos = (ANCHO - instrucciones[i].length()) / 2;
        mvprintw(start_y + i, x_pos, "%s", instrucciones[i].c_str());
    }
    attroff(COLOR_PAIR(COLOR_HUD));
    
    // Mensaje para volver al menú
    attron(COLOR_PAIR(COLOR_MENSAJE));
    mvprintw(ALTO - 3, (ANCHO - 35) / 2, "Presiona cualquier tecla para volver al menú");
    attroff(COLOR_PAIR(COLOR_MENSAJE));
    
    refresh();
    getch(); 
}

void mostrar_menu_principal() {
   int opcion;
   bool salir_menu = false;

   //ncurses para el menú con colores
   initscr();
   start_color();
   use_default_colors();
   init_colors();
   noecho();
   keypad(stdscr, TRUE);

   do {
       clear();
      
       // Título en azul
       attron(COLOR_PAIR(COLOR_TITULO));
       printw(R"(
#     # ###  #####  ### ####### #     #    ######  #######  #####   #####     #    ####### #######
##   ##  #  #     #  #  #     # ##    #    #     # #       #     # #     #   # #      #    #    
# # # #  #  #        #  #     # # #   #    #     # #       #       #        #   #     #    #    
#  #  #  #   #####   #  #     # #  #  #    ######  #####    #####  #       #     #    #    #####
#     #  #        #  #  #     # #   # #    #   #   #             # #       #######    #    #    
#     #  #  #     #  #  #     # #    ##    #    #  #       #     # #     # #     #    #    #    
#     # ###  #####  ### ####### #     #    #     # #######  #####   #####  #     #    #    #######
                                                                                             
      )");
       attroff(COLOR_PAIR(COLOR_TITULO));

       // Menú en Cyan
       attron(COLOR_PAIR(COLOR_HUD));
       printw("\n\nMenú principal\n");
       printw("1) Jugar al Juego\n");
       printw("2) Propuesta y creditos\n");
       printw("3) Salir\n");
       printw("Ingrese una opción: ");
       attroff(COLOR_PAIR(COLOR_HUD));
      
       refresh();

       opcion = getch() - '0'; 

       switch (opcion) {
           case 1:
               endwin(); 
               jugar_juego_rescate();
               initscr(); 
               start_color();
               use_default_colors();
               init_colors();
               noecho();
               keypad(stdscr, TRUE);
               break;
           case 2:
               mostrar_instrucciones();
               break;
           case 3:
               salir_menu = true;
               break;
           default:
               attron(COLOR_PAIR(COLOR_OBSTACULO));
               printw("\nOpción no válida. Intente nuevamente.");
               attroff(COLOR_PAIR(COLOR_OBSTACULO));
               refresh();
               napms(1000);
               break;
       }

   } while (!salir_menu);
}
