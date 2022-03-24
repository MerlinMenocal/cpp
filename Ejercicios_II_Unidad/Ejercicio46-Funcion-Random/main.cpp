#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    //inicializa el numero random
    srand(time(NULL));

    //genera un numero entre 1 y 10
    numero = rand() % 10 + 1;
    cout<<"Primer numero al Azar: "<<numero;
    cout<<endl;
    
    numero = rand() % 10 + 1;
    cout<<"Segundo numero al Azar: "<<numero;
    return 0;
}
