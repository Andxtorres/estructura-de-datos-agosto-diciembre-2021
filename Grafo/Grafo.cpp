#ifndef GRAFO_DEFINED
#define GRAFO_DEFINED

#include <iostream>
#include <vector>
#include "Nodo.cpp"
using namespace std;
template <class T>
class Grafo{
    private:
        vector<Nodo<T>* > vertices;
    public:
        void agergarVertice(T dato){
            Nodo<T> *nodo=new Nodo<T>(dato);
            vertices.push_back(nodo);
        }

        void imprimeVertices(){
            for (int i=0;i<vertices.size();i++){
                cout<<vertices[i]->getDato()<<endl;
            }
        }
};

#endif
