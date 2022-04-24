#include<iostream>

using namespace std;

string arregloClientes[5][3] ={
    {"C001", "Juan Cardenas", "9542-7824"},
    {"C002", "Diego Ponce", "8847-2017"},
    {"C00", "Carlos Mejia", "3384-5678"},
    {"C004", "Elizabeth Montes", "9842-3576"},
    {"C005", "Elisa Santos", "8833-0002"}
};

void mostrarClientes(){
    system("cls");
    cout<<"Codigo, Nombre y Telefono"<<endl;
    cout<<"------------------------"<<endl<<endl;
    for (int i = 0; i < 5; i++)

    {
        cout<<arregloClientes[i][0]<<" | ";
        cout<<arregloClientes[i][1]<<" | ";
        cout<<arregloClientes[i][2]<<" | ";
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    system("pause");
}


//devolver el nombre del cliente
string buscarCliente (string codigo){
    
        for (int i = 0; i <10; i++)
        {
            if (arregloClientes[i][0]== codigo)
            {
                return arregloClientes[i][1];
            } 
        }
    
    return "";
    
};



