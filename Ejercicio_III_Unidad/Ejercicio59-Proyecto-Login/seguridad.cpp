#include <iostream>

using namespace std;

bool login1(){
    string password = "";
    int intentos = 0;

  while (intentos <=3){
      system("cls");
      
      if(intentos ==3){
          cout<<"Usuario o Contrasena incorrectos!"<<endl;
          cout<<"Intentelo nuevamente!"<<endl;
          return false;
      }

      cout<<"Ingrese la Contraseña"<<endl;
      cin>>password;

      if (password == "Admin")
        {
            system("cls");
            return true;
        }
            
      intentos++;
  }
  
  return false;

}

