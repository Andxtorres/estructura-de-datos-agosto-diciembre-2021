#include <iostream>
#include "ArbolAVL.cpp"


int main(){

    ArbolAVL<int> arbol;
    arbol.insertar(4);
    arbol.insertar(2);
    arbol.insertar(1);
    arbol.imprimir();

    return -1;
}
