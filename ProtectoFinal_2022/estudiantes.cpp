#include <iostream>
#include <string>

using namespace std;

//void estudiantes();


// void listaEstudiantes(){
//     string ingresoEstudiantes[10][9];

//            cout<<"Ingresastes estos Datos:"<<endl;
//            cout<<ingresoEstudiantes[0][0]<<endl;
//            cout<<ingresoEstudiantes[0][1]<<endl;
//            cout<<ingresoEstudiantes[0][2]<<endl;
//            cout<<ingresoEstudiantes[0][3]<<endl;
//            cout<<ingresoEstudiantes[0][4]<<endl;
//            cout<<ingresoEstudiantes[0][5]<<endl;
//            cout<<ingresoEstudiantes[0][6]<<endl;
//            cout<<ingresoEstudiantes[0][7]<<endl;
//            cout<<ingresoEstudiantes[0][8]<<endl; 
//     }
    

        // int main(int argc, char const *argv[])
        // {
        //     string ingresoEstudiantes[10][9];

        //     cout<<"Registro de Datos para Estudiantes"<<endl;
        //     cout<<"---------------------------------"<<endl;

        //     cout<<"Ingrese el Codigo: ";
        //     cin>>ingresoEstudiantes[0][0];
        //     cout<<endl;
            
        //     cout<<"Ingrese el Nombre: ";
        //     cin>>ingresoEstudiantes[0][1];
        //     cout<<endl;

        //     cout<<"Ingrese el Apellido: ";
        //     cin>>ingresoEstudiantes[0][2];
        //     cout<<endl;

        //     cout<<"Ingrese el ID: ";
        //     cin>>ingresoEstudiantes[0][3];
        //     cout<<endl;

        //     cout<<"Ingrese el Telefono de Contacto: ";
        //     cin>>ingresoEstudiantes[0][4];
        //     cout<<endl;

        //     cout<<"Ingrese la edad: ";
        //     cin>>ingresoEstudiantes[0][5];
        //     cout<<endl;

        //     cout<<"Ingrese el Sexo: ";
        //     cin>>ingresoEstudiantes[0][6];
        //     cout<<endl;

        //     cout<<"Ingrese el correo Electronico: ";
        //     cin>>ingresoEstudiantes[0][7];
        //     cout<<endl;

        //     cout<<"Ingrese el Grado a cursar: ";
        //     cin>>ingresoEstudiantes[0][8];
        //     cout<<endl;
        //     system("cls");

        //     //cout<<"Alumno Agregado con exito!"<<endl;


        //     return 0;
        // };
string alumnos [10][9]
{
    {"E001","Pedro Jose","Perez Torres","0104-2041-00084","8841-7741","15","Masculino","pjose@gmail.com","Noveno Grado"},
    {"E002","Maria Elena","Caceres Padilla","0104-2041-10084","8841-7741","15","Femenino","mariaelena@gmail.com","Primer Grado"},
    {"E003","Alejandro Jose","Paredes","0104-2041-10084","8841-7741","15","Masculino","alejose@gmail.com","Segundo Grado"},
    {"E004","Carlos David","Perez Torres","0104-2041-10084","8841-7741","15","Masculino","carlosdavid@gmail.com","Quinto Grado"},
    {"E005","Escarleth Adriana","Ponce Fuentes","0104-2041-10084","8841-7741","15","Femenino","esadriana@gmail.com","Tercer Grado"},
    {"E006","Elizabeth Maria","Martinez","0104-2041-10084","8841-7741","15","Femenino","mariaeli@gmail.com","Cuarto Grado"},
    {"E007","Alexandra Abigail","Aviles","0104-2041-10084","8841-7741","15","Femenino","alexaabi@gmail.com","Noveno Grado"},
    {"E008","Luis Adolfo","Trochez","0104-2041-10084","8841-7741","15","Masculino","luisadolfo@gmail.com","Septimo Grado"},
    {"E009","Victor Mauricio","Contreras","0104-2041-10084","8841-7741","15","Masculino","victormau@gmail.com","Octavo Grado"},
    {"E010","Josue Carlos","Rios","0104-2041-10084","8841-7741","15","Masculino","josuecarlos@gmail.com","1° de Carrera"},
};   

void listaAlumnos (){
    system("pause");
    cout<<endl;
    cout<<"LISTADO DE ALUMNOS"<<endl;
    cout<<"********************"<<endl;

    for (int i = 0; i <10; i++)
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
    
}

    
    
    

