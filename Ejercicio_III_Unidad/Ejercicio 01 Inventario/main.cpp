#include<iostream>

using namespace std;

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
        case 1:
            cout<<"Escogistes 1";
            break;
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

