#include "hija.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::ostream;

Hija::Hija(string nom){
    nombre=nom;
}
Hija::~Hija(){
    cout<<"En el destructor de hija"<<endl;
}
ostream & operator<<(ostream &COUT,Hija &ha){
    COUT<<"Soy Hija y mi nombre es: "<<ha.nombre<<endl;
}
void Hija::imprimir(){
    cout<<"Soy Hija y mi nombre es: "<<nombre<<endl;
}