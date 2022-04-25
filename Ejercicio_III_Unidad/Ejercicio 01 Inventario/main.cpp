#include<iostream>

using namespace std;

string productos [5][2]{
    {"001","Iphone X"},
    {"002","Table Samsumg A8"},
    {"003","Laptop Dell"},
    {"004","CPU Dell"},
    {"005","Monitor HP"},
};

int main(int argc, char const *argv[])
{

    int opcion = 0;

    while (true)
    {
        system("cls");
        cout<<"Sistema de Inventario"<<endl;
        cout<<"---------------------"<<endl<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"1- Productos"<<endl;
        cout<<"2- Ingreso de Inventario "<<endl;
        cout<<"3- Salida de Inventario "<<endl;
        cout<<"0- Salir "<<endl;


        cout<<"Ingrese una Opcion: ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:{
            cout<<endl;
            cout<<"LISTADO DE PRODUCTOS"<<endl;
            cout<<"********************"<<endl;
            
            for (int i = 0; i <5; i++)
            {
                cout<<productos[i][0]<<" "<< productos[i][1]<<endl;
            }
            
            cout<<"Escogistes 1";
            break;

        }   
        case 2:
            cout<<"Escogistes 2";
            break;
        case 3:
            cout<<"Escogistes 3";
            break;
        
        default:
            break;
        }
        system("pause");
        cout<<endl;

       if (opcion == 0)
       {
           break;
           system("cls");
       }
         

    }
    

    
    return 0;
}

