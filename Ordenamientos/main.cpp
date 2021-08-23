#include <iostream>
using namespace std;

void intercambia(int a, int b,int arreglo[]){

}

void ordenamientoPorIntercambio(int arreglo[],int tamanioArreglo){
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

void ordenamientoPorBurbuja(int arreglo[],int tamanioArreglo){
    bool hizoIntercambio=true;
    for(int i=0;(i<tamanioArreglo-1)&&hizoIntercambio;i++){
        bool hizoIntercambio=false;
        for(int j=0;j<(tamanioArreglo-i-1);j++){
            if(arreglo[j+1]<arreglo[j]){
                int aux=arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=aux; 
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
    int arreglo[]={8,4,6,2,10,5,11,15,12,1,-1};
    int tamanioArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    ordenamientoPorBurbuja(arreglo,tamanioArreglo);
    imprimirArreglo(arreglo,tamanioArreglo);
    return 0;
}
