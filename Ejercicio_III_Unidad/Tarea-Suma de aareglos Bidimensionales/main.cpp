// Objectivo
// Sumar todos los elementos de un arreglo bidimensional
// Requerimientos
// 1) Crear un arreglo bidimensional de 5x5
// 2) Inicializar cada elemento del arreglo con valores random
// 3) Sumar todos los valores del arreglo bidimensional y mostrar un mensaje "Total Suma:".

#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int filas = 5;
    int columnas = 5;
    int total = 0;

    srand(time(NULL));
    int sumarArreglo[filas][columnas]{
        //        1                 2                3                4                5         
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        
    };


    for (int i = 0; i <filas; i++)
    {
        for (int c = 0; c <columnas; c++)
        {
            //cout<<sumarArreglo[i][c];
            //total = i + c;

            cout<<"Total Suma: "<<filas + columnas;
        }
        
    }
    
    return 0;
}


