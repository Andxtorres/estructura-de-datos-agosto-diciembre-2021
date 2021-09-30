#include <iostream>
#include "Nodo.cpp"
using namespace std;
template <class T>

class Cola{
    private:
        Nodo<T> *primero;
        int size;
    public:
        Cola(){
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
            cout << isEmpty() << endl;
            if(!isEmpty()){
                Nodo<T> *temp=primero;
                T dato=primero->getDato();
                //cout << primero->getSiguiente();
                primero = temp->getSiguiente();
                return dato;
            }else{
                throw "No hay elementos en la pila";
            }
        }

        T front(){
            if(primero==NULL){
                throw "Exception en metodo front no puede estar vacio";
            }
            return primero->getDato();
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
