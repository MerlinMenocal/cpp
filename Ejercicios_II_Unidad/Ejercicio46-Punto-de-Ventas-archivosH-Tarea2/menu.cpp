#include<iostream>
#include "menu.h"
//#include "produc.h"

using namespace std;

//extern void productos(int opcion);  sustituidos por el archivo.h
//extern void imprimirFactura();

void menu(){

    int opcion = 0;
    while(true){

        system("cls");
        cout<<"****";
        cout<<"MENU";
        cout<<"****";
        cout<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"1 - Bebidas Calientes"<<endl;
        cout<<"2 - Bebidas Frias"<<endl;
        cout<<"3 - Reposteria"<<endl;
        cout<<"4 - Imprimir Factura"<<endl;
        cout<<"0 - Salir"<<endl;

        cout<<endl;
        cout<<"Ingrese una Opcion: ";
        cin>>opcion;
         
        if (opcion == 0)
        {
            break;
        }
        if (opcion== 4)
        {
            imprimirFactura();
        }else {
            productos(opcion);

        } 
    }
}