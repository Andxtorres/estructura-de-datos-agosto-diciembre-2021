#ifndef ARBOLABB_DEFINED
#define ARBOLABB_DEFINED
#include <iostream>
#include "Nodo.cpp"
using namespace std;
template <class T>
class ArbolAbb{
    private: 
        Nodo<T> *raiz;

    public: 
        ArbolAbb(){
            raiz=NULL;
        }

        void agregar(T dato){
            Nodo<T> *aAgregar=new Nodo<T>(dato);
            if(raiz==NULL){
                raiz=aAgregar;
            }else{
                Nodo<T> *temp=raiz;
                Nodo<T> *anterior=raiz;
                while(temp!=NULL){
                    anterior=temp;
                    if(dato<temp->getDato()){
                        temp=temp->getIzquierda();
                    }else{
                        temp=temp->getDerecha();
                    }
                }
                if(dato>anterior->getDato()){
                    anterior->setDerecha(aAgregar);
                }
                if(dato<anterior->getDato()){
                    anterior->setIzquierda(aAgregar);
                }
                temp=aAgregar;
                cout<<"El temporal es "<<temp->getDato()<<endl;
                cout<<"El padre del temp es: "<<anterior->getDato()<<endl;
                cout<<"El derecho del padre:  "<<anterior->getDerecha()<<endl;
                cout<<"El izquierdo del padre:  "<<anterior->getIzquierda()<<endl;
            }

        }
        T buscar(T dato){
            Nodo<T> *temp=raiz;
            T datoABuscar;
            while(temp!=NULL){
                if(temp->getDato()==dato){
                    datoABuscar=temp->getDato();
                    break;
                }
                if(dato<temp->getDato()){
                    temp=temp->getIzquierda();
                }else{
                    temp=temp->getDerecha();
                }
            }
            return datoABuscar;
        }
        void borrar(T dato){
            //Si el que quiero eliminar es mi raiz
            //Implementar qué pasa cuando el que quiero borrar no tiene dos hijos.
            
            Nodo<T> *temp=raiz;
            Nodo<T> *aMover;
            if(dato==raiz->getDato()){
                aMover=raiz->getIzquierda()->getDerecha();
                raiz=raiz->getIzquierda();
                raiz->setDerecha(temp->getDerecha());
                Nodo<T> *hojaMasPequenia=raiz->getDerecha();
                Nodo<T> *padreHojaMasPequenia=raiz->getDerecha();
                while(hojaMasPequenia!=NULL){
                    padreHojaMasPequenia=hojaMasPequenia;
                    hojaMasPequenia=hojaMasPequenia->getIzquierda();
                }
                padreHojaMasPequenia->setIzquierda(aMover);
            }else{
                Nodo<T> *temp=raiz;
                while(temp!=NULL){
                    if(temp->getDato()==dato){
                        break;
                    }
                    if(dato<temp->getDato()){
                        temp=temp->getIzquierda();
                    }else{
                        temp=temp->getDerecha();
                    }
                }
                if(temp==NULL){
                    cout<<"No encontre el dato"<<endl;
                }else{
                    //Implementar cuando no es raíz qué debe pasar con el borrado.                     
                }
              
            }


        }


        void imprimirRec(Nodo<T> *nodo){
            if(nodo!=NULL){
                if(nodo->getDerecha()==NULL && nodo->getIzquierda()==NULL){
                    cout<<"HOJA: "<<nodo->getDato()<<" ";
                }else{
                    cout<<"DATO: "<<nodo->getDato()<<endl;
                    cout<<"SUBARBOL DERECHO DE " <<nodo->getDato()<<": ";
                    imprimirRec(nodo->getDerecha());
                    cout<<endl;
                    cout<<"SUBARBOL IZQUIERDO DE " <<nodo->getDato()<<": ";
                    imprimirRec(nodo->getIzquierda());
                    cout<<endl;
                }
            }else{
                cout<<"VACIO";
            }
        }
        void imprimir(){
            imprimirRec(raiz);
        }


};

#endif
