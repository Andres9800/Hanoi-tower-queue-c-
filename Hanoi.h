

#ifndef HANOISTACKWENDYLARGAESPADAEXAMEN_HANOI_H
#define HANOISTACKWENDYLARGAESPADAEXAMEN_HANOI_H

#include "ColaLista.cpp"
class Hanoi {
private:
    int discos;
    ColaLista<int> *A;
    ColaLista<int> *B;
    ColaLista<int> *C;
public:

    Hanoi();

    void start();

    void reinicio();

    int getDiscos() const;

    void setDiscos(int discos);

    ColaLista<int> *getA() const;

    void setA(ColaLista<int> *a);

    ColaLista<int> *getB() const;

    void setB(ColaLista<int> *b);

    ColaLista<int> *getC() const;

    void setC(ColaLista<int> *c);

    int valorInicio(int discos);

    virtual ~Hanoi();

    int canMoves(int discosT);

    string toString();

    string mostrarAlgoritmo(int dis,string A, string B, string C);

    void jugar();


};


#endif //HANOISTACKWENDYLARGAESPADAEXAMEN_HANOI_H
