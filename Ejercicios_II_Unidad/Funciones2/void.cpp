#include <iostream>

using namespace std;

void imprimirCaracteres(char caracter){

    for (int i = 0; i <10; i++)
    {
        cout<<caracter;
    } 
}

int main(int argc, char const *argv[])
{
    imprimirCaracteres('*');
    
    return 0;
}
