#include<stdlib.h>
#include<string.h>
using namespace std;


class Edificio{
    protected:
        int size;
        int precio;
        int pisos;
    public:
        Edificio(){}
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
    void setSize(int _size){
        size = _size;
    }
    void setPrecio(int _precio){
        precio = _precio;
    }
    void setPisos(int _pisos){
        pisos = _pisos;
    }
};