#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    //declaracion de variables
    int valorA = 0, valorB = 0;
    double suma = 0, resta = 0, multiplicacion = 0, division = 0;
    

    cout<<"Ingrese el Valor A: ";
    cin>>valorA;

    cout<<endl;

    cout<<"Ingrese el Valor B: ";
    cin>>valorB;
    cout<<endl;

    suma = valorA + valorB;
    resta = valorA - valorB;
    multiplicacion = valorA * valorB;
    division = valorA / valorB;
    
    cout<<endl;
    cout<<"La Suma de los valores es: "<<suma<<endl;
    cout<<"La Resta de los valores es: "<<resta<<endl;
    cout<<"La Multiplicación de los valores es: "<<multiplicacion<<endl;
    cout<<"La División de los valores es: "<<division<<endl;

    return 0;

}