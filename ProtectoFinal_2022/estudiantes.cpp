#include <iostream>
#include "menu.h"

using namespace std;

void estudiantes(){
        int opcion = 0;
        cout<<"1- Ingresar un Estudiante"<<endl;
        cout<<"2- Eliminar un Estudiante"<<endl;
        cout<<"3- Volver al Menu"<<endl;

        cout<<"Ingrese un Numero del menu y presione enter --> ";
        cin>>opcion;
        
        switch (opcion)
        {
        case 1:
            ingresoEstudiantes();
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

    string ingresoEstudiantes[10][6];
        
        
        for (int i = 0; i <10; i++)
    {
        cout<<"Ingreso de Datos para Estudiantes"<<endl;
        cout<<"---------------------------------"<<endl;

        cout<<"Ingrese el Nombre: ";
        cin>>ingresoEstudiantes[i][0];
        cout<<endl;

        cout<<"Ingrese el Apellido: ";
        cin>>ingresoEstudiantes[i][1];
        cout<<endl;

        cout<<"Ingrese el ID: ";
        cin>>ingresoEstudiantes[i][2];
        cout<<endl;

        cout<<"Ingrese el Telefono de Contacto: ";
        cin>>ingresoEstudiantes[i][3];
        cout<<endl;

        cout<<"Ingrese la edad: ";
        cin>>ingresoEstudiantes[i][4];
        cout<<endl;

        cout<<"Ingrese el correo Electronico: ";
        cin>>ingresoEstudiantes[i][5];
        cout<<endl;

    }
    

    
    
    

