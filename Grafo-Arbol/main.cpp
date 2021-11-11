#include <iostream>
using namespace std;


bool esCiclico(int aAnalizar,bool visitados[],int padre,int grafo[][5]){
    visitados[aAnalizar]=true;
    for(int i=0;i<5;i++){
       if((grafo[aAnalizar][i]==1||grafo[i][aAnalizar]==1)&&visitados[i]==false){
           if(esCiclico(i,visitados,aAnalizar,grafo)==true){
               return true;
           }
       }else if(grafo[aAnalizar][i]==1 && i!= padre){
           return true;
       }

    }
    return false;
}

bool esArbol(int grafo[][5]){
    bool *visitados=new bool[5];
    for(int i=0;i<5;i++){
        visitados[i]=false;
    }
    if(esCiclico(0,visitados,-1,grafo)){
        return false;
    }

    for(int i=0;i<5;i++){
        if(visitados[i]==false){
            return false;
        }
    }
    return true;    
}

int main(){
    int grafo[][5]={
        {0,0,1,1,0},
        {1,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,1},
        {0,0,0,0,0}
    };

    /*
        esArbol(grafo) ? cout<<"Es árbol"<<endl : cout<<"No es árbol"<<endl;
    */

    if(esArbol(grafo)){
        cout<<"Es árbol"<<endl;
    } else{
        cout<<"No es árbol"<<endl;
    }

    int grafo2[][5]={
        {0,0,1,1,0},
        {1,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,1},
        {1,0,0,0,0}
    };
    
    /*
        esArbol(grafo) ? cout<<"Es árbol"<<endl : cout<<"No es árbol"<<endl;
    */

    if(esArbol(grafo2)){
        cout<<"Es árbol"<<endl;
    } else{
        cout<<"No es árbol"<<endl;
    }
}
