#include "sobrecarga.h"
#include <iostream>

using std::cout;
using std::endl;

Numero::Numero(int x1){
    x=x1;
}
Numero Numero::operator-(Numero n){
    int valor=x-n.x;
}
void Numero::imprimir(){
    cout<<"El valor de x es: "<<x<<endl;
}
void Numero::operator++(){
    x=x+1;
}
ostream &operator<<(ostream &COUT,Numero n){
    COUT<<"Desde la sobrecarga el valor de x es: "<<n.x<<endl;
    return COUT;
}