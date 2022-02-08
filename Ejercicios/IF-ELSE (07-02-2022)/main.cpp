#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int edad1 = 18;
int edad2 = 10;

// //bool resultado = false;

// //true =1
// //false = 0

// // true/ false
// if (edad1 > edad2)
// {
//     cout<<"Edad 1 es mayor que Edad 2";   //<--- true
// }
// else{
//     // <-- false
// }
        
//resultado = edad1 > edad2 && edad1 > 18;
//true/false
//if (edad1> edad2 && edad1 >18)
//{
    /* code */
//}

while (edad1 > edad2)
{
    cout<< edad1 <<"es mayor que"<< edad2 <<endl;
   edad2 = edad2 +1;
    
   if (edad2==14)
   {
       break;
   }
   

   
}


    return 0;
}
