#include <iostream>
#include "Grafo.cpp"
#include "MatrizAdyacencias.cpp"
using namespace std;


int main(){

    MatrizAdyacencias<string> *matriz= new MatrizAdyacencias<string>();
    matriz->imprimeMatriz();
    matriz->agregarNodo("A",0);
    matriz->agregarNodo("B",1);
    matriz->agregarNodo("C",2);
    matriz->agregarNodo("D",3);
    matriz->agregarNodo("E",4);
    matriz->agregarAdyacencia(0,1);
    matriz->agregarAdyacencia(0,2);
    matriz->agregarAdyacencia(0,4);
    matriz->agregarAdyacencia(1,3);
    matriz->agregarAdyacencia(2,3);
    matriz->agregarAdyacencia(2,3);
    matriz->agregarAdyacencia(3,4);
    cout<<"-----------"<<endl;
    matriz->imprimeMatriz();
    return -1;
}

