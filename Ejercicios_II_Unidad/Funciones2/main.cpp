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
      if(b =! 0){
        return a /b;
      }
    
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
    cout<<endl;

    resultado = (calculadora (5 ,7, '+') + calculadora (10, 2, '-')) / calculadora(5, 3, '*');
    cout<<"Otro resultado 1> "<<resultado;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    resultado = calculadora(calculadora(2, 2, '+'), calculadora(3, 1, '-'), '*');
    
    cout<<"Otro resultado 2> "<<resultado;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    int r1 = calculadora(2, 2, '+');
    int r2 = calculadora(3, 1, '-');
    
    resultado = calculadora(r1, r2, '*');
    
    cout<<"Otro resultado 2> "<<resultado;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}
