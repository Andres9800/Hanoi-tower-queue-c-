#include "Hanoi.h"
Hanoi::~Hanoi() {

}

string Hanoi::toString() {
    stringstream ss;
    ss<<"Cola A:\n"<<A->toString();
    ss<<"Cola B:\n"<<B->toString();
    ss<<"Cola C:\n"<<C->toString();
    return ss.str();
}

Hanoi::Hanoi() : discos(0) , A(new ColaLista<int>),B(new ColaLista<int>),C(new ColaLista<int>) {

}

int Hanoi::valorInicio(int discos) {
    return (discos+5)*pow(discos+10,discos+1);
}

int Hanoi::canMoves(int discosT) {
    if(discosT == 1)
        return 1;
    else
        return 2 * canMoves(discosT-1) + 1;
}

int Hanoi::getDiscos() const {
    return discos;
}

void Hanoi::setDiscos(int discos) {
    Hanoi::discos = discos;
}

ColaLista<int> *Hanoi::getA() const {
    return A;
}

void Hanoi::setA(ColaLista<int> *a) {
    A = a;
}

ColaLista<int> *Hanoi::getB() const {
    return B;
}

void Hanoi::setB(ColaLista<int> *b) {
    B = b;
}

ColaLista<int> *Hanoi::getC() const {
    return C;
}

void Hanoi::setC(ColaLista<int> *c) {
    C = c;
}

string Hanoi::mostrarAlgoritmo(int disc,string A, string B, string C) {
    stringstream ss;
    if (disc==1){
        cout<<"Mover disco de la torre "<<A<<" hacia la torre "<<C<<endl;
    }else{
        mostrarAlgoritmo( disc-1,  A,  C,  B);
        cout<<"Mover disco de la torre "<<A<<" hacia la torre "<<C<<endl;
        mostrarAlgoritmo( disc-1,  B,  A,  C);
    }
    return ss.str();
}

void Hanoi::jugar() {
    int movimientos = 0;

    cout<<"Inicio del juego: "<<endl;
    cout<<toString();
    int pila=0;
    int opcion=0;

    do {
    cout<<"Que Cola desea escoger (1 ) para A : (2) para B : (3) para C "<<endl;
    cin>>pila;
if (pila==1){
    if (A->empty()){
        cout<<"Cola Vacia, no se puede usar"<<endl;
    } else{
        cout<<"A donde quiere mover el disco ? : (2) para B : (3) para C "<<endl;
        cin>>opcion;
        if (opcion==2){
            if (B->empty()){
                B->enqueue(A->front());
                A->dequeue();
                movimientos++;
            } else{
                if (*B->front()>*A->front()){
                    B->enqueue(A->front());
                    A->dequeue();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
        if (opcion==3){
            if (C->empty()){
                C->enqueue(A->front());
                A->dequeue();
                movimientos++;
            } else{
                if (*C->front()>*A->front()){
                    C->enqueue(A->front());
                    A->dequeue();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
    }
}
if (pila==2){
    if (B->empty()){
        cout<<"Cola Vacia, no se puede usar"<<endl;
    }else{
        cout<<"A donde quiere mover el disco ? : (1) para A : (3) para C "<<endl;
        cin>>opcion;
        if (opcion==1){
            if (A->empty()){
                A->enqueue(B->front());
                B->dequeue();
                movimientos++;
            } else{
                if (*A->front()>*B->front()){
                    A->enqueue(B->front());
                    B->dequeue();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
        if (opcion==3){
            if (C->empty()){
                C->enqueue(B->front());
                B->dequeue();
                movimientos++;
            } else{
                if (*C->front()>*B->front()){
                    C->enqueue(B->front());
                    B->dequeue();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
    }
}if (pila==3){
    if (C->empty()){
        cout<<"Cola Vacia, no se puede usar"<<endl;
    }else{
        cout<<"A donde quiere mover el disco ? : (1) para A : (2) para B "<<endl;
        cin>>opcion;
        if (opcion==1){
            if (A->empty()){
                A->enqueue(C->front());
                C->dequeue();
                movimientos++;
            } else{
                if (*A->front()>*C->front()){
                    A->enqueue(C->front());
                    C->dequeue();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
        if (opcion==2){
            if (B->empty()){
                B->enqueue(C->front());
                C->dequeue();
                movimientos++;
            } else{
                if (*B->front()>*C->front()){
                    B->enqueue(C->front());
                    C->dequeue();
                    movimientos++;
                } else{
                    cout<<"No se puede hacer este movimiento"<<endl;
                }
            }
        }
    }
}else{
    //cout<<"Escoga una pila correcta"<<endl;
}
    cout<<"Cantidad de Movimientos actuales: "<<movimientos<<endl;
    cout<<toString();

    } while (C->size()!=discos);

    cout<<"JUEGO TERMINADO GRACIAS POR JUGAR "<<endl;
    movimientos = 0 ;
    int numeroT = 0;
    cout<<"Desea Reiniciar el juego? Digite (1) para SI (2) para NO "<<endl;
    cin>>numeroT;
    if (numeroT==1){
        reinicio();
        jugar();
    } else{
        cout<<"GAME OVER"<<endl;
    }
}

void Hanoi::start() {
    int i = discos-1;
    do{
        A->enqueue(new int(valorInicio(i)));
        i--;
    } while (i>=0);
}

void Hanoi::reinicio() {
    while(!A->empty()){
        A->dequeue();
    }
    while(!B->empty()){
        B->dequeue();
    }
    while(!C->empty()){
        C->dequeue();
    }
    start();
}








