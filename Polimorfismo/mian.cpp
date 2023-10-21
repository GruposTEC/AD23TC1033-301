#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

class Ave {
    public:
    
    virtual void volar() = 0;
    virtual void nadar() = 0;

};

class Aguila:public Ave{
    public:

        void volar(){
        cout<<"soy un aguila, soy la que mejor vuela "<<endl;
        } 
        void nadar(){
            cout<<"Soy un aguila, y yo no nado"<<endl;
        }

};

class Pinguino:public Ave{
    public:
    void volar(){
        cout<<"yo soy un pinguino, no puedo volar"<<endl;
    }
    void nadar(){
        cout<<"Soy un pinguino, puedo nadar"<<endl;
    }
};

int main(){
    /*Ave v;
    v.volar();
    v.nadar();*/
    Aguila a;

    a.volar();
    a.nadar();

    Pinguino p;

    p.volar();
    p.nadar();
    Ave *apave;

    apave=&a;
    apave-> volar();
    apave-> nadar(); 

    Aguila * ap = dynamic_cast < Aguila *> (apave);
    cout << ap << endl;

    apave=&p;
    apave-> volar();
    apave-> nadar(); 

    ap = dynamic_cast < Aguila *> (apave);
    cout << ap << endl;


    vector <Ave*> parvada; 
    parvada.push_back(apave);
    cout<<"usando vectores"<<endl;
    Ave *apeave2;
    apeave2 = &a;
    parvada.push_back(apeave2);
    for(int i=0; i < parvada.size(); i++){
        Pinguino *ap2 = dynamic_cast <Pinguino *> (parvada[i]);
        if (ap2!=0)
        {
            ap2 -> volar();
            ap2 -> nadar();
        }
    }
}
