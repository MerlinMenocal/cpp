#include <iostream>
#include "calculadora.h"
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int dividir (int a, int b)
{

    if(b == 0)
    {
       cout<<"No se puede dividir entre cero."<<endl;
       return 0; 
    }
   return a / b;
}