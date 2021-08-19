#include <iostream>
using namespace std;
long fibonacci(long x){

    if (x==0 || x==1){
        return x;
    }else{
        return (fibonacci(x-1)+fibonacci(x-2));
    }
}

long fibonacciIterativo(long x){
    long ant=1;
    long act=1;

    while(x>2){
        long aux=ant+act;
        ant=act;
        act=aux;
        x=x-1;
    }
    return act;
}

int main(){
    long x=1000;
    cout << "Fibonacci de " << x << " es: " << fibonacci(x) << endl; 
    return 0;
}


