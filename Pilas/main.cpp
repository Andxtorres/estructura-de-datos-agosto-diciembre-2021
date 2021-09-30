#include <iostream>
#include "Pila.cpp"
using namespace std;

int main(){

    Pila<int> p1;
    p1.push(2);
    p1.push(4);
    p1.push(6);
    p1.push(8);
    p1.imprimir();
    cout<<"El elemento en top es: "<<p1.top()<<endl;
    p1.imprimir();
    int datoPop=p1.pop();
    cout<<"El elemento que sacamos de la pila es: "<<datoPop<<endl;
    p1.imprimir();
    datoPop=p1.pop();
    cout<<"El elemento que sacamos de la pila es: "<<datoPop<<endl;
    p1.imprimir();
    datoPop=p1.pop();
    cout<<"El elemento que sacamos de la pila es: "<<datoPop<<endl;
    p1.imprimir();
    datoPop=p1.pop();
    cout<<"El elemento que sacamos de la pila es: "<<datoPop<<endl;
    p1.imprimir();  
    try{  
        datoPop=p1.pop();
        cout<<"El elemento que sacamos de la pila es: "<<datoPop<<endl;
        p1.imprimir();    
    }catch(const char* msg){
        cout<<msg<<endl;
    }
    try{  
        datoPop=p1.pop();
        cout<<"El elemento que sacamos de la pila es: "<<datoPop<<endl;
        p1.imprimir();    
    }catch(const char* msg){
        cout<<msg<<endl;
    }
    cout<<"Mi programa no ha muerto"<<endl;
    return -1;
}
