#include<stdlib.h>


class Inmobiliaria{
    //Aqui se podra ver y cambiar los edificios
};

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
    //Atributos para ver y cambiar las casas, edificios y departamentos
};

class Departamentos{
    private:
        int habitaciones;
        int baños;
        int cocina;
        bool terraza;
    public:
        //Constructores
        Departamentos(int _terraza, int _cocina, int _habitaciones, int _baños){
            terraza = _terraza;
            cocina = _cocina;
            baños = _baños;
            habitaciones = _habitaciones;
        }
        //Getters
        bool getTerraza(){
            int _terraza = terraza;
            return _terraza;
        }
        int getCocina(){
            int _cocina = cocina;
            return _cocina;
        }
        int getBaños(){
            int _baños = baños;
            return _baños;
        }
        int getHabitaciones(){
            int _habitaciones = habitaciones;
            return _habitaciones;
        }
        //Setters
        void setTerraza(int nuevoTerraza){
            terraza = nuevoTerraza;
        }

        void setCocina(int nuevoCocina){
            cocina = nuevoCocina;
        }

        void setBaños(int nuevoBaños){
            baños = nuevoBaños;
        }

        void setHabitaciones(int nuevoHabitaciones){
            habitaciones = nuevoHabitaciones;
        }
};

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