#include<stdlib.h>

class Oficinas{
    private:
        int pisos; //Total de pisos
        int size;//En metros cuadrados;
        int cubiculos;
        int precio;
    public:
        //Constructores
        Oficinas(int _pisos, int _size, int _cubiculos, int _precio){
            pisos = _pisos;
            precio = _precio;
            size = _size;
            cubiculos = _cubiculos;
        }
        //Getters
        int getPisos(){
            int _pisos = pisos;
            return _pisos;
        }
        int getSize(){
            int _size = size;
            return _size;
        }
        int getPrecio(){
            int _precio = precio;
            return _precio;
        }
        int getCubiculos(){
            int _cubiculos = cubiculos;
            return _cubiculos;
        }
        //Setters
        void setPisos(int nuevoPisos){
            pisos = nuevoPisos;
        }

        void setSize(int nuevoSize){
            size = nuevoSize;
        }

        void setPrecio(int nuevoPrecio){
            precio = nuevoPrecio;
        }

        void setCubiculos(int nuevoHabitaciones){
            cubiculos = nuevoHabitaciones;
        }
};