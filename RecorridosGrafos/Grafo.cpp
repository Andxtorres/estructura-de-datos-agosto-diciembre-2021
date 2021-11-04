#ifndef GRAFO_DEFINED
#define GRAFO_DEFINED
#include <list>
#include <iostream>

using namespace std;

class Grafo{
    private: 
        int numeroVertices;
        list<int> *adyacencias;

    public: 
        Grafo(int numeroVertices){
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

        void bfs(int inicio){
            bool *visitados=new bool[numeroVertices];
            for(int i=0;i<numeroVertices;i++){
                visitados[i]=false;
            }
            list<int> fila;
            visitados[inicio]=true;
            fila.push_back(inicio);

            while(!fila.empty()){
                int aVisitar=fila.front();
                cout<<aVisitar<<"";
                fila.pop_front();
                for(auto vecino:adyacencias[aVisitar]){
                    if(!visitados[vecino]){
                        visitados[vecino]=true;
                        fila.push_back(vecino);
                    }
                }
            }

            cout<<endl;

        }


};


#endif
