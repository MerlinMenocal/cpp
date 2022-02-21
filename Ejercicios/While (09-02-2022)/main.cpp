#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
/*	int contador = 0 ;
	
	while (true)
	{
		
		cout<<"*";
		
		while (true)
		{
			
		  cout<<"$";
		  contador = contador +1;
		  
		  if(contador == 10)
		  {
		  	break;
		  }	
		}
		//break;
		contador = 0;
	} */

	
	
	//true/false
	int opcion = 0;
	while  (true)
	{
		system("cls"); //clear o limpiar
		cout<<"Ingrese una Opcion"<<endl;
		cout<<"1 - Ventas "<<endl;
		cout<<"2 - Productos"<<endl;
		cout<<"3 - Reportes"<<endl;
		cout<<"0 - Salir"<<endl;
		
		cin>> opcion;
		
		if (opcion == 1){
			
			system("cls");
			cout<<"VENTAS"<<endl;
			cout<<"------"<<endl;
			system("pause");
		    }
		
		if(opcion ==2){
				
			system("cls");
			cout<<"PRODUCTOS"<<endl;
			cout<<"---------"<<endl;
			system("pause");	
			}
		
		if(opcion ==3){
						
			int opcionReportes = 0; 
			
			while (true){
			
				system("cls");
				cout<<"REPORTES"<<endl;
				cout<<"--------"<<endl;
				cout<<"1 - Reportes de Ventas"<<endl;
				cout<<"2 - Reportes de Productos"<<endl;
				cout<<"3 - Reportes de Inventario"<<endl;
				cout<<"0 - Salir"<<endl;
				
				cin>>opcionReportes;
				
					if (opcionReportes == 1){
						
					   	system("cls");
						cout<<"REPORTE DE VENTAS"<<endl;
						cout<<"------------------"<<endl;
						system("pause");
						   	
					}
					if (opcionReportes ==0){
						
					  break;
					}
			}
				
		if(opcion ==0){
						
			break;
			}
			
		if (opcion < 1 || opcion >3){
			
			system("cls");
			cout<<"Opcion invalida"<<endl;
			system("pause");
		}
	}
}
				
			
		
		
	/*
		if (opcion == 1){
			
			system("cls");
			cout<<"VENTAS"<<endl;
			cout<<"------"<<endl;
			system("pause");
		}
		else{
				if(opcion ==2){
				
				system("cls");
				cout<<"PRODUCTOS"<<endl;
				cout<<"---------"<<endl;
				system("pause");	
			}
			else{
					if(opcion ==3){
						
					system("cls");
					cout<<"REPORTES"<<endl;
					cout<<"--------"<<endl;
					system("pause");
				}
				else{
						if(opcion ==0){
						
						break;
					}
					else{
							system("cls");
							cout<<"Opcion invalida"<<endl;
							system("pause");
					}
				}
			}
		}
	
			
	}

		*/
	return 0;
}
