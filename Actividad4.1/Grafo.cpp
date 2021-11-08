#ifndef GRAFO_DEFINED
#define GRAFO_DEFINED
#include <iostream>
#include <list>
using namespace std;

class Grafo{
    public: 
        list<int> *listaAdyacencias;
        int tamanio;
        int vertices;
        bool ** matriz;
        Grafo(int tamanio, int vertices, list<int>*listaAdyacencias,bool ** matriz){
            this->tamanio=tamanio;
            this->vertices=vertices;
            this->listaAdyacencias=listaAdyacencias;
            this->matriz=matriz;
        }
        void imprimeGrafo(){
            for(int i=0;i<vertices;i++){
                cout<<"Vertice "<<i<<" Adyacencias: ";
                //imprimir adyacencias
                for(auto adyacencia:listaAdyacencias[i]){
                    cout<<"->"<<adyacencia;
                }
                cout<<endl;


            }
        }
        void imprimeMatriz(){
            for (int i=0;i<tamanio;i++){
                for (int j=0;j<tamanio;j++){
                    cout<<matriz[i][j]<< " ";  
                }
                cout <<endl;
            }
        }



};
#endif
