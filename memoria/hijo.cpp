#include "hijo.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::ostream;

Hijo::Hijo(string nom){
    nombre=nom;
}
Hijo::~Hijo(){
    cout<<"En el destructor de hijo"<<endl;
}
ostream & operator<<(ostream &COUT,Hijo &h){
    COUT<<"Soy Hijo y mi nombre es: "<<h.nombre<<endl;
}
void Hijo::imprimir(){
    cout<<"Soy Hijo y mi nombre es: "<<nombre<<endl;
}