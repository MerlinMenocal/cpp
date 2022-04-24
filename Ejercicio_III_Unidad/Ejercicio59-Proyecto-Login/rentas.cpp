#include <iostream>
#include "clientes.h"

using namespace std;
string arregloRentas[100];
int ultimaLinea =0;


void rentar(){
    system("cls");

    string nombreCliente = "";
    string codigoCliente = "";
    
    char continuar;
    while (true)
    {
        cout<<"Ingrese el codigo del clinte";
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

    
    

}