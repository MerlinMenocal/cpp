#include <iostream>

using namespace std;
string alumnos [5][9]
{
    {"E001","Pedro Jose","Perez Torres","0104-2041-00084","8841-7741","15","Masculino","pjose@gmail.com","Noveno Grado"},
    {"E002","Maria Elena","Caceres Padilla","0104-2041-10084","8841-7741","6","Femenino","mariaelena@gmail.com","Primer Grado"},
    {"E003","Alejandro Jose","Paredes","0104-2041-10084","8841-7741","7","Masculino","alejose@gmail.com","Segundo Grado"},
    {"E004","Carlos David","Perez Torres","0104-2041-10084","8841-7741","11","Masculino","carlosdavid@gmail.com","Quinto Grado"},
    {"E005","Escarleth Adriana","Ponce Fuentes","0104-2041-10084","8841-7741","8","Femenino","esadriana@gmail.com","Tercer Grado"},
};   

void listaAlumnos (){
    system("cls");
    cout<<endl;
    cout<<"LISTADO DE ALUMNOS"<<endl;
    cout<<"********************"<<endl;

    for (int i = 0; i <3; i++) //imprime solo 3 alumnos para efectos de prueba
        {
            cout<<"Codigo: "<<alumnos[i][0]<<endl;
            cout<<"Nombre: "<<alumnos[i][1]<<endl;
            cout<<"Apellido: "<<alumnos[i][2]<<endl;
            cout<<"ID: "<<alumnos[i][3]<<endl;
            cout<<"Telefono: "<<alumnos[i][4]<<endl;
            cout<<"Edad: "<<alumnos[i][5]<<endl;
            cout<<"Sexo: "<<alumnos[i][6]<<endl;
            cout<<"Correo Electronico: "<<alumnos[i][7]<<endl;
            cout<<"Grado: "<<alumnos[i][8]<<endl; 
            cout<<endl;    
            
        }
    system("pause");
};


void ingresoAlumnos(){
    string codigoAlumno= "";
    string nombre= "";

    system("cls");
    cout<<endl;
    cout<<"INGRESO DE DATOS"<<endl;
    cout<<"**********************"<<endl;
    cout<<"Ingrese el Codigo del Alumno: ";
    cin>>alumnos[0][0];
    cout<<endl;
    cout<<"Ingrese el Nombre: ";
    cin>>alumnos[1][1];
    cout<<endl;

}





    
    
    

