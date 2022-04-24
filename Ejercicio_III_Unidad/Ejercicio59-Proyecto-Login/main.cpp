#include <iostream>
#include "seguridad.h"
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    bool respuesta = login1();

    if (respuesta == true)
    {
        menu();
    }
    
    return 0;
}
