#include <iostream>
#include "ListaDeAdyacencias.cpp"
using namespace std;


int main(){

    ListaDeAdyacencias grafo(5);
    grafo.agregarAdyacencia(0,1);
    grafo.agregarAdyacencia(0,3);
    grafo.agregarAdyacencia(1,2);
    grafo.agregarAdyacencia(3,4);
    grafo.agregarAdyacencia(2,4);
    grafo.imprimeGrafo();

    return -1;

}
