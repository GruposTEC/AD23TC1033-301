#ifndef FAMILIA_H
#define FAMILIA_H
#include "padre.h"
#include "hijo.h"
#include "hija.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::endl;
using std::cout;
using std::ostream;
using std::vector;

class Familia{
    private:
        vector<Padre*>fam;
    public:
        ~Familia();
        void agregarMiembro();
        void imprimir();
        friend ostream & operator<<(ostream &COUT,Familia &f);

};



#endif
