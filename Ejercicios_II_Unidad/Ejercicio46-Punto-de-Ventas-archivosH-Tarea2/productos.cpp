#include <iostream>
using namespace std;

void agregarProducto(string descripcion, int cantidad, double precio);

void productos( int opcion)
{
    system("cls");
    int opcionProducto = 0;

    switch (opcion)
    {
    case 1: //---------------BEBIDAS CALIENTES---------------------------
    {
        cout<<"BEBIDAS CALIENTES"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"1- Capuccino"<<endl;
        cout<<"2- Expresso"<<endl;
        cout<<endl;

        cout<<"Ingrese una Opcion: ";
        cin>>opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Latte - L 35.00", 1, 35);
            break;
        default:
        {
            cout<<"Opcion no Valida";
            return;
            break;

        }
        }
        cout<<endl;
        cout<< "Producto agregado"<<endl<<endl;
        system("pause");
        break;
    }
    case 2: //----------------------BEBIDAS FRIAS------------------------------
    {
        cout<<"BEBIDAS FRIAS"<<endl;
        cout<<"-------------"<<endl;
        cout<<"1- Granita de Cafe"<<endl;
        cout<<"2- Granita de Piña Colada"<<endl;
        cout<<"3- Granita de Naranja"<<endl;
        cout<<endl;

        cout<<"Ingrese una Opcion: ";
        cin>>opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Granita de Cafe - L 33.00", 1, 33);
            break;
        case 2:
            agregarProducto("2 Granita de Piña Colada - L 35.00", 1, 35);
            break;
        case 3:
            agregarProducto("3 Granita de Naranja - L 35.00", 1, 35);
            break;
        default:
        {
            cout<<"Opcion no Valida";
            return;
            break;
        }
        }
        cout<<endl;
        cout<< "Producto agregado"<<endl<<endl;
        system("pause");
        break;
    }
    case 3:  //-----------------------REPOSTERIA------------------------------------
    {
        cout<<"REPOSTERIA"<<endl;
        cout<<"----------"<<endl;
        cout<<"1- Pie de Piña"<<endl;
        cout<<"2- Muffin de Chocolate"<<endl;
        cout<<"3- Pastel de Zanahoria"<<endl;

        cout<<"Ingrese una Opcion: ";
        cin>>opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Pie de Piña - L 65.00", 1, 65);
            break;
        case 2:
            agregarProducto("1 Muffin de Chocolate - L 70.00", 1, 70);
            break;
        case 3:
            agregarProducto("1 Pastel de Zanahoria - L 70.00", 1, 70);
            break;
        default:
        {
            cout<<"Opcion no Valida";
            return;
            break;

        }
        }
        cout<<endl;
        cout<< "Producto agregado"<<endl<<endl;
        system("pause");
        break;
    }
        
    default:
        break;
    }
}