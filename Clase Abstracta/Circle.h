#ifndef CIRCLE_H_DEFINED
#define CIRCLE_H_DEFINED
#include "Shape.h"
#include <iostream>
using namespace std;

class Circle: public Shape{
    private: 
        int radio;
    
    public: 
        Circle(int radio,int x, int y);
        void setRadio(int radio);
        int getRadio();
        double calcularArea();
};

#endif