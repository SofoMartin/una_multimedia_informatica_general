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

using namespace std;

const int ANCHO = 120;
const int ALTO = 40;
const int DELAY = 30;

bool game_over, ganar;  
int personas_rescatadas;
bool salir;

Bote miBote;
vector<Obstaculo> Obstaculos;
vector<Personita> Personitas;

void setup();
void input();
void update();
void draw();
void gameover();
void ganaste();  
void jugar_juego_rescate();
void mostrar_menu_principal();

int main() {
    srand(time(0));
    mostrar_menu_principal();
    return 0;
}

void jugar_juego_rescate() {
    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);

    if (LINES < ALTO || COLS < ANCHO) {
        endwin();
        printf("La terminal tiene que tener como mínimo %dx%d\n\n", ANCHO, ALTO);
        return;
    }

    setup();
    salir = false;

    while (!salir) {
        while (!game_over && !ganar) {  
            input();
            update();
            draw();
        }
        
        if (game_over) {
            gameover();
        } else if (ganar) {  
            ganaste();
        }
    }

    endwin();
}

void setup() {
    game_over = FALSE;
    ganar = FALSE;  
    personas_rescatadas = 0;
    miBote.setup();
    Obstaculos.clear();
    Personitas.clear();

    for (int i = 0; i < 6; i++) {
        Obstaculos.push_back(Obstaculo(rand() % 119 + 1, 1));
    }
    
    for (int i = 0; i < 3; i++) {
        Personitas.push_back(Personita(rand() % 119 + 1, 1));
    }
}

void input() {
    int tecla = getch();
    switch (tecla) {
        case KEY_UP:
            if (miBote.getY() > 1) miBote.setY(miBote.getY() - 1);
            break;
        case KEY_DOWN:
            if (miBote.getY() < ALTO - 4) miBote.setY(miBote.getY() + 1);
            break;
        case KEY_LEFT:
            if (miBote.getX() > 1) miBote.setX(miBote.getX() - 1);
            break;
        case KEY_RIGHT:
            if (miBote.getX() < ANCHO - 6) miBote.setX(miBote.getX() + 1);
            break;
        case 27:
            game_over = TRUE;
            break;
        default:
            break;
    }
}

void update() {
    miBote.update();
    if (miBote.getVidas() <= 0) game_over = true;

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
    if (personas_rescatadas >= 20) {
        ganar = TRUE;
    }
}

void draw() {
    erase();
    box(stdscr, 0, 0);

    // MOSTRAR PERSONAS RESCATADAS
    mvprintw(0, 5, "[ RESCATADAS:     ]");
    mvprintw(0, 20, "%d", personas_rescatadas);

    // MOSTRAR VIDAS
    mvprintw(0, 80, "[ VIDAS:     ]");
    for (int i = 0; i < miBote.getVidas(); i++) {
        mvaddch(0, 89 + i, ACS_DIAMOND);
    }

    miBote.draw();

    for (int i = 0; i < Obstaculos.size(); i++) {
        Obstaculos[i].draw();
    }

    for (int i = 0; i < Personitas.size(); i++) {
        if (Personitas[i].isActiva()) {
            Personitas[i].draw();
        }
    }

    refresh();
    delay_output(DELAY);
}

void gameover() {
    for (int y = 10; y < 16; y++) mvhline(y, 40, ' ', 40);

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

    int opcion = getch();

    if (opcion == 's' || opcion == 'S') {
        game_over = false;
        setup();
    } else if (opcion == 'n' || opcion == 'N') {
        salir = TRUE;
    }
}

//Función para mostrar pantalla de victoria
void ganaste() {
    for (int y = 10; y < 16; y++) mvhline(y, 40, ' ', 40);

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

    int opcion = getch();

    if (opcion == 's' || opcion == 'S') {
        game_over = false;
        ganar = false;  
        setup();
    } else if (opcion == 'n' || opcion == 'N') {
        salir = TRUE;
    }
}

void mostrar_menu_principal() {
    int opcion;
    bool salir_menu = false;

    do {
        system("clear");
        cout << R"(
#     # ###  #####  ### ####### #     #    ######  #######  #####   #####     #    ####### #######
##   ##  #  #     #  #  #     # ##    #    #     # #       #     # #     #   # #      #    #      
# # # #  #  #        #  #     # # #   #    #     # #       #       #        #   #     #    #      
#  #  #  #   #####   #  #     # #  #  #    ######  #####    #####  #       #     #    #    #####  
#     #  #        #  #  #     # #   # #    #   #   #             # #       #######    #    #      
#     #  #  #     #  #  #     # #    ##    #    #  #       #     # #     # #     #    #    #      
#     # ###  #####  ### ####### #     #    #     # #######  #####   #####  #     #    #    #######
                                                                                                 
       )" << endl;

        cout << "\nMenú principal" << endl;
        cout << "1) Jugar al Juego" << endl;
        cout << "2) Cómo jugar" << endl;
        cout << "3) Salir" << endl;
        cout << "Ingrese una opción: ";
        
        if (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Por favor, ingrese una opción válida." << endl;
            continue;
        }

        switch (opcion) {
            case 1:
                jugar_juego_rescate();
                break;
            case 2:
                system("clear");
                cout << "=== CÓMO JUGAR ===" << endl;
                cout << "\n OBJETIVO:" << endl;
                cout << "Rescata a las personitas (O) y evita los obstaculos (A)" << endl;
                cout << "Cuando rescates a 20 personitas ganaras el juego)" << endl;
                cout << "\n CONTROLES:" << endl;
                cout << "• Flechas: Mover el bote" << endl;
                cout << "• ESC: Salir del juego" << endl;
                cout << "\nPresiona ENTER para volver al menú...";
                cin.ignore();
                cin.get();
                break;
            case 3:
                salir_menu = true;
                cout << "Saliendo del juego...\n";
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
                break;
        }

    } while (!salir_menu);
}