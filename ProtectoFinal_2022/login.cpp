#include <iostream>
#include<string>

using namespace std;


bool login(){
	string usuario ="admin";
	string contrasena ="proyecto2022";
	int intentos = 0;

while (intentos <=3){
      system("cls");

		if (intentos ==3)
		{
			cout<<"Usuario o Contrasena incorrectos!"<<endl;
			return false;
		}
	
	cout<<endl;
	cout<<"\t\t____________________________"<<endl;
	cout<<"\t\t SISTEMA DE NOTAS ESCOLARES "<<endl;
	cout<<"\t\t****************************";
	cout<<endl;
	cout<<endl;
	
	cout<<"\t\t Ingrese el Usuario: ";
	cin>>usuario;
	// cout<<endl;
	cout<<"\t\t Ingrese la Contrasena: ";
	cin>>contrasena;
	cout<<endl;
	
	if(usuario == "admin" && contrasena == "proyecto2022"){
		//cout<<"\t\t\tBienvenido al Sistema!"<<endl;
		system("cls");
		return true;
	}
intentos ++;	

}

return false;
}

