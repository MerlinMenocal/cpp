#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	
	int opcion = 0;
	while(true){
		system("cls");
		cout<<"****"<<endl;
		cout<<"MENU"<<endl;
		cout<<"****"<<endl;
		
		cout<<endl;
		cout<<"1 - Cafe y Granitas"<<endl;
		cout<<"2 - Reposteria"<<endl;
		cout<<"3 - Dulces"<<endl;
		cout<<"0 - Salir"<<endl;
		
		cout<<"Ingrese una Opcion del Menu"<<endl;
		cin>>opcion;

		if (opcion ==0){
			break;
		}
	
		switch (opcion)
		{
			case 1:
				{
				system("cls");
				cout<<"Estas en el menu de Cafe y Granitas"<<endl;
				system("pause");
				break;
				}
			case 2:
				{
				system("cls");
			    cout<<"Estas en el menu de Reposteria"<<endl;
				system("pause");
				break;
				}
			case 3:
				{
				system("cls");
			    cout<<"Estas en el menu de Dulces"<<endl;
				system("pause");
				break;
				}		
			default:
				{
				cout<<"Ingrese una Opcion valida (0, 1, 2, 3)"<<endl;
				system("pause");
				break;
				}
		}
	}				
	return 0;
}
