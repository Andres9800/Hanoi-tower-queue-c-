#ifndef LISTA_SIMPLE_TEMPLATES_NODO_H
#define LISTA_SIMPLE_TEMPLATES_NODO_H

#include "Librerias.h"

template<class tipo>

class Nodo {
private:
    tipo *dato;
    Nodo *siguiente;
    Nodo *anterior;
public:
    Nodo();
    virtual ~Nodo();
    tipo *getDato() const;
    void setDato(tipo *dato);
    Nodo *getSiguiente() const;
    void setSiguiente(Nodo *siguiente);
    Nodo *getAnterior() const;
    void setAnterior(Nodo *anterior);
};



#endif //LISTA_SIMPLE_TEMPLATES_NODO_H
