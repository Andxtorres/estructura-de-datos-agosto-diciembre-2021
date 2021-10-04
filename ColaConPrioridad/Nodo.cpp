#ifndef NODO_DEFINED
#define NODO_DEFINED

#include <iostream>
template <class T>
class Nodo{
    private:
        T dato;
        int prioridad;
        Nodo<T> *siguiente;
    
    public:
        Nodo(T dato,int prioridad){
            this->dato=dato;
            this->siguiente=NULL;
            this->prioridad=prioridad;
        }
        Nodo(T dato,Nodo<T> *siguiente,int prioridad){
            this->dato=dato;
            this->siguiente=siguiente;
            this->prioridad=prioridad;
        }
        Nodo<T>* getSiguiente(){
            return siguiente;
        }
        void setSiguiente(Nodo<T> *siguiente){
            this->siguiente=siguiente;
        }
        T getDato(){
            return dato;
        }
        void setDato(T dato){
            this->dato=dato;
        }
        int getPrioridad(){
            return prioridad;
        }
        void setPrioridad(int prioridad){
            this->prioridad=prioridad;
        }

};

#endif
