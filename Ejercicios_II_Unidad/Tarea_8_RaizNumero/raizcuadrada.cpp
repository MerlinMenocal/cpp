#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/*Cree una función que calcule la raiz cuadrada de un número 
dado utilizando alguna función de la libreria math.h  */

double calculoRaiz(double numero);

double raizCuadrada =0;
int main(int argc, char const *argv[])
{
   double numero1 = 0;
   double resultado ;

    cout<<"Ingrese un Numero: ";
    cin>>numero1;

    resultado = calculoRaiz(numero1);

//    raizCuadrada = sqrt(numero);

   cout<<endl;
   cout<<endl;
   cout<<"La Raiz Cuadrada de "<< numero1 <<" es: "<<resultado;
    return 0; 
} 


double calculoRaiz(double numero){
 
 raizCuadrada = sqrt(numero);

   return raizCuadrada;
}




