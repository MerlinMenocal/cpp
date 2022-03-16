#include<iostream>
#include"seguridad.h"

using namespace std;

bool login()
{
	int intentos = 0;
	while (true){
		
	system("cls");	
	string usuario = "";
	string contrasena = "";
	
	cout<<"Ingrese el usuario: ";
	cin>>usuario;
	cout<<endl;
	cout<<"Ingrese la Contraseña: ";
	cin>>contrasena;
	
	if(usuario =="admin" && contrasena == "123"){
		return true;
	}
	
	cout<<endl;
	cout<<"Usuario o contraseña incorrecta";
	
	intentos++;
	
	if(intentos ==3){
		break;
	 }
	
	}
	
	return false;
}

void logout(){
	system("cls");
	cout<<"Hasta la Vista!";
}
