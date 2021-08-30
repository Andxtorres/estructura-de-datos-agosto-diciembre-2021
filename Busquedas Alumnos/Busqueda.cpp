#include <iostream>
using namespace std;
class Busqueda{
    public:
        int busquedaLineal(int arreglo[],int tamanioArreglo,int aEncontrar){
            int indiceEncontrado=-1;
            //También puedo hacerlo con un while
            for(int i=0;i<tamanioArreglo;i++){
                if(arreglo[i]==aEncontrar){
                    indiceEncontrado=i;
                    return indiceEncontrado;
                }
            }
            return indiceEncontrado;
        }

        int busquedaBinaria(int arreglo[],int tamanioArreglo,int aEncontrar){
            int inicio=0;
            int fin= tamanioArreglo-1;
            int centro = (tamanioArreglo-1)/2;

            while(inicio<=fin){ //Podríamos pensar que esto es complejidad O(n)
                centro=(inicio+fin)/2; // Aqui se reduce el numero de casos a la mitad-> O(log n)
                if(aEncontrar==arreglo[centro]){
                    return centro;
                }else if(aEncontrar>arreglo[centro]){
                    fin=centro-1;
                }else{
                    inicio=centro+1;
                }
            }
            return -1;
        }
};
