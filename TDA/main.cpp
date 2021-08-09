#include <iostream>
#include "Triangle.h"
using namespace std;

int main(){
    cout<< "Hola mundo" << endl;
    Triangle t(10,20,30);
    cout<< "El lado 1 del triangulo es: " << t.lado1() << endl; 
    cout<< "El lado 2 del triangulo es: " << t.lado2() << endl; 
    cout<< "El lado 3 del triangulo es: " << t.lado3() << endl; 
    return 0;
}