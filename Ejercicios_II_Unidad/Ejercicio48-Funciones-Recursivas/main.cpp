#include<iostream>

using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)
{
    if (miNumero == numeroSecreto)
    {
      cout<<"Adivinaste!"<<endl;  
    }else{
        cout<<"Intento Fallido con "<< miNumero<<endl;
        int otroNumero = 0;
        cout<<"Ingrese otro Numero: "<<endl;
        cin>>otroNumero;
        adivinarNumeroSecreto(otroNumero);
    }
    
}

int main(int argc, char const *argv[])
{
    adivinarNumeroSecreto(5);
    return 0;
}
