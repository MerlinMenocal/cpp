#include <iostream>
#include"seguridad.h"
#include "menu.h"

using namespace std;

/*int sumar(int a, int b){
	return a + b;
} */	

int main(int argc, char** argv) {
	
	bool acceso = login();
	
	if (acceso==true)
	{
	   menu();	
	}
	
	//cout<<sumar(5,7);
	
	return 0; 
}
