#ifndef ALUMNO_H_DEFINED
#define ALUMNO_H_DEFINED
#include <iostream>
using namespace std;

class Alumno{
    private: 
        string nombre;
        string matricula;
        int calificacion;
    
    public:
        Alumno(string nombre,string matricula, int calificacion);
        string getNombre() const;
        string getMatricula();
        int getCalificacion();
        void setNombre(string nombre);
        void setMatricula(string matricula);
        void setCalificacion(int calificacion);

        bool operator < (Alumno& alumno2){
            bool resultado=false;
            if(calificacion<alumno2.getCalificacion()){
                resultado=true;
            }else{
                resultado=false;
            }
            return resultado;
        }
        bool operator > (Alumno& alumno2){
            bool resultado=false;
            if(calificacion>alumno2.getCalificacion()){
                resultado=true;
            }else{
                resultado=false;
            }
            return resultado;
        }

        bool operator == (Alumno& alumno2){
            bool resultado=false;
            if(matricula==alumno2.getMatricula()){
                resultado=true;
            }
            return resultado;
        }
        friend ostream &operator<<( ostream &output, const Alumno &alumno ) { 
            output << "{Alumno : " << alumno.getNombre()<< " matricula: "<<alumno.matricula<<" calif: "<<alumno.calificacion<<"}";
            return output;            
        }
};
#endif
