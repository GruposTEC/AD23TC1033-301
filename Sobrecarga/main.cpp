#include "sobrecarga.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
    Numero num1(5);
    Numero num2(10);
    Numero num3=num1-num2;
    num3.imprimir();
    ++num3;
    num3.imprimir();
    cout<<num3;
}