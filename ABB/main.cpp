#include <iostream>
#include "ArbolAbb.cpp"
using namespace std;

int main(){
    ArbolAbb<string> arbol;
    arbol.agregar("#");
    arbol.agregar("@");
    arbol.agregar("2");
    arbol.agregar("$");
    arbol.agregar("8");
    arbol.agregar("A");
    arbol.agregar("5");
    arbol.agregar("%");
    arbol.recorreEnPreOrden();
    arbol.recorreEnOrden();
    arbol.recorreEnPostOrden();
    arbol.recorridoNivelPorNivel();
    return -1;
}
