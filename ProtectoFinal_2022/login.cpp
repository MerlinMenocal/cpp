#include <iostream>
#include<string>

using namespace std;


bool login(){
	string usuario ="";
	string contrasena ="";
	int intentos = 0;

while (intentos <=3){
      system("cls");

	string usuario = "admin";
	string contrasena = "proyecto2022";

	if (intentos <=3)
	{
		cout<<"Usuario o Contrasena incorrectos!"<<endl;
		return false;
	}
	
	cout<<endl;
	cout<<"\t\t\t____________________________"<<endl;
	cout<<"\t\t\t SISTEMA DE NOTAS ESCOLARES "<<endl;
	cout<<"\t\t\t****************************";
	cout<<endl;
	cout<<endl;
	
	cout<<"\t\t\t Ingrese el Usuario: ";
	cin>>usuario;
	// cout<<endl;
	cout<<"\t\t\t Ingrese la Contrasena: ";
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

