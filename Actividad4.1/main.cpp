#include <iostream>
#include "Grafo.cpp"
#include <list>

using namespace std;
void imprimeMatriz(bool matriz[5][5],int tamanio){
    for (int i=0;i<tamanio;i++){
        for (int j=0;j<tamanio;j++){
            cout<<matriz[i][j]<< " ";  
        }
        cout <<endl;
    }
}
int main(){

    bool matriz[5][5]={
        {true,false,true,false,true},
        {true,false,false,false,false},
        {false,false,false,false,false},
        {false,false,false,false,false},
        {false,false,false,false,false}
    };

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
    Grafo grafo(5,5,listaAdyacencias,&matriz);
    grafo.imprimeGrafo();
    imprimeMatriz(matriz,5);
    return 0;
}
