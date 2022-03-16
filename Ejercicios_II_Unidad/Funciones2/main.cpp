#include <iostream>

using namespace std;

int calculadora(int a, int b, char o ){

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
    return a / b;
  }
}

int main(int argc, char const *argv[])
{
    int numero1 =0; 
    int numero2 =0;
    int resultado =0;
    char operador;

    system("cls");
    cout<<"Ingrese en valor del Numero 1: ";
    cin>>numero1;
    cout<<"Ingrese en valor del Numero 2: ";
    cin>>numero2;
    cout<<endl;

    cout<<"Que opecaion desea realizar?";
    cout<<"============================";
    cout<<"Ingrese un caracter: ";
    cout<<"+";
    cout<<"-";
    cout<<"*";
    cout<<"/";

    cin>>operador;

        resultado =calculadora(numero1, numero2, operador);

    //cout<<"Resultado: "<<calculadora(numero1, numero2);
    return 0;
}
