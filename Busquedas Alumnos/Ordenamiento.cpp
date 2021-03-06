#include <iostream>
using namespace std;
template <class T>
class Ordenamiento{
    public:
        void intercambia(int a, int b,T arreglo[]){
            T aux=arreglo[a];
            arreglo[a]=arreglo[b];
            arreglo[b]=aux;
        }

        void ordenamientoPorIntercambio(T arreglo[],int tamanioArreglo){
            for(int i=0;i<tamanioArreglo;i++){
                for(int j=i+1;j<tamanioArreglo;j++){
                    cout<<"Estamos comparando el elemnto en la pos :  "<<i<<" que es "<<arreglo[i]<<" con el elemento en la pos "<<j<<" que es "<<arreglo[j]<<endl;
                    if(arreglo[i]>arreglo[j]){
                        cout<<"Intercambiamos el "<<arreglo[i]<<" con el "<< arreglo[j]<<endl;
                        intercambia(i,j,arreglo);
                    }
                }
            }    
        }

        void ordenamientoPorBurbuja(T arreglo[],int tamanioArreglo){
            bool hizoIntercambio=true;
            for(int i=0;(i<tamanioArreglo-1)&&hizoIntercambio;i++){
                cout<<"Entra a nuestra n "<<i+1<< endl; 
                bool hizoIntercambio=false;
                for(int j=0;j<(tamanioArreglo-i-1);j++){
                    if(arreglo[j+1]<arreglo[j]){
                        cout<<"Entra a nuestro intercambio "<<j+1<< endl; 
                        intercambia(j,j+1,arreglo);
                        hizoIntercambio=true;               
                    }
                }
            }   
        }

        void ordenamientoPorSeleccion(T arreglo[], int tamanioArreglo){
            for(int i=0;i<tamanioArreglo;i++){
                int masPequenio=i;
                for(int j=i;j<tamanioArreglo;j++){
                    if(arreglo[j]>arreglo[masPequenio]){
                        masPequenio=j;
                    }
                }
                if(i!=masPequenio){
                    intercambia(i,masPequenio,arreglo);
                }
            }
        }

        void ordenamientoPorInsercion(T arreglo[],int tamanioArreglo){
            for (int i=1;i<tamanioArreglo;i++){
                int indiceOrdenado=i;// Ejemplo: iteraci??n 1-> indiceOrdenado=1; iteraci??n 2-> indiceOrdenado=2; iteraci??n 3-> indiceOrdenado=3
                int auxiliar=arreglo[i];// iteraci??n 1-> auxiliar = 3; iteraci??n 2 auxiliar= 42; iteraci??n 3 auxiliar=17
                while(indiceOrdenado>0&&auxiliar<arreglo[indiceOrdenado-1]){ 
                        //iteraci??n 1 indiceOrdando>0? -> Si (1>0) y auxiliar<arreglo[indiceOrdenado-1]-> S?? (3<29); 
                        //iteraci??n 2 indiceOrdando>0? -> S?? (2>0) y auxiliar<arreglo[indiceOrdenado-1]?-> No (42<29) ; 
                        //iteraci??n 3 indiceOrdando>0? -> S?? (3>0) y auxiliar<arreglo[indiceOrdenado-1]?-> S?? (17<42);
                        //iteraci??n 3 indiceOrdando>0? -> S?? (2>0) y auxiliar<arreglo[indiceOrdenado-1]?-> S?? (17<29);
                        //iteraci??n 3 indiceOrdando>0? -> S?? (1>0) y auxiliar<arreglo[indiceOrdenado-1]?-> No (17<3);
                    arreglo[indiceOrdenado]=arreglo[indiceOrdenado-1]; 
                        //iteraci??n 1 arreglo[1]=arreglo[0]-> Mueve el 3 a la pos 0; 
                        //interaci??n 3 arreglo[3]=arreglo[2]-> Mueve el 17 a la pos 2;
                        //interaci??n 3 arreglo[2]=arreglo[1]-> Mueve el 29 a la pos 1;
                    //iteraci??n 1 arreglo[1]=29;
                    //iteraci??n 3 arreglo[3]=42;
                    //iteraci??n 3 arreglo[2]=29;

                    //iteraci??n 1 arreglo[0]=29; 
                    //iteraci??n 3 arreglo[1]=29;
                    indiceOrdenado--;
                }
                arreglo[indiceOrdenado]=auxiliar;
                //iteraci??n 1 arreglo[0]=3
                //iteraci??n 2 arreglo[2]=42
                //iteraci??n 3 arreglo[1]=17
            }
        }


        void imprimirArreglo(T arreglo[],int tamanioArreglo){
            cout<<"{";
            for(int i=0;i<tamanioArreglo;i++){
                cout<<arreglo[i]<<",";
            }
            cout<<"}"<<endl;
        }
};
