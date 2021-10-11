#ifndef NODO_COLA_DEFINED
#define NODO_COLA_DEFINED

#include <iostream>
template <class T>
class NodoCola{
    private:
        T dato;
        NodoCola<T> *siguiente;
    
    public:
        NodoCola(T dato){
            this->dato=dato;
            this->siguiente=NULL;
        }
        NodoCola(T dato,NodoCola<T> *siguiente){
            this->dato=dato;
            this->siguiente=siguiente;
        }
        NodoCola<T>* getSiguiente(){
            return siguiente;
        }
        void setSiguiente(NodoCola<T> *siguiente){
            this->siguiente=siguiente;
        }
        T getDato(){
            return dato;
        }
        void setDato(T dato){
            this->dato=dato;
        }
};

#endif
