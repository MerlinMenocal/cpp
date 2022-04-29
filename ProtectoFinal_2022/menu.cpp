#include <iostream>
#include "politicas.h"
#include "estudiantes.h"
#include "horarios.h"
#include "profesores.h"

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
        cout<<"2 - Lista de Estudiantes"<<endl;
        cout<<"3 - Profesores"<<endl;
        cout<<"4 - Reporte de Estudiantes"<<endl;
        cout<<"5 - Horarios de Atencion"<<endl;
        cout<<"6 - Salir"<<endl;


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
            system("cls");
            ingresoAlumnos();
            break;
        case 3:
            //system("cls");
            mostrarProfesores();
            break;    
        case 4: 
            listaAlumnos();
            break;
        case 5:
            system("cls");
            horarios();
            break;
        case 6:
            salir = true;
            
        default:
            break;
        }
        system("cls");
    }
    
}
