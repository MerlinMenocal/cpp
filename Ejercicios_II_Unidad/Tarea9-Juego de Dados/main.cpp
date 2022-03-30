#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

//Cree un programa que muestre el resultado de jugar con dos dados

int dado1;
int dado2;
string jugar="d";

int main(int argc, char const *argv[])
{
    
    while (true)
    {
        cout<<"Intrucciones del Juego"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"Ganas cuando: Ambos dados caen en: 6 y 5||5 y 5||3 y 3"<<endl;
        cout<<"Pierdes cuando: Ambos dados caen en: 4 y 4||2 y 2||1 y 2||1 y 1"<<endl<<endl;
        cout<<"Presiona la tecla (d) para comenzar: ";
        cin>>jugar;
        system("cls");

            for (int i = 0; i <=1; i++)
                {
                    srand(time(NULL));
                    dado1 = rand() % 6 + 1;
                    dado2 = rand() % 6 + 1;
                }
        cout<<"Dado 1: "<<dado1<<endl;
        cout<<"Dado 2: "<<dado2<<endl;
        if (dado1 ==6 && dado2 ==5 or dado1==5 && dado2==5 or dado1==3 && dado2==3)
        {
            cout<<"Felicidades, sacastes lados ganadores!"<<endl;
            break;
        }else
            {
                if (dado1==4 && dado2==4 or dado1==2 && dado2==2 or dado1==1 && dado2==2 or dado1==1 && dado2==1)
                {
                    cout<<"Has tenido una caida, el Juego termino!"<<endl;
                    break;
                }
            }
        cout<<"Lanza en Dado nuevamente!"<<endl;
        system("pause");
        system("cls");
        
    }
    
    return 0;
}

