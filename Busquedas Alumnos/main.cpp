#include <iostream>
#include "Alumno.h"
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

void ordenamientoPorSeleccion(int arreglo[], int tamanioArreglo){
    for(int i=0;i<tamanioArreglo;i++){
        int masPequenio=i;
        for(int j=i;j<tamanioArreglo;j++){
            if(arreglo[j]>arreglo[masPequenio]){
                masPequenio=j;
            }
        }
        if(i!=masPequenio){
            intercambia(i,masPequenio,arreglo);
        }
    }
}

void ordenamientoPorInsercion(int arreglo[],int tamanioArreglo){
    for (int i=1;i<tamanioArreglo;i++){
        int indiceOrdenado=i;// Ejemplo: iteración 1-> indiceOrdenado=1; iteración 2-> indiceOrdenado=2; iteración 3-> indiceOrdenado=3
        int auxiliar=arreglo[i];// iteración 1-> auxiliar = 3; iteración 2 auxiliar= 42; iteración 3 auxiliar=17
        while(indiceOrdenado>0&&auxiliar<arreglo[indiceOrdenado-1]){ 
                //iteración 1 indiceOrdando>0? -> Si (1>0) y auxiliar<arreglo[indiceOrdenado-1]-> Sí (3<29); 
                //iteración 2 indiceOrdando>0? -> Sí (2>0) y auxiliar<arreglo[indiceOrdenado-1]?-> No (42<29) ; 
                //iteración 3 indiceOrdando>0? -> Sí (3>0) y auxiliar<arreglo[indiceOrdenado-1]?-> Sí (17<42);
                //iteración 3 indiceOrdando>0? -> Sí (2>0) y auxiliar<arreglo[indiceOrdenado-1]?-> Sí (17<29);
                //iteración 3 indiceOrdando>0? -> Sí (1>0) y auxiliar<arreglo[indiceOrdenado-1]?-> No (17<3);
            arreglo[indiceOrdenado]=arreglo[indiceOrdenado-1]; 
                //iteración 1 arreglo[1]=arreglo[0]-> Mueve el 3 a la pos 0; 
                //interación 3 arreglo[3]=arreglo[2]-> Mueve el 17 a la pos 2;
                //interación 3 arreglo[2]=arreglo[1]-> Mueve el 29 a la pos 1;
            //iteración 1 arreglo[1]=29;
            //iteración 3 arreglo[3]=42;
            //iteración 3 arreglo[2]=29;

            //iteración 1 arreglo[0]=29; 
            //iteración 3 arreglo[1]=29;
            indiceOrdenado--;
        }
        arreglo[indiceOrdenado]=auxiliar;
        //iteración 1 arreglo[0]=3
        //iteración 2 arreglo[2]=42
        //iteración 3 arreglo[1]=17
    }
}


void imprimirArreglo(int arreglo[],int tamanioArreglo){
    cout<<"{";
    for(int i=0;i<tamanioArreglo;i++){
        cout<<arreglo[i]<<",";
    }
    cout<<"}"<<endl;
}

int busquedaLineal(int arreglo[],int tamanioArreglo,int aEncontrar){
    int indiceEncontrado=-1;
    //También puedo hacerlo con un while
    for(int i=0;i<tamanioArreglo;i++){
        if(arreglo[i]==aEncontrar){
            indiceEncontrado=i;
            return indiceEncontrado;
        }
    }
    return indiceEncontrado;
}

int busquedaBinaria(int arreglo[],int tamanioArreglo,int aEncontrar){
    int inicio=0;
    int fin= tamanioArreglo-1;
    int centro = (tamanioArreglo-1)/2;

    while(inicio<=fin){ //Podríamos pensar que esto es complejidad O(n)
        centro=(inicio+fin)/2; // Aqui se reduce el numero de casos a la mitad-> O(log n)
        if(aEncontrar==arreglo[centro]){
            return centro;
        }else if(aEncontrar<arreglo[centro]){
            fin=centro-1;
        }else{
            inicio=centro+1;
        }
    }
    return -1;
}

int main(){

    //Creamos un alumno

    Alumno a1("Andres","A01211914",70);
    Alumno a2("Juan","A01211914",80);
    Alumno arregloAlumnos[]={a1,a2};
    int tamanioArregloAlumnos=sizeof(arregloAlumnos)/sizeof(arregloAlumnos[0]);
    ordenamientoPorSeleccion(arregloAlumnos,tamanioArregloAlumnos);
    
    cout<<"El alumno es: "<<a1.getNombre()<< endl;
    ///
    int arreglo[]={3,1,7,5,10,8,6,11,13,4,0};
    int tamanioArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    ordenamientoPorSeleccion(arreglo,tamanioArreglo);
    imprimirArreglo(arreglo,tamanioArreglo);
    cout<<"Dame el elemento que quieres buscar: "<<endl;
    int aEncontrar;
    cin>>aEncontrar;
    int indiceEncontrado=busquedaBinaria(arreglo,tamanioArreglo,aEncontrar);
    if(indiceEncontrado>-1){
        cout<<"El índice que buscas es: "<<indiceEncontrado<<endl;
    }else{
        cout<<"El elemento "<<aEncontrar<<" no existe en tu arreglo "<<endl;
    }
    return 0;
}
