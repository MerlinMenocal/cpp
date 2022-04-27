#include <iostream>
#include<string>
#include<conio.h> //getch

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
	
	cout<<"\tIngrese el Usuario: ";
	cin>>usuario;
	// cout<<endl;
	cout<<"\tIngrese la Contrasena: ";
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

