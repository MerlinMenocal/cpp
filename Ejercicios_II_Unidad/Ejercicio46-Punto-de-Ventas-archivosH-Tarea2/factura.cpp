#include <iostream>
//#include "productos.h"
//#include "menu.h"

using namespace std;

double subtotal =0;
double impuesto = 0;
double total = 0;

string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto =subtotal * 0.15;
    total = subtotal + impuesto;

}
void imprimirFactura(){
    system("cls");
    cout<<"-------"<<endl;
    cout<<"FACTURA"<<endl;
    cout<<endl;

    cout<<"Productos: "<<endl;
    cout<<listaProductos;

    cout<<endl;
    cout<<"Subtotal: "<<subtotal<<endl;
    cout<<"Impuesto S/V: "<<impuesto<<endl;
    cout<<"Total a Pagar: "<<total<<endl;
    cout<<endl;
    cout<<endl;
    system("pause");

}
