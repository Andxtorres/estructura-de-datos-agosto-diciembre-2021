#include <iostream>
using namespace std;


void hanoi(int disco, char inicial, char auxiliar, char final){
    if(disco==1){
        cout<< "Mover disco "<< disco<< " de la torre "<< inicial <<" a la torre "<< final << endl; 
    }else{
        //Llenar esta parte  





    }
}


int main(){
    int discos=3;
    char inicial='A';
    char final='C';
    char auxiliar='B';
    hanoi(discos,inicial,auxiliar,final);
    return 0;
}
