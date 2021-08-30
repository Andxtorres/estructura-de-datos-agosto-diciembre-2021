#include <iostream>
#include "Alumno.h"
#include "Ordenamiento.cpp"
#include "Busqueda.cpp"
using namespace std;



int main(){

    //Creamos un alumno

    Alumno a1("Andres","A01211914",70);
    Alumno a2("Juan","A01211914",80);
    Alumno arregloAlumnos[]={a1,a2};
    
    int tamanioArregloAlumnos=sizeof(arregloAlumnos)/sizeof(arregloAlumnos[0]);
    //ordenamientoPorSeleccion(arregloAlumnos,tamanioArregloAlumnos);

    cout<<"El alumno es: "<<a1.getNombre()<< endl;
    ///
    int arreglo[]={3,1,7,5,10,8,6,11,13,4,0};
    int tamanioArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    Ordenamiento ordenamiento;

    ordenamiento.ordenamientoPorSeleccion(arreglo,tamanioArreglo);
    ordenamiento.imprimirArreglo(arreglo,tamanioArreglo);
    cout<<"Dame el elemento que quieres buscar: "<<endl;
    int aEncontrar;
    cin>>aEncontrar;
    Busqueda busqueda;

    int indiceEncontrado=busqueda.busquedaBinaria(arreglo,tamanioArreglo,aEncontrar);
    if(indiceEncontrado>-1){
        cout<<"El índice que buscas es: "<<indiceEncontrado<<endl;
    }else{
        cout<<"El elemento "<<aEncontrar<<" no existe en tu arreglo "<<endl;
    }
    return 0;
}
