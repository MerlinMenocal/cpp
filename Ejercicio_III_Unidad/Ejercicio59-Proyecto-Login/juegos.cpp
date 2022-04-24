#include <iostream>

using namespace std;

string arregloJuegos [10][2]={
    {"J001", "The Crew 2"},
    {"J002", "World of Warcraft"},
    {"J003", "Dota 2"},
    {"J004", "Tragamonedas 888casino"},
    {"J005", "World of Tanks"},
    {"J006", "Eve Online"},
    {"J007", "Virtua Tennis Challenge"},
    {"J008", "Worms Reloaded"},
    {"J009", "Apex Legends"},
    {"J010", "Borderlands 3"}
};

void mostrarJuegos (){
    system("cls");
    cout<<"Codigo, Descripcion"<<endl;
    cout<<"-------------------"<<endl;

    for (int i = 0; i <10; i++)
    {
        cout<<arregloJuegos[i][0]<<" | ";
        cout<<arregloJuegos[i][1]<<" | ";
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    system("pause");
}

string buscarJuego (string codigo){
    
        for (int i = 0; i <10; i++)
        {
            if (arregloJuegos[i][0]== codigo)
            {
                return arregloJuegos[i][1];
            } 
        }
    
    return "";
    
};