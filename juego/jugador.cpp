#include <iostream>
#include "jugador.h"
using std::cout;
using std::endl;

void Jugador::cambia_posicion(int n)
{
    posicion = posicion + n ;
}

int Jugador::get_posicion()
{
    return posicion;
}

void Jugador::set_nombre(string n)
{
    nombre = n;
}

void Jugador::imprimir()
{
    cout << "Soy el jugador " << nombre ;
    cout << " Mi posicion es " << posicion << endl;
}

void Jugador::mover()
{
    int mov = midado.lanzar();
    cambia_posicion(mov);
}
