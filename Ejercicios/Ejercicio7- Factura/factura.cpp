#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    //Datos de entrada
    double subtotal =0, total = 0;
    double impuesto = 0.15;  //constante

    cout<<"Ingrese el subtotsl de la factura: ";
    cin>>subtotal;

    //proceso
    total = subtotal + (subtotal * 0.15);

    //salida
    cout<<endl;
    cout<<"Total a pagar es: "<<total;
    return 0;
}
