

#include "Nodo.h"

template<class tipo>
Nodo<tipo>::Nodo(){}

template<class tipo>
Nodo<tipo>::~Nodo() {}

template<class tipo>
tipo *Nodo<tipo>::getDato() const {
    return dato;
}

template<class tipo>
void Nodo<tipo>::setDato(tipo *dato) {
    Nodo::dato = dato;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getSiguiente() const {
    return siguiente;
}

template<class tipo>
void Nodo<tipo>::setSiguiente(Nodo *siguiente) {
    Nodo::siguiente = siguiente;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getAnterior() const {
    return anterior;
}

template<class tipo>
void Nodo<tipo>::setAnterior(Nodo *anterior) {
    Nodo::anterior = anterior;
}
