#include <iostream>
#include <string>
#include "impresora.h"
#include "miExcepcion.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
    Impresora impresora("hp",10);
    try{
        impresora.imprimir("Hola");
        impresora.imprimir("Alberto");
    }
    catch(MiExcepcion &x){
        x.display();
        impresora.agregarhojas(10);
    }
    catch(string &x){
        cout<<"Atrapado como string: "<<x<<endl;
    }
    catch(char const *x){
        cout<<"atrapado como cadena de caracteres: "<<x<<endl;
    }
    catch(int &x){
        cout<<"excepción entera atrapada, el valor es: "<<x<<endl;
    }
    catch(...){
        cout<<"Atrapada en el atrapatodo"<<endl;
    }
    cout<<impresora<<endl;
    return 0;
}