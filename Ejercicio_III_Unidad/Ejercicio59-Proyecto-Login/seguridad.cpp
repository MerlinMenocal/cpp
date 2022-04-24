#include <iostream>

using namespace std;

bool login1(){
    string password = "";
    int intentos = 0;

  while (intentos <=3){
      system("cls");

      cout<<"Bienvenido al: "<<endl;
        cout<<" _________.__          __                        "<<endl; 
        cout<<"/   _____/|__| _______/  |_  ____   _____ _____ "<<endl;  
        cout<<"\_____  \ |  |/  ___/\   __\/ __ \ /     \\__  \ "<<endl; 
        cout<<"/        \|  |\___ \  |  | \  ___/|  Y Y  \/ __ \__ "<<endl;
       cout<<"/_______   >__/____  > |__|  \___  >__|_|  (____   /"<<endl;
        cout<<"        \/         \/            \/      \/     \/ "<<endl;       


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

