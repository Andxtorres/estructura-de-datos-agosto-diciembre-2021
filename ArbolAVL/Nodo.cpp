#ifndef NODO_DEFINED
#define NODO_DEFINED

#include <iostream>
template <class T>
class Nodo{
    private:
        T dato;
        Nodo<T> *izquierda;
        Nodo<T> *derecha;
        int altura;
    
    public:
        Nodo(T dato){
            this->dato=dato;
            this->izquierda=NULL;
            this->derecha=NULL;
            this->altura=1;
        }
        Nodo<T>* getIzquierda(){
            return izquierda;
        }
        void setIzquierda(Nodo<T> *izquierda){
            this->izquierda=izquierda;
        }
        Nodo<T>* getDerecha(){
            return derecha;
        }
        void setDerecha(Nodo<T> *derecha){
            this->derecha=derecha;
        }
        T getDato(){
            return dato;
        }
        void setDato(T dato){
            this->dato=dato;
        }
        int getAltura(){
            return altura;
        }
        void setAltura(int altura){
            this->altura=altura;
        }
};

#endif
