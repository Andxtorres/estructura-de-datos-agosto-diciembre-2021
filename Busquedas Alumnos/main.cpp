#include <iostream>
#include "Alumno.h"
#include "Ordenamiento.cpp"
#include "Busqueda.cpp"
using namespace std;



int main(){

    //Creamos un alumno

    Alumno a1("Andres","A01211914",70);
    Alumno a2("Juan","A01211913",80);
    Alumno a3("Paco","A01211915",50);
    Alumno a4("Pedro","A01211916",100);

    Alumno arregloAlumnos[]={a1,a2,a3,a4};

    int tamanioArregloAlumnos=sizeof(arregloAlumnos)/sizeof(arregloAlumnos[0]);
    //ordenamientoPorSeleccion(arregloAlumnos,tamanioArregloAlumnos);

    cout<<"El alumno es: "<<a1.getNombre()<< endl;
    ///
    Ordenamiento<Alumno> ordenamiento;
    ordenamiento.ordenamientoPorSeleccion(arregloAlumnos,tamanioArregloAlumnos);
    ordenamiento.imprimirArreglo(arregloAlumnos,tamanioArregloAlumnos);
    
    cout<<"Dame el elemento que quieres buscar: "<<endl;

    string aEncontrar;
    cin>>aEncontrar;
    Busqueda<Alumno> busqueda;
    Alumno alumnoAEncontrar("",aEncontrar,0);
    int indiceEncontrado=busqueda.busquedaBinaria(arregloAlumnos,tamanioArregloAlumnos,alumnoAEncontrar);
    if(indiceEncontrado>-1){
        cout<<"El índice que buscas es: "<<indiceEncontrado<<endl;
    }else{
        cout<<"El elemento "<<aEncontrar<<" no existe en tu arreglo "<<endl;
    }
    
    return 0;
}
