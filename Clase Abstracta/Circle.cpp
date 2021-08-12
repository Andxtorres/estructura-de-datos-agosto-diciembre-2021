#include "Circle.h"

Circle::Circle(int radio,int x,int y):Shape(x,y){
    this->radio=radio;
}

void Circle::setRadio(int radio){
    this->radio=radio;
}

int Circle::getRadio(){
    return radio;
}

double Circle::calcularArea(){
    return 3.14165*(radio*radio);
}