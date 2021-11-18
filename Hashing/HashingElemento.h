using namespace std;

class HashingElemento{
    private:
        int elemento;
        char bandera;
    public:
        HashingElemento();
        HashingElemento(int elemento);
        int getElemento();
        char getBandera();
        void marcarOcupado();
        void marcarBorrado();
};

HashingElemento::HashingElemento(){
    this->elemento=0;
    this->bandera='v';
}

HashingElemento::HashingElemento(int elemento){
    this->elemento=elemento;
    bandera='v';
}

int HashingElemento::getElemento(){
    return elemento;
}

char HashingElemento::getBandera(){
    return bandera;
}

void HashingElemento::marcarOcupado(){
    this->bandera='o';
}
void HashingElemento::marcarBorrado(){
    this->bandera='b';
}
