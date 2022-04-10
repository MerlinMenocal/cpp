#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // string nombres[3][2];

    // nombres[0][0]= "Juan";
    // nombres[0][1]= "Perez";
    
    // nombres[1][0]= "Maria";
    // nombres[1][1]= "Martinez";

    // nombres[2][0]= "Pedro";
    // nombres[2][2]= "Mejia";

    int filas = 3;
    int columnas = 2;

    //string nombres[3][2]=
    string nombres[filas][columnas]=
    {
        {"Juan", "Perez"},
        {"Maria", "Martinez"},
        {"Pedro", "Mejia"}
    };
    
    for (int i = 0; i <filas; i++)
    {
        //cout<<nombres[i][0]<<" "<<nombres[i][1]<<endl;
                for (int j = 0; j<columnas; j++)
                {
                    cout<<nombres[i][j]<<" ";
                }
                cout<<endl;

    }
    


    return 0;
}
