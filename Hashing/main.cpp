#include <iostream>
#include "Hashing.h"
using namespace std;

int main(){
    //7, 17, 6, 33, 28, 52

    Hashing h;
    h.agregarElemento(7);
    h.imprimirTabla();
    cout<<"---------------------"<<endl;
    h.agregarElemento(17);
    h.imprimirTabla();
    cout<<"---------------------"<<endl;
    h.agregarElemento(6);
    h.imprimirTabla();
    cout<<"---------------------"<<endl;
    h.agregarElemento(33);
    h.imprimirTabla();
    cout<<"---------------------"<<endl;
    h.agregarElemento(28);
    h.imprimirTabla();
    cout<<"---------------------"<<endl;
    h.agregarElemento(52);
    h.imprimirTabla();
    cout<<"---------------------"<<endl;
    h.borrar(52);
    h.imprimirTabla();
    cout<<"---------------------"<<endl;
    return 0;
}
