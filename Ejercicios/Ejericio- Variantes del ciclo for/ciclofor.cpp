#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    for (int i = 9; i >=0; i--)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;

    for (int i = 0; i < 10000; i++)
    {
        cout<<i<<" ";

        if (i == 115)
    {
        break;
    }
    } 
    return 0;
}
