#include <iostream>

using namespace std;
//string alumnos [10][9];
    // {
    //     {"E001","Pedro Jose","Perez Torres","0104-2041-00084","8841-7741","15","Masculino","pjose@gmail.com","Noveno Grado"},
    //     {"E002","Maria Elena","Caceres Padilla","0104-2041-10084","8841-7741","6","Femenino","mariaelena@gmail.com","Primer Grado"},
    //     {"E003","Alejandro Jose","Paredes","0104-2041-10084","8841-7741","7","Masculino","alejose@gmail.com","Segundo Grado"},
    //     {"E004","Carlos David","Perez Torres","0104-2041-10084","8841-7741","11","Masculino","carlosdavid@gmail.com","Quinto Grado"},
    //     {"E005","Escarleth Adriana","Ponce Fuentes","0104-2041-10084","8841-7741","8","Femenino","esadriana@gmail.com","Tercer Grado"},
    // };   

void listaAlumnos (string codigo, string nombre, string apellido, string id, string telefono, string edad, string sexo, string correo, string grado){
    system("cls");
    cout<<endl;
    cout<<"LISTADO DE ALUMNOS"<<endl;
    cout<<"********************"<<endl;

    for (int i = 0; i <1; i++) //imprime solo 3 alumnos para efectos de prueba
        {
            cout<<"Codigo: "<<codigo<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Telefono: "<<telefono<<endl;
            cout<<"Edad: "<<edad<<endl;
            cout<<"Sexo: "<<sexo<<endl;
            cout<<"Correo Electronico: "<<correo<<endl;
            cout<<"Grado: "<<grado<<endl; 
            cout<<endl;    
            
        }
    system("pause");
};


void ingresoAlumnos(){

    string codigo = "", nombre = "", apellido = "", id= "", telefono = "", edad="", sexo = "", correo = "", grado = "";
    

    system("cls");
    cout<<endl;
    cout<<"INGRESO DE DATOS"<<endl;
    cout<<"**********************"<<endl;
    cout<<"Ingrese el Codigo del Alumno: ";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese el Nombre: ";
    cin>>nombre;
    cout<<endl;
    cout<<"Ingrese el Nombre: ";
    cin>>apellido;
    cout<<endl;
    cout<<"Ingrese el ID: ";
    cin>>id;
    cout<<endl;
    cout<<"Ingrese el Telefono: ";
    cin>>telefono;
    cout<<endl;
    cout<<"Ingrese la Edad: ";
    cin>>edad;
    cout<<endl;
    cout<<"Ingrese el Sexo: ";
    cin>>sexo;
    cout<<endl;
    cout<<"Ingrese el Correo Electronico: ";
    cin>>correo;
    cout<<endl;
    cout<<"Ingrese el Grado o carrera a cursar: ";
    cin>>grado;
    cout<<endl;
    cout<<endl;
};





    
    
    

