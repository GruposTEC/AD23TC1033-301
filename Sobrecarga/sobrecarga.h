#ifndef SOBRECARGA_H
#define SOBRECARGA_H
#include <iostream>
using std::ostream;

class Numero{
    private:
        int x;
        int x2;
    public:
        Numero(int x1);
        Numero operator-(Numero n);
        void imprimir();
        void operator++();
        friend ostream & operator<<(ostream &COUT,Numero n);

};



#endif