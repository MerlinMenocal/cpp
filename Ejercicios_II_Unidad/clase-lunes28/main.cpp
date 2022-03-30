#include<iostream>

using namespace std;

string nombreCompleto(string nombre, string apellido){
    return nombre + " " + apellido;
}

int sumar(int a, int b) {
    return a + b;
}

int main(int argc, char const *argv[])
{
    int resultado = 0;
    resultado = sumar(5, 7);
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
    
    return 0;
}
