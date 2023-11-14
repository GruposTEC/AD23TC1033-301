#include <iostream>
#include "dado.h"
#include <cstdlib>

using std::cout;
using std::endl;

int Dado::lanzar()
{
    caras = 6;
    return  std::rand() % caras + 1 ;
}

void Dado::set_caras(int n)
{
    caras = n;   
}

int Dado::get_caras()
{
    return caras;
}

void Dado::imprimir()
{
    cout << "Soy un dado y tengo " << caras << " caras" << endl;
}