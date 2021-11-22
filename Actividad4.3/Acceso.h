#ifndef ACCESO_DEFINED
#define ACCESO_DEFINED
using namespace std;
class Acceso{
    private:
        string fecha;
        string direccion;
        int puerto;
        string error;

    public: 
        Acceso();
        Acceso(string fecha,string direccion,int puerto,string error);
        string getFecha();
        string getDireccion();
        int getPuerto();
        string getError();
        friend ostream& operator<<(ostream& os, const Acceso& acceso){
            os<< acceso.fecha << " ip "<< acceso.direccion<< " puerto "<<acceso.puerto;
            return os;
        }
};
#endif

Acceso::Acceso(){
    fecha="Sin fecha";
    direccion="Sin direccion";
    puerto=0;
    error="Sin Error";
}

Acceso::Acceso(string fecha,string direccion,int puerto,string error){
    this->fecha=fecha;
    this->direccion=direccion;
    this->puerto=puerto;
    this->error=error;
}

string Acceso::getDireccion(){
    return direccion;
}

string Acceso::getFecha(){
    return fecha;
}

int Acceso::getPuerto(){
    return puerto;
}

string Acceso::getError(){
    return error;
}
