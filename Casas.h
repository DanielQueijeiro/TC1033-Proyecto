#include<stdlib.h>

class Casas{
    private:
        int plantas; //Total de plantas
        int size;//En metros cuadrados
        int habitaciones;
        int precio;
    public:
        //Constructores
        Casas(int _plantas, int _size, int _habitaciones, int _precio){
            plantas = _plantas;
            precio = _precio;
            size = _size;
            habitaciones = _habitaciones;
        }
        //Getters
        int getPlantas(){
            int _plantas = plantas;
            return _plantas;
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
        void setPlantas(int nuevoPlanta){
            plantas = nuevoPlanta;
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