#include "Triangle.h"
Triangle::Triangle(double a, double b, double c){
    this->a=a;
    this->b=b;
    this->c=c;
}

double Triangle::lado1() const{
    return a;
}
double Triangle::lado2() const{
    return b;
}
double Triangle::lado3() const{
    return c;
}