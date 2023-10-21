#include <iostream>
using std::endl;
using std::cout;
void metodo(int &ref){
    ref=100;
}
void metodo2(int *p){
    *p=1000;
}
int main(){
    int x=5;
    int &ref=x;
    ref=10;
    cout<<x<<endl;
    int y=10;
    metodo(x);
    cout<<x<<endl;
    int *ap;
    ap=&x;
    ap=&y;
    *ap=5;
    cout<<y<<endl;
    cout<<ap<<endl;
}