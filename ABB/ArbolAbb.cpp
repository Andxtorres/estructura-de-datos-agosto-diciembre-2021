#ifndef ARBOLABB_DEFINED
#define ARBOLABB_DEFINED
#include <iostream>
#include "Nodo.cpp"
#include "Cola.cpp"
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
            //Implementar qué pasa cuando el que quiero borrar no tiene dos hijos.
            
            //Si el que quiero eliminar es mi raiz
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
                Nodo<T> *anterior=raiz;
                while(temp!=NULL){
                    if(temp->getDato()==dato){
                        break;
                    }
                    anterior=temp;
                    if(dato<temp->getDato()){
                        temp=temp->getIzquierda();
                    }else{
                        temp=temp->getDerecha();
                    }
                }
                if(temp==NULL){
                    cout<<"No encontre el dato"<<endl;
                }else{
                    cout<<"Encontre el dato a eliminar "<< temp->getDato()<< " y anterior "<< anterior->getDato()<< endl;
                    if(anterior->getDato()>temp->getDato()){
                        if(temp->getIzquierda()!=NULL && temp->getDerecha()!=NULL){
                            // Quiere decir que tiene dos hijos
                            Nodo<T> *hojaMasPequenia=temp->getDerecha();
                            Nodo<T> *padreHojaMasPequenia=temp->getDerecha();
                            while(hojaMasPequenia->getIzquierda()!=NULL){
                                hojaMasPequenia=hojaMasPequenia->getIzquierda();
                            }      
                            cout<<"La hoja mas pequeño de tus grandes es: "<<hojaMasPequenia->getDato()<<endl;
                            hojaMasPequenia->setIzquierda(temp->getIzquierda()->getDerecha());
                            anterior->setIzquierda(temp->getIzquierda());
                            Nodo<T> *derechoDeTemp=temp->getDerecha();
                            Nodo<T> *izquierdoDeTemp=temp->getIzquierda();
                            cout<<"Tu temporal izquierda es "<<izquierdoDeTemp->getDato()<<endl;
                            cout<<"Tu temporal derecha es "<<derechoDeTemp->getDato()<<endl;
                            izquierdoDeTemp->setDerecha(derechoDeTemp);
                        }else{
                            if(temp->getIzquierda()!=NULL){
                                anterior->setIzquierda(temp->getIzquierda());
                            }else{
                                anterior->setIzquierda(temp->getDerecha());
                            }
                        }

                        
                    }
                    if(anterior->getDato()<temp->getDato()){
                        if(temp->getIzquierda()!=NULL && temp->getDerecha()!=NULL){
                            // Quiere decir que tiene dos hijos
                            Nodo<T> *hojaMasGrande=temp->getIzquierda();
                            Nodo<T> *padreHojaMasPequenia=temp->getDerecha();
                            while(hojaMasGrande->getDerecha()!=NULL){
                                hojaMasGrande=hojaMasGrande->getDerecha();
                            }      
                            cout<<"La hoja mas grande de tus pequeñas es: "<<hojaMasGrande->getDato()<<endl;
                            hojaMasGrande->setDerecha(temp->getDerecha()->getIzquierda());
                            anterior->setDerecha(temp->getDerecha());
                            Nodo<T> *derechoDeTemp=temp->getDerecha();
                            Nodo<T> *izquierdoDeTemp=temp->getIzquierda();
                            cout<<"Tu temporal izquierda es "<<izquierdoDeTemp->getDato()<<endl;
                            cout<<"Tu temporal derecha es "<<derechoDeTemp->getDato()<<endl;
                            derechoDeTemp->setDerecha(izquierdoDeTemp);

                        }else{
                            if(temp->getIzquierda()!=NULL){
                                anterior->setDerecha(temp->getIzquierda());
                            }else{
                                anterior->setDerecha(temp->getDerecha());
                            }
                        }

                        
                    }                    
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

        void recorreEnPreOrdenRec(Nodo<T> *raiz){
            if(raiz==NULL){
            }else{
                cout<<raiz->getDato()<<",";
                recorreEnPreOrdenRec(raiz->getIzquierda());
                recorreEnPreOrdenRec(raiz->getDerecha());
            }
        }
        void recorreEnPreOrden(){
            recorreEnPreOrdenRec(raiz);
            cout<<endl;
        }

        void recorreEnOrdenRec(Nodo<T> *raiz){
            if(raiz==NULL){

            }else{
                recorreEnOrdenRec(raiz->getIzquierda());
                cout<<raiz->getDato()<<",";
                recorreEnOrdenRec(raiz->getDerecha());
            }
        }
        void recorreEnOrden(){
            recorreEnOrdenRec(raiz);
            cout<<endl;
        }

        void recorreEnPostOrdenRec(Nodo<T> *raiz){
            if(raiz==NULL){

            }else{
                recorreEnPostOrdenRec(raiz->getIzquierda());
                recorreEnPostOrdenRec(raiz->getDerecha());
                cout<<raiz->getDato()<<",";
            }
        }
        void recorreEnPostOrden(){
            recorreEnPostOrdenRec(raiz);
            cout<<endl;
        }

        void recorreEnPreOrdenConversoRec(Nodo<T> *raiz){
            if(raiz==NULL){
            }else{
                cout<<raiz->getDato()<<",";
                recorreEnPreOrdenRec(raiz->getDerecha());
                recorreEnPreOrdenRec(raiz->getIzquierda());
            }
        }
        void recorreEnPreOrdenConverso(){
            recorreEnPreOrdenConversoRec(raiz);
            cout<<endl;
        }
        void recorreEnPostOrdenConversoRec(Nodo<T> *raiz){
            if(raiz==NULL){

            }else{
                recorreEnPostOrdenConverso(raiz->getDerecha());
                recorreEnPostOrdenConverso(raiz->getIzquierda());
                cout<<raiz->getDato()<<",";
            }
        }
        void recorreEnPostOrdenConverso(){
            recorreEnPostOrdenConversoRec(raiz);
            cout<<endl;
        }
        void recorreEnOrdenConversoRec(Nodo<T> *raiz){
            if(raiz==NULL){

            }else{
                recorreEnOrdenConversoRec(raiz->getDerecha());
                cout<<raiz->getDato()<<",";
                recorreEnOrdenConversoRec(raiz->getIzquierda());
            }
        }
        void recorreEnOrdenConverso(){
            recorreEnOrdenConversoRec(raiz);
            cout<<endl;
        }  

        void recorridoNivelPorNivel(){
            Cola<Nodo<T>*> cola;
            cola.push(raiz);
            while(!cola.isEmpty()){

                Nodo<T>* temp= cola.pop();
                cout<<temp->getDato()<<",";
                if(temp->getIzquierda()!=NULL){
                    cola.push(temp->getIzquierda());
                }
                if(temp->getDerecha()!=NULL){
                    cola.push(temp->getDerecha());
                }

            }
        }      
};

#endif
