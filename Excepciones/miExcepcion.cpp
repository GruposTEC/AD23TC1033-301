#include "miExcepcion.h"
#include <iostream>
#include <string>
using std::string;
using std::ostream;
using std::endl;
using std::cout;

MiExcepcion::MiExcepcion(){

}
MiExcepcion::MiExcepcion(string s){
    txt=s;
}
void MiExcepcion::display(){
    cout<<"Desde el objeto MiExcepción el error es: "<<txt<<endl;
}