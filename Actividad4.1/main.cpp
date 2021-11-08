#include <iostream>
#include "Grafo.cpp"
#include <list>

using namespace std;
int main(){

    bool matriz[5][5]={
        {true,false,true,false,true},
        {true,false,false,false,false},
        {false,false,false,false,false},
        {false,false,false,false,false},
        {false,false,false,false,false}
    };
    bool * matrizRef[5];
    for (int i=0;i<5;i++){
        matrizRef[i]=matriz[i];
    }

    list<int> adyacencias0;
    adyacencias0.push_back(1);
    list<int> adyacencias1;
    adyacencias1.push_back(0);
    list<int> adyacencias2;
    adyacencias2.push_back(3);
    list<int> adyacencias3;
    adyacencias3.push_back(1);
    list<int> adyacencias4;
    adyacencias4.push_back(2);               
    list<int> listaAdyacencias[5]={adyacencias0,adyacencias1,adyacencias2,adyacencias3,adyacencias4}; 
    Grafo grafo2(5,5,listaAdyacencias,matrizRef);
    grafo2.imprimeGrafo();
    grafo2.imprimeMatriz();
    return 0;
}
