template <class T>
class Nodo{
    private:
        T dato;
        Nodo<T> *siguiente;
    
    public:
        Nodo(T dato){
            this->dato=dato;
        }
        Nodo(T dato,Nodo<T> *siguiente){
            this->dato=dato;
            this->siguiente=siguiente;
        }
        Nodo<T>* getSiguiente(){
            return siguiente;
        }
        void setSiguiente(Nodo<T> *siguiente){
            this->siguiente=siguiente;
        }
        T getDato(){
            return dato;
        }
        void setDato(T dato){
            this->dato=dato;
        }
};
