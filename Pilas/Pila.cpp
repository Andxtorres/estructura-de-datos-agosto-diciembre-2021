#include <iostream>
#include "Nodo.cpp"
using namespace std;
template <class T>
class Pila{
    private:
        Nodo<T> *primero;
        int size;
    public:
        Pila(){
            primero=NULL;
            size=0;
        }
        int getSize(){
            return size;
        }
        void push(T dato){
            Nodo<T> *nodo=new Nodo<T>(dato);
            if(isEmpty()){
                cout<<"Entra insertar primer nodo"<<endl;
                primero=nodo;
            }else{
                Nodo<T> *temp=primero;
                for(int i=0;i<size-1;i++){
                    temp=temp->getSiguiente();
                }
                temp->setSiguiente(nodo);
            }
            size++;
        }
        T pop(){
            if(!isEmpty()){
                Nodo<T> *temp=primero;
                Nodo<T> *anterior=primero;
                /* Sin uso de size */
                while(temp->getSiguiente()!=NULL){
                    anterior=temp;
                    temp=temp->getSiguiente();                
                }
                if(temp==anterior){
                    primero=NULL;
                }
                /*
                for(int i=0;i<size-1;i++){
                    anterior=temp;
                    temp=temp->getSiguiente();
                }*/
                cout<<"Temp: "<<temp->getDato()<<endl;
                cout<<"Anterior: "<<anterior->getDato()<<endl;
                anterior->setSiguiente(NULL);
                T dato=temp->getDato();
                temp=NULL;
                return dato;
            }else{
                throw "No hay elementos en la pila";
            }
        }
        T top(){
            Nodo<T> *temp=primero;
            for(int i=0;i<size-1;i++){
                temp=temp->getSiguiente();
            }
            return temp->getDato();
        }
        bool isEmpty(){
            if(primero==NULL){
                return true;
            }else{
                return false;
            }
        }
        void imprimir(){
            string resultado="[";
            Nodo<T> *temp=primero;
            /* Imprimiendo sin for */
            while (temp!=NULL){
                resultado=resultado+" "+to_string(temp->getDato())+",";
                temp=temp->getSiguiente();                
            }
            /*
            for(int i=0;i<size;i++){
                resultado=resultado+" "+to_string(temp->getDato())+",";
                temp=temp->getSiguiente();
            }*/
            resultado=resultado+"]";
            cout<<resultado<<endl;
        }
};
