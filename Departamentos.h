#include<stdlib.h>

class Departamentos{
    private:
        int pisos;//Total de pisos
        int size;//En metros cuadrados;
        int habitaciones;//Total de habitaciones en el edificio
        int precio;//Precio en pesos
    public:
        //Constructores
        Departamentos(int _pisos, int _size, int _habitaciones, int _precio){
            pisos = _pisos;
            precio = _precio;
            size = _size;
            habitaciones = _habitaciones;
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
        int getHabitaciones(){
            int _habitaciones = habitaciones;
            return _habitaciones;
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

        void setHabitaciones(int nuevoHabitaciones){
            habitaciones = nuevoHabitaciones;
        }
};