#ifndef MIEXCEPCION_H
#define MIEXCEPCION_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;
using std::endl;
using std::cout;


class MiExcepcion:public std::exception{
    private:
        string txt;
    public:
        MiExcepcion();
        MiExcepcion(string s);
        void display();
};

#endif