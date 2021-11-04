#ifndef LISTA_DEFINED
#define LISTA_DEFINED
#include <list>
#include <iostream>

using namespace std;

class ListaDeAdyacencias{
    private: 
        int numeroVertices;
        list<int> *adyacencias;

    public: 
        ListaDeAdyacencias(int numeroVertices){
            this->numeroVertices=numeroVertices;
            adyacencias= new list<int>[numeroVertices];
        } 

        void agregarAdyacencia(int inicio, int fin){
            adyacencias[inicio].push_back(fin);
            adyacencias[fin].push_back(inicio);
        }

        void imprimeGrafo(){
            for(int i=0;i<numeroVertices;i++){
                cout<<"Vertice "<<i<<" Adyacencias: ";
                //imprimir adyacencias
                for(auto adyacencia:adyacencias[i]){
                    cout<<"->"<<adyacencia;
                }
                cout<<endl;


            }
        }


};


#endif
