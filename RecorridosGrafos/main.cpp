#include <iostream>
#include "Grafo.cpp"
using namespace std;


int main(){

    Grafo grafo(10);
    grafo.agregarAdyacencia(0,1);
    grafo.agregarAdyacencia(0,4);
    grafo.agregarAdyacencia(0,7);
    grafo.agregarAdyacencia(1,2);
    grafo.agregarAdyacencia(1,4);
    grafo.agregarAdyacencia(2,3);
    grafo.agregarAdyacencia(2,4);
    grafo.agregarAdyacencia(2,5);
    grafo.agregarAdyacencia(4,6);
    grafo.agregarAdyacencia(4,7);
    grafo.agregarAdyacencia(5,9);
    grafo.agregarAdyacencia(6,9);
    grafo.agregarAdyacencia(7,8);
    grafo.agregarAdyacencia(7,9);
    

    grafo.bfs(0);
    grafo.dfs(0);
    grafo.bfs(0);
    grafo.dfs(0);
    return -1;

}
