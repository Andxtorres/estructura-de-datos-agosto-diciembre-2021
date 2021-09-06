#include <iostream>
using namespace std;

void imprimirArreglo(int arreglo[],int tamanioArreglo){
    cout<<"{";
    for(int i=0;i<tamanioArreglo;i++){
        cout<<arreglo[i]<<",";
    }
    cout<<"}"<<endl;
}


void une(int inicio,int mitad,int fin,int arreglo[],int tamanioArreglo){
    int i=inicio;
    int j=mitad+1;
    int k=inicio;
    int nuevoTamanio=fin+1;
    int aux[nuevoTamanio];
    while((i<=mitad)&&(j<=fin)){
        if(arreglo[i]<arreglo[j]){
            cout<<"El elemento que va a la pos K(i) "<<arreglo[i]<<endl;
            aux[k]=arreglo[i];
            i++;
        }else{
            cout<<"El elemento que va a la pos K(j) "<<arreglo[j]<<endl;
            aux[k]=arreglo[j];
            j++;
        }
        k++;
    }
    while(i<mitad+1){
        cout<<"El elemento que va a la pos K(mitad(i)) "<<arreglo[i]<<endl;
        aux[k]=arreglo[i];
        i++;
        k++;
    }
    while(j<=fin){
        cout<<"El elemento que va a la pos K(mitad(j)) "<<arreglo[i]<<endl;
        aux[k]=arreglo[j];
        j++;
        k++;
    }
    for(int l=inicio;l<nuevoTamanio;l++){
        arreglo[l]=aux[l];
    }
    cout<<"Imprimiendo arreglo orginal"<<endl;
    imprimirArreglo(arreglo,tamanioArreglo);
    int tamanioArregloAux=sizeof(aux)/sizeof(aux[0]);
    cout<<"Imprimiendo arreglo aux"<<endl;
    imprimirArreglo(aux,tamanioArregloAux);
}


void mergeSort(int inicio,int fin, int arreglo[],int tamanioArreglo){
    if(inicio<fin){
        int mitad=(inicio+fin)/2;
        mergeSort(inicio,mitad,arreglo,tamanioArreglo);
        mergeSort(mitad+1,fin,arreglo,tamanioArreglo);
        une(inicio,mitad,fin,arreglo,tamanioArreglo);
        cout<<"Despues del metodo une"<<endl;
        imprimirArreglo(arreglo,tamanioArreglo);
    }
}


int main(){
    int arreglo[]={3,1,7,5,10,8,6,11,13,4,0};
    int tamanioArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    mergeSort(0,tamanioArreglo-1,arreglo,tamanioArreglo);
    imprimirArreglo(arreglo,tamanioArreglo);
    return 0;
}
