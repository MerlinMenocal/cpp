#include <iostream>
#include "menu.h"

using namespace std;

void estudiantes(){
        int opcion = 0;
        cout<<"1- Ingresar un Estudiante"<<endl;
        cout<<"2- Eliminar un Estudiante"<<endl;
        cout<<"0"<<endl;

        cout<<"Ingrese un Numero del menu y presione enter --> ";
        cin>>opcion;
        
        switch (opcion)
        {
        case 1:
            //ingresoEstudiante();
            break;
        case 2:
            //eliminarEstudiante();
            break;
        case 3:
            menu();
            break; 

            
        
        default:
            break;
        }

        };
    

