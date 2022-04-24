#include <iostream>

using namespace std;

bool login1(){
    string password = "";
    int intentos = 0;

  while (intentos <=3){
      system("cls");

      cout<<"Bienvenido al: "<<endl;
        cout<<" _________.__          __                        "; 
        cout<<"/   _____/|__| _______/  |_  ____   _____ _____ ";  
        cout<<"\_____  \ |  |/  ___/\   __\/ __ \ /     \\__  \ "; 
        cout<<"/        \|  |\___ \  |  | \  ___/|  Y Y  \/ __ \__ ";
       cout<<"/_______   >__/____  > |__|  \___  >__|_|  (____   /";
        cout<<"        \/         \/            \/      \/     \/ ";       


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

