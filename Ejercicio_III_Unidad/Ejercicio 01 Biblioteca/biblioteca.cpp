#include <iostream>

using namespace std;

string libros[2][2]{
    {"Algoritmos","Algoritmos y Programacion (Guia para Docentes)"},
    {"Bases de Datos","Apuntes de Bases de Datos 1"},

};

int main(int argc, char const *argv[])
{
    for (int i = 0; i <2; i++)
    {
        cout<<libros[i][1];
    }
    
    return 0;
}
