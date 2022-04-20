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
    int sumaFila = 0;
    int sumaColumna = 0;
    int total1 = 0;
    int total2 = 0;

    srand(time(NULL));
    int sumarArreglo[filas][columnas]{
        //          0               1               2               3               4         
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)},
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)},
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)},
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)},
            {(rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1), (rand() % 5 + 1)}         
    };

//   //recorre las filas

//       for (int filas = 0; filas <5; filas++)
//     {
//         //recorre las columnas
//         for (int columnas = 0; columnas <5; columnas++)
//         {
//             cout<<"Fila "<< filas <<" columnas "<<columnas<<endl;
//             cout<<sumarArreglo[filas][columnas];
//             //"Total Suma: "<<
//             cout<<endl;      
//         }
//     }
  
// Suma los elementos en la ultima fila/columna
// for (int filas = 0; filas < 5; ++filas)
// {
//     resultado += sumarArreglo[5][filas];
//     for (int columnas = 0; columnas < 5; ++columnas)
//     {
//         sumarArreglo[5][filas] += sumarArreglo[filas][columnas];
//         sumarArreglo[5][columnas] += sumarArreglo[filas][columnas];
//         //cout<<endl;
        
//     }
// }

// // Mostrar resultados
// for (int filas = 0; filas <5; ++filas)
// {
//     for (int columnas = 0; columnas < 5; ++columnas)
//     {
//         printf("%d ", sumarArreglo[filas][columnas]);
//         //cout<<sumarArreglo[filas][columnas];
//     //     cout<<"===========";
//     // cout<<"Total Suma: ";
//     }
//     printf("\n");
//     cout<<"La suma Total es: "<<resultado;
    

// }

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
        if (sumaFila <5)
        {
            total1 = total1 + sumaFila;
        }
    }
    cout<<"Suma de la fila es:"<<filas<<"--->" << sumaFila;
    cout<<endl;
}
 
 cout<<endl;
//suma de las columnas

for (int columnas = 0; columnas <5; columnas++)
{
    sumaColumna = 0;
    for (int filas = 0; filas <5; filas++)
    {
        sumaColumna=sumaColumna + sumarArreglo[filas][columnas];
        if (sumaColumna <5)
        {
            total1 = total1 + sumaColumna;
        }
        
    }
    cout<<"Suma de la columna es:"<<columnas<<"--->" << sumaColumna;
    cout<<endl;
}

//cout<<"Total Suma: "<<(sumaFila * columnas) + (sumaColumna * filas);
cout<<"Total Suma: "<<(sumaFila * 4 + sumaColumna * 4);


    return 0;
}


