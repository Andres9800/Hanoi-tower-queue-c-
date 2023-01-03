
#include "ColaLista.h"

template<class E>
ColaLista<E>::ColaLista(): l(new Lista<E>),cantidad(0){

}
template<class E>
ColaLista<E>::~ColaLista() {
    delete l;
}
template<class E>
int ColaLista<E>::size() const {
    return cantidad;
}
template<class E>
bool ColaLista<E>::empty() const {
    return cantidad == 0;
}

template<class E>
E *ColaLista<E>::front() const throw(QueueEmpty) {
    if (empty()){
        throw QueueEmpty("front sobre una cola Vacia!");
    }
    return l->valorInicio();
}

template<class E>
void ColaLista<E>::dequeue() throw(QueueEmpty) {
    if (empty()){
        throw QueueEmpty("dequeue sobre una cola Vacia!");
    }
    cantidad--;
    return l->borrarInicio();
}

template<class E>
void ColaLista<E>::enqueue(E *e) throw(QueueFull) {
    ++cantidad;
    l->agregarInicio(e);
}

template<class E>
string ColaLista<E>::toString() {
    stringstream ss;
    ss<<l->toString();
    return ss.str();
}




