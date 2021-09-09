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

void intercambia(int* a, int* b){
    int t=*a;
    *a=*b;
    *b=t;
}


int partir(int inicio,int fin,int pivote,int arreglo[]){
    cout<<"Entra al método partir "<<endl;
    int elementoPivote=arreglo[pivote]; 
    int j=inicio;
    for(int i=inicio;i<=fin;i++){
        if(arreglo[i]<elementoPivote){
            j++;
            cout<<"Intercambia I: "<<arreglo[i]<<" con J: "<<arreglo[j]<<endl;
            intercambia(&arreglo[i],&arreglo[j]);
        }
    }
    pivote=j;
    cout<<" Intercambia inicio: "<<arreglo[inicio]<<" con pivote: "<<arreglo[pivote]<<endl;
    intercambia(&arreglo[inicio],&arreglo[pivote]);
    return pivote;
}

void quickSort(int inicio, int fin, int arreglo[]){
    if(inicio<fin){
        int pivote=partir(inicio,fin,inicio,arreglo);
        quickSort(inicio,pivote-1,arreglo);
        quickSort(pivote+1,fin,arreglo);
    }
}


int main(){
    int arreglo[]={5,7,3,4,10,2,1,8,9};
    //Debería quedar en la primera llamada [1,3,4,2,5,7,10,8,9]
    // Llamada recursiva izquierda con [1,3,4,2]-> [1,3,4,2]-> Llamada recursiva con [1] y con [3,4,2]-> [2,3,4] -> Llamada recursiva [2] y [4] -> [1,2,3,4]
    //Llamada recursiva derecha con [7,10,8,9]-> Llamada recursiva con [7] y [10,8,9]-> [9,8,10] -> Llamada recursiva con [9,8] y [10]-> [8,9]-> [8,9,10]-> [7,8,9,10]
    int tamanioArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    quickSort(0,tamanioArreglo-1,arreglo);
    imprimirArreglo(arreglo,tamanioArreglo);
    return 0;
}
