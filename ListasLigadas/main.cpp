#include <iostream>
#include "Nodo.cpp"
#include "ListaLigada.cpp"
using namespace std;


int main(){
    ListaLigada<int> lista;
    lista.agregarAlFinal(3);
    lista.agregarAlFinal(4);
    lista.agregarAlFinal(5);
    lista.agregarAlFinal(6);
    lista.agregarAlFinal(7);
    lista.agregarAlFinal(8);
    lista.agregarAlInicio(0);
    lista.agregaEnPos(10,2);

    /*
    cout<<"El valor de tu nodo es "<<nodo1.getDato()<<" con referencia "<<endl;
    Nodo<int> *aptNodo2=nodo2.getSiguiente();
    cout<<"El valor de tu nodo es "<<nodo2.getDato()<<" con referencia "<<(*aptNodo2).getDato()<<endl;
    cout<<"El valor de tu nodo es "<<nodo3.getDato()<<" con referencia "<<nodo3.getSiguiente()->getDato()<<endl;
    */
    lista.imprimir();

    return 0;
}
