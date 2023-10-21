#include "impresora.h"
#include "miExcepcion.h"
Impresora::Impresora(){

}
Impresora::Impresora(string n, int nh){
    nombre=n;
    numHojas=nh;
}
void Impresora::imprimir(string txt){
    if (txt.size()>numHojas)
    {
        //throw(911);
        //string s="No alcanzan las hojas";
        //throw(s);
        //throw("No van a alcanzar las hojas");
        MiExcepcion m("Desde mi propio objeto no hay hojas");
        throw(m);
    }
    cout<<"printing"<<endl;
    cout<<txt<<endl;
    numHojas-=txt.size();
    
    
}
ostream &operator<<(ostream &COUT, Impresora &i){
    COUT<<"Soy la impresora: "<<i.nombre<<" y quedan "<<i.numHojas<<" hojas"<<endl;
    return COUT;
}

void Impresora::agregarhojas(int h){
    numHojas+=h;
}