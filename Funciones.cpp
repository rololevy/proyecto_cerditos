#include <time.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <stdio.h>
#include "rlutil.h"
#include <string.h>
#include "Funciones.h" // incluimos los encabezados
#include <iostream>
using namespace std;


//Menú de Créditos
void cerditos (){
    system ("cls");
    rlutil::locate ( 30, 3);
    cout <<"La familia Peppa esta compuesta por: ";
    rlutil::locate ( 40, 5);
    cout <<"Luis Baldocchi";
    rlutil::locate ( 40, 7);
    cout <<"Marcos Ruiz";
    rlutil::locate ( 40, 9);
    cout <<"Romina Ruiz";
    rlutil::locate ( 40, 11);
    cout <<"Aguilera Orlando";
    rlutil::locate ( 40, 13);
    cout <<"Jesica Valdez";
    rlutil::locate (50, 15);
    cout<<"Agradecimientos especiales: ";
    rlutil::locate (60,17);
    cout<<" Tapio Vierros, Creador de la libreria Rlutil";
    rlutil::getkey();
    system("cls");

}

// estructura general del juego una vez definido quien empieza
void empiezo_estructura_juego(string jugador1[], string jugador2[], int& acu_trufas_jug1, acu_trufas_jug2,
    bool& jugador_empieza, int& lanzar_mejor_dado1, int& lanzar mejor_dado2, int& oinks_jug1, int& oinks2){
 
            bool turno_jugador = jugador_empieza;
            int ronda = 0;
            int acu_trufas_jug1=0;
            int acu_trufas_jug2=0;
            int trufas_ronda = 0;
            int cont_turnos = 0;
            int cant_lanzamientos1 =0, cant_lanzamientos2 = 0;
            bool check_3_dados = false;
    
    }

