#include<iostream>

using namespace std;

int sumar(int a, int b){
    return a + b;
}

int calculadora(int a, int b, char operador){
   if (operador == '+'){
       return sumar(a, b);
   }
   throw "El Operador no existe"; //hace que el programa falle si no encuentra que hacer
}


int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char operador;

    cout<<"Ingrese a: ";
    cin>> n1;
    cout<<"Ingrese b: ";
    cin>> n2;
    cout<<"Ingrese el Operador (+, -, *, /): ";
    cin>>operador;

    cout<<endl;

    try
    {
        cout<<"Resultado de "<< n1 << operador << n2 << " es: ";
        cout<<calculadora(n1, n2, operador);
    }
    catch(const exception& e)
    {
        cout << e.what();
    }
    
    
    return 0;
}
