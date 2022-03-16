#include <iostream>

using namespace std;

int calculadora(int a, int b ){

    return a + b;

}

int main(int argc, char const *argv[])
{
    int numero1 =0; 
    int numero2 =0;

    system("cls");
    cout<<"Ingrese en valor del Numero 1: ";
    cin>>numero1;
    cout<<"Ingrese en valor del Numero 2: ";
    cin>>numero2;

    cout<<calculadora(numero1, numero2);
    return 0;
}
