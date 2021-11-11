#include <iostream>
#include <queue>

using namespace std;


bool esBipartita(int grafo[][6],int inicio){
    char verticesColoreados[6];
    for(int i=0;i<6;i++){
        verticesColoreados[i]='V';
    }
    verticesColoreados[inicio]='A';
    queue <int> q;
    q.push(inicio);

    while(!q.empty()){
        int verticeAAnalizar=q.front();
        q.pop();
        for(int i=0;i<6;i++){
            if(grafo[verticeAAnalizar][i]==1&&verticesColoreados[i]=='V'){
                if(verticesColoreados[verticeAAnalizar]=='A'){
                    verticesColoreados[i]='R';
                }else{
                    verticesColoreados[i]='A';
                }
                q.push(i);
            }else if(grafo[verticeAAnalizar][i]==1 && verticesColoreados[verticeAAnalizar]==verticesColoreados[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){

    int grafo[][6]={
        {0,1,0,1,0,1},
        {1,0,1,0,1,0},
        {1,1,0,1,0,1},
        {1,0,1,0,1,0},
        {0,1,0,1,0,1},
        {1,0,1,0,1,0}
    };

    if(esBipartita(grafo,0)){
        cout<<"Es bipartita"<<endl;
    }else{
        cout<<"No es bipartita"<<endl;    
    }

    return -1;
}
