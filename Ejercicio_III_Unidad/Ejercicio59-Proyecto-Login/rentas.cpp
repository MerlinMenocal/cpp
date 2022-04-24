#include <iostream>
#include "clientes.h"

using namespace std;
string arregloRentas[100];
int ultimaLinea =0;


void rentar(){
    system("cls");

    string nombreCliente = "";
    string codigoCliente = "";

    cout<<"Ingrese el codigo del clinte";
    cin>>codigoCliente;
    nombreCliente = buscarCliente(codigoCliente);

    if (nombreCliente !="")
    {
       cout<<endl;
       cout<<nombreCliente <<endl;
    }

}