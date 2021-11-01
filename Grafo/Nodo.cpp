#ifndef NODO_DEFINED
#define NODO_DEFINED

#include <iostream>
template <class T>
class Nodo{
    private:
        T dato;

    public:
        Nodo(T dato){
            this->dato=dato;
        }
        T getDato(){
            return dato;
        }

        void setDato(T dato){
            this->dato=dato;
        }
};

#endif
