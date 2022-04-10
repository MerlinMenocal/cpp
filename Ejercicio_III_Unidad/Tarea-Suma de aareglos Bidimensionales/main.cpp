// Objectivo
// Sumar todos los elementos de un arreglo bidimensional
// Requerimientos
// 1) Crear un arreglo bidimensional de 5x5
// 2) Inicializar cada elemento del arreglo con valores random
// 3) Sumar todos los valores del arreglo bidimensional y mostrar un mensaje "Total Suma:".

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sumarArreglo[5][5]{
        {(rand() % 5 + 1), (rand() % 5 + 1)},
        {(rand() % 10 + 1), (rand() % 10 + 1)},
        {(rand() % 15 + 1), (rand() % 15 + 1)},
        {(rand() % 20 + 1), (rand() % 20 + 1)},
        {(rand() % 25 + 1), (rand() % 25 + 1)},
    };


    //int suma[5]={0, 0, 0, 0, 0};

    for (int i = 0; i <5; i++)
    {
        for (int c = 0; c <5; c++)
        {
            cout<<sumarArreglo[i][c]<<endl;
            cout<<"Total Suma: ";
        }
        
    }
    
    return 0;
}


