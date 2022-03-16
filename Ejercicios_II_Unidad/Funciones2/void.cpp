#include <iostream>

using namespace std;

void imprimirCaracteres(char caracter, int cantidad){

    for (int i = 0; i <cantidad; i++)
    {
        cout<<caracter;
    } 
}

int main(int argc, char const *argv[])
{
    imprimirCaracteres('*', 1000);
    imprimirCaracteres('&', 100);
    imprimirCaracteres('#', 10);

    return 0;
}
