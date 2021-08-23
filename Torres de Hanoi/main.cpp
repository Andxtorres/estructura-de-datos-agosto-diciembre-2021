#include <iostream>
using namespace std;


void hanoi(int disco, char inicial, char final, char auxiliar){
    if(disco==1){
        cout<< "Mover disco "<< disco<< " de la torre "<< inicial <<" a la torre "<< final << endl; 
    }else{
        cout<< "Entra llamada recursiva " << disco << endl;
        //Llenar esta parte  
        hanoi(disco-1,inicial,auxiliar,final);
        cout<< "Mover disco "<< disco<< " de la torre "<< inicial <<" a la torre "<< final << endl; 
        hanoi(disco-1, auxiliar,final,inicial);

    }
}


int main(){
    int discos=50;
    char inicial='A';
    char final='C';
    char auxiliar='B';
    hanoi(discos,inicial,final,auxiliar);
    return 0;
}
