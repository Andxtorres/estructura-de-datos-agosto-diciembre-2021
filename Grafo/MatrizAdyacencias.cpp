#ifndef MATRIZ_DEFINED
#define MATRIZ_DEFINED

#include <iostream>
#include <vector>
#include "Nodo.cpp"
using namespace std;
template <class T>
class MatrizAdyacencias{
    private:
        Nodo<T> *vertices[5];
        bool matriz[5][5] ;
    public:
        void agregarNodo(T dato, int pos){
            vertices[pos]= new Nodo<T>(dato);
        }

        void agregarAdyacencia(int x,int y){
            matriz[x][y]=true;
            matriz[y][x]=true;
        }

        void imprimeMatriz(){
            for (int i=0;i<5;i++){
                for (int j=0;j<5;j++){
                    cout<<matriz[i][j]<< " ";  
                }
                cout <<endl;
            }
        }
};

#endif
