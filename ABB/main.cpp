#include <iostream>
#include "ArbolAbb.cpp"
using namespace std;

int main(){
    ArbolAbb<int> arbol;
    arbol.agregar(4);
    arbol.agregar(3);
    arbol.agregar(0); 
    arbol.agregar(2);
    arbol.agregar(1);
    arbol.agregar(-3);
    arbol.agregar(-2);
    arbol.agregar(-1);  
    arbol.imprimir();
    arbol.borrar(0);
    arbol.imprimir();
    return -1;
}
