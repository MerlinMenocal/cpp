#include <iostream>

using namespace std;

bool login(){
    string password = "";
    int intentos = 0;

  while (intentos <=3)
  {
      system("cls");

      if(intentos ==3){
          cout<<"Usuario o Contrasena incorrectos!";
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



int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
