
#ifndef COLA_LISTA_DOBLE_GENERICA_LISTA_H
#define COLA_LISTA_DOBLE_GENERICA_LISTA_H

#include "Nodo.cpp"

template<class E>
class Lista {
private:
    Nodo<E> *inicio;
    Nodo<E> *cola;
public:
    Lista();
    bool vacia();
    E* valorInicio();
    E* valorFinal();

    void agregar(Nodo<E> *referencia , E* valor);
    void agregarInicio(E* valor); // no se usa
    void agregarFinal(E* valor);

    void borrar(Nodo<E> *referencia);

    void borrarInicio();
    void borrarFinal(); // no se usa
    string toString(); // no se usa

};


#endif //COLA_LISTA_DOBLE_GENERICA_LISTA_H
