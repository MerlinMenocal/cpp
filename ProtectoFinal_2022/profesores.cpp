#include <iostream>
#include <string>

using namespace std;

string  profesores[10][2]{
 {"PC001","Luis Enrique Ramires Rivera"},
 {"PC002","Carmen Maria Caceres Pineda"},
 {"PC003","Eduar Odair Contreras Coto"},
 {"PC004","Berta Melissa David Pacheco"},
 {"PC005","Alex David Moncada Paz"},
 {"PC006","David Alejandro Ventura"},
 {"PC007","Eleana Larissa Sanchez"},
 {"PC008","Lucas Andres Solis"},
 {"PC009","Juan Diego Sanches Torres"},
 {"PC010","Juan Andres Medina Jovel"}
};

void mostrarProfesores (){
    system("cls");
    cout<<"PROFESORES DE LA INSTITUCION"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<endl;


  for (int i = 0; i <10; i++)
  {
      
      cout<<profesores[i][0]<<" | "<<profesores[i][1];
      cout<<endl;
      cout<<endl;

  }
  system("pause");
};