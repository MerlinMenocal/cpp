#include<iostream>
#include<stdlib.h> //srand(semilla) rand
#include<time.h>


using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto = 0;
    int miNumero = 0;
    int contador = 0;

    //inicializa el numero random
    srand(time(NULL));

    //Generar un numero entre 1 y 10
    numeroSecreto = rand()  % 15 + 1 ;

    
    do
    {
        cout<<"Adivina el numero (1 a 10):";
        cin>>miNumero;

        if (numeroSecreto < miNumero)
        {
            cout<<"El numero Secreto puede ser Menor!"<<endl;
        }else{
            if (numeroSecreto > miNumero)
            {
             cout<<"El numero Secreto puede ser Mayor!"<<endl;   
            }
        }
        
        while (true)
        {
            contador +1 ;
            if(contador ==3)
            {
            cout<<"Lo siento, has fallado 3 veces. "<<endl;
            cout<<"El juego ha terminado!";
            break;
            }
        }
        
    } 
     
    while (numeroSecreto != miNumero);
        
        cout<<endl;
        cout<<endl;
        cout<<"Adivinastes!";
        cout<<endl;

    return 0;
}
