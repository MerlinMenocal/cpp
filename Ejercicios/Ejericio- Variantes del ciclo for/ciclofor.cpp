#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
                    int i = 0;
                    // for (int i = 0; i < 10; i++) //sintaxis normal del for
                    // {
                    //     cout<<i<<" ";
                    // }

                    // cout<<endl;
                    // cout<<endl;

                    // for (int i = 9; i >=0; i--)  //negativos para ir restando
                    // {
                    //     cout<<i<<" ";
                    // }
                    
                    // cout<<endl;
                    // cout<<endl;

                    // for (int i = 0; i < 10000; i++)
                    // {
                    //     cout<<i<<" ";

                    //     if (i == 115)
                    // {
                    //     break; // rompe el ciclo
                    // }
                    // } 

    cout<<endl;
    cout<<endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5 || i == 7)
    {
        continue; // se salta numeros
    }
    cout<<i<<" ";
    } 

    return 0;
}
