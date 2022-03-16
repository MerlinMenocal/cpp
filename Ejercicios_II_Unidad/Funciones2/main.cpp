#include <iostream>

using namespace std;

float calculadora(float a,float b, char o ){

if (o== '+'){
    return a + b;
  }
  if (o== '-'){
    return a - b;
  }
  if (o== '*'){
    return a * b;
  }
  if (o== '/'){
    return a /b;
  }
  return 0;
}

int main(int argc, char const *argv[])
{
    float numero1 =0; 
    float numero2 =0;
    float resultado =0;
    char operador;

    system("cls");
    cout<<"Ingrese en valor del Numero 1: ";
    cin>>numero1;
    cout<<"Ingrese en valor del Numero 2: ";
    cin>>numero2;
    cout<<endl;

    cout<<"Que operacion desea realizar?"<<endl;
    cout<<"============================"<<endl;
    cout<<"Ingrese un caracter: "<<endl;
    cout<<"+"<<endl;
    cout<<"-"<<endl;
    cout<<"*"<<endl;
    cout<<"/"<<endl;

    cin>>operador;

        resultado =calculadora(numero1, numero2, operador);

    cout<<"Resultado: "<<resultado;
    return 0;
}
