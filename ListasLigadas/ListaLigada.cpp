#include <iostream>
#include "Nodo.cpp"
using namespace std;
template <class T>

class ListaLigada{
    private: 
        Nodo<T> *head;
        int size;
    
    public:
        ListaLigada(){
            head=NULL;
            size=0;
        }
        int getSize(){
            return size;
        }
        void agregarAlFinal(T dato){
            Nodo<T> *nodo= new Nodo<T>(dato);
            cout<<"Agregando nodo "<<nodo->getDato()<<endl;
            if(head==NULL){
                head=nodo;
            }else{
                Nodo<T> *temp=head;
                for(int i=0;i<size-1;i++){
                    temp=temp->getSiguiente();
                }
                temp->setSiguiente(nodo);
            }
            size++;
        }

        void agregaEnPos(T dato,int pos){
            Nodo<T> *nodo= new Nodo<T>(dato);
            cout<<"Agregando nodo "<<nodo->getDato()<<endl;
            if(head==NULL){
                head=nodo;
            }else{
                Nodo<T> *temp=head;
                for(int i=0;i<pos-1;i++){
                    temp=temp->getSiguiente();
                }
                Nodo<T> *sigPrev= temp->getSiguiente();
                temp->setSiguiente(nodo);
                nodo->setSiguiente(sigPrev);
            }
            size++;            
        }

        void agregarAlInicio(T dato){
            Nodo<T> *nodo= new Nodo<T>(dato);
            cout<<"Agregando nodo "<<nodo->getDato()<<endl;
            if(head==NULL){
                head=nodo;
            }else{
                Nodo<T> *temp=head;
                nodo->setSiguiente(temp);
                head=nodo;
            }
            size++;
        }

        void imprimir(){
            string resultado="[";
            cout<<"Antes de imprimir lista "<<head->getDato()<<endl;
            Nodo<T> *temp=head;
            for(int i=0;i<size;i++){
                resultado=resultado+" "+to_string(temp->getDato())+",";
                temp=temp->getSiguiente();
            }
            resultado=resultado+"]";
            cout<<resultado<<endl;
        }

        
};
