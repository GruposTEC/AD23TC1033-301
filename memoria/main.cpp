#include "padre.h"
#include "hijo.h"
#include "hija.h"
#include "familia.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::ostream;

int main(){
    /*
    Padre p("Rodrigo");
    cout<<p<<endl;
    Hijo h("Esteban");
    cout<<h<<endl;
    Hija ha("Miranda");
    cout<<ha<<endl;
    */
    Familia f;
    f.agregarMiembro();
    f.imprimir();
}