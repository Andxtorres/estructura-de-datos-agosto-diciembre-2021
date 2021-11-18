#include<iostream>
#include "HashingElemento.h"
using namespace std;

class Hashing{
    private: 
        HashingElemento tabla[11];
        int calcularHash(int elemento);
    
    public:
        Hashing();
        void agregarElemento(int elemento);
        void borrar(int elemento);
        void imprimirTabla();
};

Hashing::Hashing(){
    for(int i=0;i<11;i++){
        tabla[i]=HashingElemento(0);
    }
}

void Hashing::agregarElemento(int elemento){
    HashingElemento aInsertar(elemento);
    int pos=calcularHash(elemento);//Calcular la pos en la que debería entrar el elemento a la tabla 
    if(tabla[pos].getElemento()!=0){ //Si la pos esta no vacía quiere decir que hay colisión
        int inicial=pos; //igualo inicial a la pos que en teoría le toca pero colisionó 
        while(tabla[inicial].getElemento()!=0){//Recorro mientras no encuentre una pos vacía para insertar el elemento
            inicial++;//incremento el índice del recorrido
            if(inicial==11){//Si llegue a la ultima pos de la tabla -> debo regresar al inicio
                inicial=0;//regreso al inicio (Solo si llegue a la última pos y no encontré ninguno vacío)
            }
            if(inicial==pos){//Si mi recorrido llega la donde empecé quiere decir que NO hay pos vacías.
                cout<<"Tabla llena"<<endl;//Paro el método imprimiendo que la tabla está llena
                return;
            }
        }
        aInsertar.marcarOcupado();
        tabla[inicial]=aInsertar; //Inserto el elemento en la primera pos vacía solo sí encontre una pos vacía 
    }else{
        aInsertar.marcarOcupado();
        tabla[pos]=aInsertar;//Si la pos está vacia inserto en esa pos
    }
}

void Hashing::imprimirTabla(){
    for(int i=0;i<11;i++){
        cout<<i<<".- "<<tabla[i].getElemento()<<" "<<tabla[i].getBandera()<<endl;
    }
}
int Hashing::calcularHash(int elemento){
    return elemento%11;
}

void Hashing::borrar(int elemento){
    int inicial=calcularHash(elemento);
    bool encontrado=false;
    
    while(tabla[inicial].getElemento()!=elemento&&inicial<11){
        inicial++;  
        if(tabla[inicial].getElemento()==elemento){
            encontrado=true;
            break;
        }
        if(inicial==calcularHash(elemento)){
            break;
        }
        if(inicial==10){
            inicial=0;
        }
    }
    if(encontrado){
        HashingElemento aBorrar(0);
        aBorrar.marcarBorrado();
        tabla[inicial]=aBorrar;
    }else{
        cout<<"No encontré el elemento"<<endl;
    }
}
