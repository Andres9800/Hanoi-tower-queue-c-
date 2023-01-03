

#ifndef COLA_LISTA_DOBLE_GENERICA_COLALISTA_H
#define COLA_LISTA_DOBLE_GENERICA_COLALISTA_H
#include "Lista.cpp"
#include "RuntimeException.h"
template <class E>
class ColaLista {
private:
    Lista<E> *l;
    int cantidad;
public:
    ColaLista();
    ~ColaLista();

    void enqueue(E *e ) throw(QueueFull); // encolar // agregar
    void dequeue() throw(QueueEmpty);     // desencolar

    E* front() const throw(QueueEmpty);

    string toString();
    int size() const;

    bool empty() const;
};




#endif //COLA_LISTA_DOBLE_GENERICA_COLALISTA_H
