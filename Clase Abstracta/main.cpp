#include <iostream>
#include "Shape.h"
#include "Circle.h"
using namespace std;

int main(){
    cout << "Hello world " << endl;
    Circle circle(10,4,3);
    cout << "La x de tu circle es "<< circle.getX() << endl;
    cout << "La y de tu circle es "<< circle.getY() << endl;
    cout << "La radio de tu circle es "<< circle.getRadio() << endl;
    cout << "El área de tu scirclehape es "<< circle.calcularArea() << endl;
    return 0;
}

