#include <iostream>
#include "politicas.h"
#include "estudiantes.h"
#include "horarios.h"

using namespace std;


void menu(){
    bool salir = false;

    while (salir == false)
    {
        int opcion =0;
        cout<<endl;
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"--------------"<<endl;
        cout<<endl;
        cout<<"1 - Politicas de la Institucion"<<endl;
        cout<<"2 - Estudiantes"<<endl;
        cout<<"3 - Profesores"<<endl;
        cout<<"4 - Carreras"<<endl;
        cout<<"5 - Lista de Estudiantes"<<endl;
        cout<<"6 - Horarios de Atencion"<<endl;
        cout<<"7 - Salir"<<endl;


        cout<<endl;
        cout<<endl;
        cout<<"Ingrese un Numero del menu y presione enter --> ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            system("cls");
            politicas();
            break;
        case 2:
            system("pause");
            listaAlumnos();
            break;
        case 3:
            //profesores();
            break;    
        case 4: 
            //carreras();
            break;
        case 5: 
            //reporteEstudiantes();
            break;
        case 6:
            system("cls");
            horarios();
            break;
        case 7:
            salir = true;
            
        default:
            break;
        }
        system("cls");
    }
    
}
