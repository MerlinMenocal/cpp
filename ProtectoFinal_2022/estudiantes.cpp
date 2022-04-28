#include <iostream>
#include <string>

using namespace std;

//void estudiantes();

    int main(int argc, char const *argv[])
    {
        
        string ingresoEstudiantes[10][9];

        cout<<"Registro de Datos para Estudiantes"<<endl;
        cout<<"---------------------------------"<<endl;

        cout<<"Ingrese el Codigo: ";
        cin>>ingresoEstudiantes[0][0];
        cout<<endl;
        
        cout<<"Ingrese el Nombre: ";
        cin>>ingresoEstudiantes[0][1];
        cout<<endl;

        cout<<"Ingrese el Apellido: ";
        cin>>ingresoEstudiantes[0][2];
        cout<<endl;

        cout<<"Ingrese el ID: ";
        cin>>ingresoEstudiantes[0][3];
        cout<<endl;

        cout<<"Ingrese el Telefono de Contacto: ";
        cin>>ingresoEstudiantes[0][4];
        cout<<endl;

        cout<<"Ingrese la edad: ";
        cin>>ingresoEstudiantes[0][5];
        cout<<endl;

        cout<<"Ingrese el Sexo: ";
        cin>>ingresoEstudiantes[0][6];
        cout<<endl;

        cout<<"Ingrese el correo Electronico: ";
        cin>>ingresoEstudiantes[0][7];
        cout<<endl;

        cout<<"Ingrese el Grado a cursar: ";
        cin>>ingresoEstudiantes[0][8];
        cout<<endl;
        system("cls");

        //cout<<"Alumno Agregado con exito!"<<endl;


        return 0;
    };
    string ingresoEstudiantes[10][9];

    void listaEstudiantes(){

           cout<<"Ingresastes estos Datos:"<<endl;
           cout<<ingresoEstudiantes[0][0]<<endl;
           cout<<ingresoEstudiantes[0][1]<<endl;
           cout<<ingresoEstudiantes[0][2]<<endl;
           cout<<ingresoEstudiantes[0][3]<<endl;
           cout<<ingresoEstudiantes[0][4]<<endl;
           cout<<ingresoEstudiantes[0][5]<<endl;
           cout<<ingresoEstudiantes[0][6]<<endl;
           cout<<ingresoEstudiantes[0][7]<<endl;
           cout<<ingresoEstudiantes[0][8]<<endl; 
    }
    

    
    
    

