#include <iostream>
#include "Calculadora.h"
using namespace std;

template <class T,class U>
U sumaDesdeMain(T a, T b){
    return "La suma es: "+to_string(a+b);
}

int main(){
    string nombre="Juan";

    Calculadora<double> c;
    cout << "La suma de 5.0+4.0 es: " << c.suma(5.0,4.0) << endl;
    Calculadora<int> cEnteros;
    cout << "La suma de 5+4 es: " << cEnteros.suma(5,4) << endl;
    Calculadora<string> cStrings;
    cout << "La suma de juan + luis es: " << cStrings.suma("juan","luis") << endl;

    cout << "La suma de 7 + 6 es: " << sumaDesdeMain<int,string>(3,4) << endl;
    return 0;
}


