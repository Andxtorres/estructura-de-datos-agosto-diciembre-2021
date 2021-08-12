#ifndef SHAPE_H_DEFINED
#define SHAPE_H_DEFINED

#include <iostream>
using namespace std;

class Shape{

    private:
        int x;
        int y;
    
    public:
        Shape(int x, int y);
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();
        virtual double calcularArea()=0;
};
#endif