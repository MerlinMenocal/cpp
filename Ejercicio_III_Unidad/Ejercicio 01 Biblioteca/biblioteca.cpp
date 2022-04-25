#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string libros[2][2];

void cargarLibros(){
    libros[0][0]="Algoritmos";
    libros[0][1]="Algoritmos y Programacion (Guia para Docentes)";
    
    libros[1][0]="Bases de Datos";
    libros[1][1]="Apuntes de Bases de Datos 1";
}

int main(int argc, char const *argv[])
{
    cargarLibros();

    bool salir = false;

    while (salir == false)
    {
        string buscar ="";
        system("cls");
        cout<<"Ingrese la descripcion del Libro que busca: ";
        cin>>buscar;

        //Busqueda
        for (int i = 0; i <2; i++)
        {
            string libro = libros[i][1];
            string libroEnminuscula = libro;
            //transformamos el texto en minusculas
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroEnminuscula.find(buscar) != string::npos)
            {
                cout<<"Libro encontrado: "<<libro<<endl;
                salir = true;
            }
            
        }
        

        if (salir== false)
        {
            char continuar = 'n';
            while (true)
            {
                system("cls");
                cout<<"No se encontro el Libro que Buscas. Desea continuar? s/n"<<endl;
                cin>>continuar;

                if (continuar == 's' || continuar == 'S')
                {
                    break;
                }else if(continuar == 'n' || continuar =='N')
                    salir = true;
                    break;
                

            }
            
        }
        

    }
    

    return 0;
}
