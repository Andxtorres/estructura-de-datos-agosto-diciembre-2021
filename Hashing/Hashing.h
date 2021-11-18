#include<iostream>
using namespace std;

class Hashing{
    private: 
        int tabla[11];
        int calcularHash(int elemento);
    
    public:
        Hashing();
        void agregarElemento(int elemento);
        void imprimirTabla();
};

Hashing::Hashing(){
    for(int i=0;i<11;i++){
        tabla[i]=0;
    }
}

void Hashing::agregarElemento(int elemento){
    int pos=calcularHash(elemento);
    if(tabla[pos]!=0){
        int inicial=pos;
        while(tabla[inicial]!=0){
            inicial++;
            if(inicial==11){
                inicial=0;
            }
            if(inicial==pos){
                cout<<"Tabla llena"<<endl;
                return;
            }
        }
        tabla[inicial]=elemento;
    }else{
        tabla[pos]=elemento;
    }
    
}

void Hashing::imprimirTabla(){
    for(int i=0;i<11;i++){
        cout<<i<<".- "<<tabla[i]<<endl;
    }
}
int Hashing::calcularHash(int elemento){
    return elemento%11;
}
