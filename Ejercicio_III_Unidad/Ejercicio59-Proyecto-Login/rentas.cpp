#include <iostream>
#include "clientes.h"
#include "juegos.h"

using namespace std;
string arregloRentas[100];
int ultimaLinea =0;


void rentar(){
    system("cls");

    string nombreCliente = "";
    string codigoCliente = "";

    string nombreJuego = "";
    string codigoJuego = "";
    
    char continuar;
    while (true)
    {
        cout<<"Ingrese el codigo del cliente: ";
        cin>>codigoCliente;

        nombreCliente = buscarCliente(codigoCliente);

        if (nombreCliente !="")
        {
        cout<<endl;
        cout<<nombreCliente <<endl;
        break;
        }else{
            cout<<"No se encontro el Cliente, desea continuar? s/n"<<endl;
            cin>>continuar;

            if (continuar == 'n' || continuar == 'N' )
            {
                return ;
            }
            
        }
    }

    cout<<endl;

    while (true)
    {
        cout<<"Ingrese el codigo del Juego: ";
        cin>>codigoJuego;

        nombreJuego = buscarJuego(codigoJuego);

        if (nombreJuego !="")
        {
        cout<<endl;
        cout<<nombreJuego <<endl;
        break;
        }else{
            cout<<"No se encontro el Juego, desea continuar? s/n"<<endl;
            cin>>continuar;

            if (continuar == 'n' || continuar == 'N' )
            {
                return ;
            }
            
        }
    }

    arregloRentas[ultimaLinea] = codigoCliente + " | " + nombreCliente + " - " +codigoJuego  +" | " + nombreJuego;
    ultimaLinea ++;
    system("pause");
}

 void reporteRentas(){
     system("cls");
     cout<<"Reporte de Rentas"<<endl;
     cout<<"-----------------"<<endl<<endl;

     for (int i = 0; i <ultimaLinea; i++)
     {
         cout<<arregloRentas[i]<<endl;
     }
     cout<<endl;
     cout<<endl;
     system("pause");
 };