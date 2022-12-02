#include<stdlib.h>
#include<string.h>
#include <sstream>
using namespace std;


class Edificio{
    protected:
        int size;
        int precio;
        int pisos;
        string nombre;
    public:
        Edificio(){}
        Edificio(int _size, int _precio, int _pisos, string _nombre){
            size = _size;
            precio = _precio;
            pisos = _pisos;
            nombre = _nombre;
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
    string getNombre(){
        string _nombre = nombre;
        return nombre;
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
    void setNombre(string _nombre){
        nombre = _nombre;
    }
};