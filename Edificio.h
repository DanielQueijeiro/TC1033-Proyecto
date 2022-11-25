#include<stdlib.h>



class Edificio{
    private:
        int size;
        int precio;
        int pisos;
    public:
        Edificio(int _size, int _precio, int _pisos){
            size = _size;
            precio = _precio;
            pisos = _pisos;
        }
    //Getters
    int getSize(){
        int _size = size;
        return size;
    }
    int getPrecio(){
        int _precio = precio;
        return precio;
    }
    int getPisos(){
        int _pisos = pisos;
        return pisos;
    }

    //Setters
    void setSize(int nuevoSize){
        size = nuevoSize;
    }
    void setPrecio(int nuevoPrecio){
        precio = nuevoPrecio;
    }
    void setPisos(int nuevoPisos){
        pisos = nuevoPisos;
    }
};