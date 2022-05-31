#include <iostream>
#include "persona.h"
using namespace std;

int main()
{
    cout << "Primer proyecto de Joseph Bano en GIT y GitHub" << endl;
    persona p;
    p.edad=18;
    p.nombre="Joseph";
    cout << "Nombre: " << p.nombre << "\nEdad: " << p.edad;
    return 0;
}
