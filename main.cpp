#include <iostream>
#include <time.h>
#include <conio.h>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <stdio.h>
#include "rlutil.h"
#include <string.h>
#include "funciones.h" // incluimos los encabezados
using namespace std;

int main()
{
    int opcion;
    char v;
    char s,n;
    srand(time(NULL));
    rlutil::hidecursor();
 rlutil::setBackgroundColor(rlutil::BLUE);
 rlutil::setColor(rlutil::WHITE);


    do {
            rlutil::locate (50, 5);
            cout <<"GRAN CERDO";
            rlutil::locate (50, 6);
            cout <<"---------------------";
            rlutil::locate (50, 7);
            cout <<"1 - JUGAR";
            rlutil::locate (50, 8);
            cout <<"2 - ESTADISTICAS";
            rlutil::locate (50, 9);
            cout <<"3 - CERDITOS";
            rlutil::locate (50, 10);
            cout <<"---------------------";
            rlutil::locate (50, 11);
            cout <<"0 - SALIR";
            rlutil::locate (50, 12);
            cout <<"---------------------";
            rlutil::locate (50, 12);
            cout<<"Ingrese la opcion deseada: ";
            cin>>opcion;


        switch(opcion){
    case 1:
        break;
    case 2:
        break;
    case 3:
        cerditos();
        break;
    case 0:

            cout<<"Esta seguro que desea salir (S para SI, o N para NO)"<<endl;
            cin >> v;
            v=toupper(v);
            switch(v){
            case 'S':
                cout<<"adios"<<endl;
                return 0;
            break;
            case 'N':
                cout<<"sigamos"<<endl;
                cout << "Opcion : " <<endl;
                return main();
                break;
            default :
                cout<<"ingreso una opcion no valida"<<endl;
                cout << "Opcion : " <<endl;
                cin>>opcion;
                break;

                }
        break;
            }


    }while(opcion !=0);



        // void showmenu()


    return 0;
}
