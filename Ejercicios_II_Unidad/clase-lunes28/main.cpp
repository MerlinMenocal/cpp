#include<iostream>
#include "calculadora.h"
#include "misc.h"

using namespace std;


int main(int argc, char const *argv[])
{
    int resultado = 0;
    resultado = sumar(5, 7);

    menu();

    cout<<"Resultado de la suma: "<<resultado;
    cout<<endl;

    resultado = dividir(10, 0);
    cout<<"Resultado de la Division: "<<resultado;


    string nombre ="";
    string apellido ="";

    cout<<"resultado: "<<resultado;

    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"Ingrese el nombre: ";
    cin>>nombre;
    cout<<endl;
    cout<<"Ingrese el apellido: ";
    cin>>apellido;
    cout<<endl;

    string nCompleto = nombreCompleto(nombre, apellido);
    cout<<"Su nombre Completo: "<<nCompleto;
    
    return 0;
}
