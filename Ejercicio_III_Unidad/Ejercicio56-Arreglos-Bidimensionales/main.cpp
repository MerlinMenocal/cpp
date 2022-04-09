#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombres[2][2];

    nombres[0][0]= "Juan";
    nombres[0][1]= "Perez";
    
    nombres[1][0]= "Maria";
    nombres[1][1]= "Martinez";

    nombres[2][0]= "Pedro";
    nombres[2][2]= "Mejia";

    for (int i = 0; i <3; i++)
    {
        cout<<nombres[i][0]<<endl;

    }
    


    return 0;
}
