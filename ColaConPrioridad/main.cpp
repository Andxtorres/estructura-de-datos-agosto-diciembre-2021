#include <iostream>
#include "Cola.cpp"
using namespace std;

int main(){

    Cola<int> c1;
    c1.push(2,10);
    c1.push(4,10);
    c1.push(6,10);
    c1.push(8,10);
    c1.push(10,10);
    c1.push(9,10);

    c1.imprimir();
    cout<<"El elemento en front es: "<<c1.front()<<endl;

    c1.pop();
    c1.imprimir();

    c1.pop();
    c1.imprimir();

    c1.pop();
    c1.imprimir();
    try{ 
        c1.pop();
        c1.imprimir();
    }catch(const char* msg){
        cout<<msg<<endl;
    }
    try{ 
        c1.pop();
        c1.imprimir();
    }catch(const char* msg){
        cout<<msg<<endl;
    }
    try{ 
        c1.pop();
        c1.imprimir();
    }catch(const char* msg){
        cout<<msg<<endl;
    }
    cout<<"Mi programa no ha muerto"<<endl;
    return -1;
}
