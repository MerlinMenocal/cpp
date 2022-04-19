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
    int resultado = 0;
     int total1 = 0;

    srand(time(NULL));
    int sumarArreglo[filas][columnas]{
        //        1                 2                3                4                5         
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        {(rand() % 5 + 1), (rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1),(rand() % 5 + 1)},
        
    };

  //recorre las filas

      for (int filas = 0; filas <5; filas++)
    {
        //recorre las columnas
        for (int columnas = 0; columnas <5; columnas++)
        {
            cout<<"Fila"<< filas <<"columnas"<<columnas<<endl;
            cout<<sumarArreglo[filas][columnas];
            //"Total Suma: "<<
            cout<<endl;
            

        }
    }
  
    
    
        
        
   
    
    
        
    
    
    return 0;
}


