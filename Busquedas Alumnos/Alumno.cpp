#include "Alumno.h"

Alumno::Alumno(string nombre,string matricula,int calificacion){
    this->nombre=nombre;
    this->matricula=matricula;
    this->calificacion=calificacion;
}

string Alumno::getNombre(){
    return nombre;
}

string Alumno::getMatricula(){
    return matricula;
}

int Alumno::getCalificacion(){
    return calificacion;
}

void Alumno::setNombre(string nombre){
    this->nombre=nombre;
}

void Alumno::setMatricula(string matricula){
    this->matricula=matricula;
}

void Alumno::setCalificacion(int calificacion){
    this->calificacion=calificacion;
}

