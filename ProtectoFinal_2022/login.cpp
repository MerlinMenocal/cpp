#include <iostream>
#include<string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


string login(string usuario, string contrasena){
	return usuario + " " + contrasena;

}
int main(int argc, char** argv) {
	
	string usuario = "admin";
	string contrasena = "proyecto2022";
	
	cout<<endl;
	cout<<"\t\t\t____________________________"<<endl;
	cout<<"\t\t\t SISTEMA DE NOTAS ESCOLARES "<<endl;
	cout<<"\t\t\t****************************";
	cout<<endl;
	cout<<endl;
	
	cout<<"\t\t\t Ingrese el Usuario: ";
	cin>>usuario;
	cout<<endl;
	
	cout<<"\t\t\t Ingrese la Contrasena: ";
	cin>>contrasena;
	cout<<endl;
	
	string ();
	if(usuario == "admin" && contrasena == "proyecto2022"){
		cout<<"\t\t\tBienvenido al Sistema!"<<endl;
	}else{
		cout<<"\t\t\tUsuario o Contrasena Incorrecto!"<<endl;
	}
	
	return 0;
}
