#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/*Cree una función que calcule la raiz cuadrada de un número 
dado utilizando alguna función de la libreria math.h  */


int main(int argc, char const *argv[])
{
   double raizCuadrada =0;
   double numero = 0;

   cout<<"Ingrese un Numero: ";
   cin>>numero;

   raizCuadrada = sqrt(numero);

   cout<<endl;
   cout<<endl;
   cout<<"La Raiz Cuadrada de "<< numero <<" es: "<<raizCuadrada;

    return 0; 
} 




