#include "Shape.h"

Shape::Shape(int x,int y){
    this->x=x;
    this->y=y;
}

void Shape::setX(int x){
    this->x =x;
}

void Shape::setY(int y){
    this->y=y;
}

int Shape::getX(){
    return x;
}

int Shape::getY(){
    return y;
}