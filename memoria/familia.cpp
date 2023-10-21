#include "familia.h"
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::ostream;
Familia::~Familia()
{
 for (int i = 0; i < fam.size(); i++){
    delete fam[i];
 }
}

void Familia::agregarMiembro(){
    Hijo *h=new Hijo("Mario");
    Hija *ha=new Hija("Elda");
    fam.push_back(h);
    fam.push_back(ha);
}
void Familia::imprimir(){
    for (int i = 0; i < fam.size(); i++){
        fam[i]->imprimir();
    }
}
ostream & operator<<(ostream &COUT,Familia &f){
    
    return COUT;
}

