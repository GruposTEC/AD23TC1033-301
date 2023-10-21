#include <iostream>
using std::cout;
using std::endl;
class Base{
    private:
        int x;
    public:
        int y;
        Base(int x1){
            cout<<"el constructor base"<<endl;
            y=x1;
        }
        ~Base(){
            cout<<"el destructor de base"<<endl;
        }
        void imprimir(){
            cout<<"Sin parametros en base"<<endl;
        }
        void imprimir(int k){
            cout<<"Con parametros en base"<<endl;
        }
    protected:
        int z;
};
class Derivada:public Base{
    public:
    Derivada(int x1, int y1):Base(x1){
        cout<<"el constructor derivada"<<endl;
        z=y1;

    }
    ~Derivada(){
        cout<<"el destructor de derivada"<<endl;
    }
    void imprimir(int z){
        Base::imprimir(z);
        cout<<"La variable pública es:"<<y<<endl;
        cout<<"La variable protegida que herede es:"<<z<<endl;
    }
};
int main(){
    Derivada obj(5,10);
    obj.imprimir(5);

}