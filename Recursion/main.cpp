#include <iostream>
using namespace std;
int fibonacci(int x){
    if (x==0 || x==1){
        return x;
    }else{
        return (fibonacci(x-1)+fibonacci(x-2));
    }
}
int main(){
    int x=11;
    cout << "Fibonacci de " << x << " es: " << fibonacci(x) << endl; 
    return 0;
}


