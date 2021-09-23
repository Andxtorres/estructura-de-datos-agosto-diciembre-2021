#include <iostream>
#include "Nodo.cpp"
using namespace std;


int main(){

    Nodo<int> nodo(3);
    Nodo<string> nodo2("Hola mundo");
    Nodo<bool> nodo3(true);

    cout<<"El valor de tu nodo es "<<nodo.getDato()<<endl;
    cout<<"El valor de tu nodo es "<<nodo2.getDato()<<endl;
    cout<<"El valor de tu nodo es "<<nodo3.getDato()<<endl;
    return 0;
}
