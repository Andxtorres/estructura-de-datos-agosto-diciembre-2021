#include <iostream>
#include "ArbolAVL.cpp"


int main(){

    ArbolAVL<int> arbol;
    arbol.insertar(1);
    arbol.insertar(2);
    arbol.insertar(3);
    arbol.insertar(4);
    arbol.insertar(5);
    arbol.insertar(6);
    arbol.imprimir();

    return -1;
}
