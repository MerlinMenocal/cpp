
#include <iostream>
#include "menu.h"
#include "seguridad.h"

using namespace std;

void menu(){
	
	int opcion = 0;
	system("cls");
	cout<<"Bienvenido al Sistema XYZ"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<endl;
	cout<<"1 - Facturacion"<<endl;
	cout<<"2 - Clientes"<<endl;
	cout<<"3 - Productos"<<endl;
	cout<<"4 - Salir"<<endl;
	cin>>opcion;
	
	if(opcion ==4){
	   logout();	
	}
		
}
