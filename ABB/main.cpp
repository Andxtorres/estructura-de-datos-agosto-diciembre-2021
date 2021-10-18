#include <iostream>
#include "ArbolAbb.cpp"
using namespace std;

int main(){
    ArbolAbb<int> arbol;
    arbol.agregar(1);
    arbol.agregar(2);
    arbol.agregar(3);
    arbol.agregar(4);
    arbol.agregar(5);
    arbol.agregar(6);
    arbol.agregar(7);
    arbol.agregar(8);
    arbol.recorreEnPreOrden();
    arbol.recorreEnOrden();
    arbol.recorreEnPostOrden();
    arbol.recorridoNivelPorNivel();
    return -1;
}
