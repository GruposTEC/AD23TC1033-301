#include "padre.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::ostream;

Padre::Padre(string nom){
    nombre=nom;
}
Padre::Padre(){

}
Padre::~Padre(){
    cout<<"En el destructor de padre"<<endl;
}
ostream & operator<<(ostream &COUT,Padre &p){
    COUT<<"Soy Padre y mi nombre es: "<<p.nombre<<endl;
}
void Padre::imprimir(){
    cout<<"Soy Padre y mi nombre es: "<<nombre<<endl;
}