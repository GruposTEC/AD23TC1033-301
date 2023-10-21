#ifndef HIJA_H
#define HIJA_H
#include <iostream>
#include <string>
#include "padre.h"
using std::string;
using std::endl;
using std::cout;
using std::ostream;

class Hija:public Padre{
    public:
        Hija(string nom);
        ~Hija();
        friend ostream & operator<<(ostream &COUT,Hija &ha);
        virtual void imprimir();

        

};
#endif