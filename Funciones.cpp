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
