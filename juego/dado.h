#ifndef _DADO_H_
#define _DADO_H_

class Dado
{
    private:
        int caras;
    public:
        int lanzar();
        void set_caras(int n);
        int get_caras();
        void imprimir();
};

#endif