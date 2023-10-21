#ifndef IMPRESORA_H
#define IMPRESORA_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;
using std::endl;
using std::cout;

class Impresora{
    private:
        int numHojas;
        string nombre;
        
    public:
        Impresora();
        Impresora(string n, int nh);
        void imprimir(string txt);
        friend ostream &operator<<(ostream &COUT, Impresora &i);
        void agregarhojas(int h);
};

#endif