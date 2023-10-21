#ifndef PADRE_H
#define PADRE_H
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;
using std::ostream;

class Padre{
    protected:
        string nombre;
    public:
        Padre(string nom);
        Padre();
        virtual ~Padre();
        virtual void imprimir();
        friend ostream & operator<<(ostream &COUT,Padre &p);

        

};



#endif