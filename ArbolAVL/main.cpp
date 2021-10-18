#include <iostream>
#include "ArbolAVL.cpp"


int main(){

    ArbolAVL<int> arbol;
    arbol.insertar(6);
    arbol.imprimir();
    arbol.insertar(5);
    arbol.imprimir();
    arbol.insertar(4);
    arbol.imprimir();
    arbol.insertar(3);
    arbol.imprimir();
    arbol.insertar(2);
    arbol.imprimir();
    arbol.insertar(1);
    arbol.imprimir();

    return -1;
}
