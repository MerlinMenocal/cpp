#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
 
 int pares = 0;
 int impares = 0; 
 double total = 0;

for (int i = 1; i <= 10; i++)
{
    if ( i % 2 ==0)
    {
        pares = pares + i;
    }
    
    if ( i % 2 ==1)
    {
       impares = impares + i;
    }
}

total = pares +impares;
cout<<endl;
cout<<endl;
cout<<"Total Pares: "<<pares<<endl;
cout<<"Total Impares: "<<impares<<endl<<endl;
cout<<"Total de Pares e Impares: "<<total;

    return 0;
}
