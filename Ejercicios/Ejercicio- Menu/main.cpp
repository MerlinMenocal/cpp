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
		
		if(opcion == 1){
			system("cls");
			cout<<"Estas en el menu de Cafe y Granitas"<<endl;
			system("pause");	
		}else{
			if(opcion ==2){
				system("cls");
			    cout<<"Estas en el menu de Reposteria"<<endl;
				system("pause");	
			}else{
				if(opcion ==3){
					system("cls");
			    	cout<<"Estas en el menu de Dulces"<<endl;
					system("pause");	
				}else{
					if(opcion ==0){
						cout<<"Salistes del sistema"<<endl;
						break;
					}
					
				}
			}
		}
	}
	return 0;
}
