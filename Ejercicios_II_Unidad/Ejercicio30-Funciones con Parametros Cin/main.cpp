#include <iostream>
using namespace std;


int sumar(int a, int b){
    return a + b;
}

int restar(int a, int b){
    return a - b;
}

int main(int argc, char const *argv[])
{
    int numero1 = 0;
    int numero2 = 0;

    cout<<"Ingrese el Valor de a: ";
    cin>>numero1;
    cout<<"Ingrese el Valor de b: ";
    cin>>numero2;

    cout<<endl;
    cout<<"El resultado de la Suma es: "<<sumar(numero1, numero2);
    cout<<endl;
    cout<<"El resultado de la Resta es: "<<restar(numero1, numero2);
    cout<<endl;

    return 0;
}
