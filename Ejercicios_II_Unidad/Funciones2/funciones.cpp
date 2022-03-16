#include<iostream>

using namespace std;

float calculadora(float n1, float n2);
    

int main(int argc, char const *argv[])
{
    cout<<calculadora(5, 2);
    return 0;
}

float calculadora(float n1, float n2){
    
    return n1 + n2;
}