#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
     //        [5]camtidad de elementos(valores) a contener
    int numeros[5]; //declaracion del arreglo
    // int indice =3;

    // numeros[indice]=50;
    // cout<<numeros[indice]<<endl;

    for (int i = 0; i <5; i++)
    {
        numeros[i] = i;
    }
    

    //asignacionde valores a un arreglo
        // numeros[0]=10;
        // numeros[1]=5;
        // numeros[2]=15;
        // numeros[3]=7;
        // numeros[4]=20;

    for (int i = 0; i <5; i++)
    {
        cout<<numeros[i]<<endl;
    }
        

    //lectura del arreglo
    // cout<<numeros[1]<<endl;
    // cout<<numeros[2]<<endl;
    // cout<<numeros[3]<<endl;
    // cout<<numeros[4]<<endl;

    return 0;
}
