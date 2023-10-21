#ifndef HIJO_H
#define HIJO_H
#include <iostream>
#include <string>
#include "padre.h"
using std::string;
using std::endl;
using std::cout;
using std::ostream;

class Hijo:public Padre{
    public:
        Hijo(string nom);
        ~Hijo();
        friend ostream & operator<<(ostream &COUT,Hijo &h);
        virtual void imprimir();

        

};



#endif