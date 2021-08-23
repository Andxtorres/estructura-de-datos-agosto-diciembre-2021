#include <iostream>
using namespace std;

void ordenamientoPorIntercambio(int arreglo[],int tamanioArreglo){
    cout<<"El tamaño del arreglo es:  "<<tamanioArreglo<<endl;
    for(int i=0;i<tamanioArreglo;i++){
        for(int j=i+1;j<tamanioArreglo;j++){
            cout<<"Estamos comparando el elemnto en la pos :  "<<i<<" que es "<<arreglo[i]<<" con el elemento en la pos "<<j<<" que es "<<arreglo[j]<<endl;
            if(arreglo[i]>arreglo[j]){
                cout<<"Intercambiamos el "<<arreglo[i]<<" con el "<< arreglo[j]<<endl;
                int aux=arreglo[i];
                arreglo[i]=arreglo[j];
                arreglo[j]=aux;
            }
        }
    }    
}



int main(){
    int arreglo[]={8,4,6,2};
    int tamanioArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    ordenamientoPorIntercambio(arreglo,tamanioArreglo);
    return 0;
}
