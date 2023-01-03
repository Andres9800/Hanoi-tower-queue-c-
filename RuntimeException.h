
#ifndef COLA_LISTA_DOBLE_GENERICA_RUNTIMEEXCEPTION_H
#define COLA_LISTA_DOBLE_GENERICA_RUNTIMEEXCEPTION_H

#include <iostream>

using namespace std;
class RuntimeException : public exception{
private:
    string errorMsg;
public:
    RuntimeException(const string& err){errorMsg = err;}
    string getMessage() const{return errorMsg;}
};
class QueueEmpty : public RuntimeException{
public: QueueEmpty(const string& err): RuntimeException(err){}
};

class QueueFull : public RuntimeException{
public: QueueFull(const string& err): RuntimeException(err){}
};

#endif //COLA_LISTA_DOBLE_GENERICA_RUNTIMEEXCEPTION_H
