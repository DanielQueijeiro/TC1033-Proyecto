#include<stdlib.h>
#include<vector>
#include"Edificio.h"
using namespace std;


class Departamentos: public Edificio{
    private:
        int habitaciones;
        int baños;
        bool terraza;
    public:
        //Constructores
        Departamentos():Edificio(){}
        Departamentos(bool _terraza, int _habitaciones, int _baños):Edificio(0,0,0){
            terraza = _terraza;
            baños = _baños;
            habitaciones = _habitaciones;
        }
        //Getters
        bool getTerraza(){
            int _terraza = terraza;
            return _terraza;
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
        void setTerraza(bool _terraza){
            terraza = _terraza;
        }


        void setBaños(int _baños){
            baños = _baños;
        }

        void setHabitaciones(int _habitaciones){
            habitaciones = _habitaciones;
        }
        void imprimeDatos() {
            cout<< "Metros cuadrados: " << size <<endl;
            cout<< "Pisos: " << pisos <<endl;
            cout<< "Precio: "<< precio << endl;
            cout<< "Habitaciones: " << habitaciones <<endl;
            cout<< "Baños: "<< baños << endl;
            if(terraza==true){
                cout<< "Tiene terraza"<<endl<<endl;
            }
            else if(terraza==false){
                cout<<"No tiene terraza"<<endl<<endl;
            }
        }
};

class Casas: public Edificio{
    private:
        int estacionamiento;
        int baños;
        int habitaciones;
        bool sotano;
    public:
        //Constructores
        Casas():Edificio(){}
        Casas(int _estacionamiento, int _baños, int _habitaciones, bool _sotano): Edificio(0,0,0){
            estacionamiento = _estacionamiento;
            sotano = _sotano;
            baños = _baños;
            habitaciones = _habitaciones;
        }
        //Getters
        int getEstacionamiento(){
            int _estacionamiento = estacionamiento;
            return _estacionamiento;
        }
        int getBaños(){
            int _baños = baños;
            return _baños;
        }
        bool getSotano(){
            int _sotano = sotano;
            return _sotano;
        }
        int getHabitaciones(){
            int _habitaciones = habitaciones;
            return _habitaciones;
        }
        //Setters
        void setEstacionamiento(int _estacionamiento){
            estacionamiento = _estacionamiento;
        }

        void setBaños(int _baños){
            baños = _baños;
        }

        void setSotano(int _sotano){
            sotano = _sotano;
        }

        void setHabitaciones(int _habitaciones){
            habitaciones = _habitaciones;
        }
        void imprimeDatos() {
            cout<< "Metros cuadrados: " << size <<endl;
            cout<< "Precio: "<< precio << endl;
            cout<< "Pisos: " << pisos <<endl;
            cout<< "Habitaciones: " << habitaciones <<endl;
            cout<< "Baños: "<<baños <<endl;
            cout<< "Estacionamientos: " << estacionamiento << endl;
            if(sotano==true){
                cout<< "Tiene sotano"<<endl<<endl;
            }
            else if(sotano==false){
                cout<<"No tiene sotano"<<endl<<endl;
            }
        }
};

class Oficinas:public Edificio{
    private:
        bool salaConferencias;
        int maquinasExpendedoras;
        int cubiculos;

    public:
        //Constructores
        Oficinas():Edificio(){}
        Oficinas(bool _salaConferencias, int _maquinasExpendedoras, int _cubiculos):Edificio(0,0,0){
            salaConferencias = _salaConferencias;
            maquinasExpendedoras = _maquinasExpendedoras;
            cubiculos = _cubiculos;
        }
        //Getters
        bool getSalaConferencias(){
            int _salaConferencias = salaConferencias;
            return _salaConferencias;
        }
        int getMaquinasExpendedoras(){
            int _maquinasExpendedoras = maquinasExpendedoras;
            return _maquinasExpendedoras;

        }
        int getCubiculos(){
            int _cubiculos = cubiculos;
            return _cubiculos;
        }
        //Setters
        void setSalaConferencias(int _salaConferencias){
            salaConferencias = _salaConferencias;
        }

        void setMaquinasExpendedoras(int _maquinasExpendedoras){
            maquinasExpendedoras = _maquinasExpendedoras;
        }


        void setCubiculos(int _habitaciones){
            cubiculos = _habitaciones;
        }
        void imprimeDatos() {
            cout<< "Metros cuadrados: " << size <<endl;
            cout<< "Pisos: " << pisos <<endl;
            cout<< "Precio: "<< precio << endl;
            cout<< "Cubiculos: " << cubiculos <<endl;
            cout<<"Maquinas expendedoras: "<<maquinasExpendedoras<<endl;
            if(salaConferencias==true){
                cout<< "Tiene sala de conferencias"<<endl<<endl;
            }
            else if(salaConferencias==false){
                cout<<"No tiene sala de conferencias"<<endl<<endl;
            }
        }
};