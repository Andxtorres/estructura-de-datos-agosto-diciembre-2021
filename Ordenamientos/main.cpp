#include <iostream>
using namespace std;

void intercambia(int a, int b,int arreglo[]){
    int aux=arreglo[a];
    arreglo[a]=arreglo[b];
    arreglo[b]=aux;
}

void ordenamientoPorIntercambio(int arreglo[],int tamanioArreglo){
    for(int i=0;i<tamanioArreglo;i++){
        for(int j=i+1;j<tamanioArreglo;j++){
            cout<<"Estamos comparando el elemnto en la pos :  "<<i<<" que es "<<arreglo[i]<<" con el elemento en la pos "<<j<<" que es "<<arreglo[j]<<endl;
            if(arreglo[i]>arreglo[j]){
                cout<<"Intercambiamos el "<<arreglo[i]<<" con el "<< arreglo[j]<<endl;
                intercambia(i,j,arreglo);
            }
        }
    }    
}

void ordenamientoPorBurbuja(int arreglo[],int tamanioArreglo){
    bool hizoIntercambio=true;
    for(int i=0;(i<tamanioArreglo-1)&&hizoIntercambio;i++){
        cout<<"Entra a nuestra n "<<i+1<< endl; 
        bool hizoIntercambio=false;
        for(int j=0;j<(tamanioArreglo-i-1);j++){
            if(arreglo[j+1]<arreglo[j]){
                cout<<"Entra a nuestro intercambio "<<j+1<< endl; 
                intercambia(j,j+1,arreglo);
                hizoIntercambio=true;               
            }
        }

    }   
}

void imprimirArreglo(int arreglo[],int tamanioArreglo){
    cout<<"{";
    for(int i=0;i<tamanioArreglo;i++){
        cout<<arreglo[i]<<",";
    }
    cout<<"}"<<endl;
}

int main(){
    int arreglo[]={11,10,9,8,7,6,5,4,3,2,1};
    int tamanioArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    ordenamientoPorBurbuja(arreglo,tamanioArreglo);
    imprimirArreglo(arreglo,tamanioArreglo);
    return 0;
}
