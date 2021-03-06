/* Objectivo
Sumar todos los elementos de un arreglo bidimensional
Requerimientos
1) Crear un arreglo bidimensional de 5x5
2) Inicializar cada elemento del arreglo con valores random
3) Sumar todos los valores del arreglo bidimensional y mostrar un mensaje "Total Suma:". */

#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int filas = 5;
    int columnas = 5;
    int sumaFila = 0;
    int sumaColumna = 0;
    int total1 = 0;
    int total2 = 0;

    srand(time(NULL));
    int sumarArreglo[filas][columnas]{
        //           0                 1                 2                 3                 4
        //    --------------    --------------    --------------    --------------    --------------
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)},
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)},
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)},
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)},
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)}         
    }; cout<<endl;

    //para que muestre la matriz o arreglo
    for (int filas = 0; filas <5; filas++)
    {
        for (int columnas = 0; columnas <5; columnas++)
        {
            cout<<sumarArreglo[filas][columnas]<<"  ";
        }
        cout<<endl; 
    }

    //suma de las filas
    for (int filas = 0; filas <5; filas++)
    {
        sumaFila = 0;
        for (int columnas = 0; columnas <5; columnas++)
        {
            sumaFila= sumaFila + sumarArreglo[filas][columnas];
        }
        //muestra el resultado de sumar cada fila
        //cout<<"Suma de la fila :"<<filas<<"--->" << sumaFila;
        /* Acumulador del total de las filas*/
        total1 += sumaFila;
    }
 
    cout<<endl;
    //suma de las columnas
    for (int columnas = 0; columnas <5; columnas++)
    {
        sumaColumna = 0;
        for (int filas = 0; filas <5; filas++)
        {
            sumaColumna=sumaColumna + sumarArreglo[filas][columnas];
            
        }
        //muestra el resultado de sumar cada colunma
        //cout<<"Suma de la columna es:"<<columnas<<"--->" << sumaColumna;
        //cout<<endl;
        /* acumulador de la sumativa de todas las columnas */
        total2 += sumaColumna;
    }

 /* SUMA DE FILAS Y COLUMNAS*/
 cout<<"Total Suma: "<<total1 + total2;
    return 0;
}


