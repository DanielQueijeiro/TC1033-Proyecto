#include<iostream>
#include<windows.h>
#include"Inmobiliaria.h"
using namespace std;

int main(){
    //Departamentos(int _pisos, int _tamanio, int _habitaciones, int _precio)
    Departamentos d_1 = Departamentos(5,50,100,80000);
        cout<<"Introducir pisos nuevos del departamento 1"<<endl;
        int pisos_nuevo;
        cin>>pisos_nuevo;
        d_1.setHabitaciones(pisos_nuevo);
        cout<<"El departamento 1 tiene: "<<d_1.getHabitaciones()<<" pisos."<<endl;

    //Casas(int _plantas, int _size, int _habitaciones, int _precio)
    Casas c_1 = Casas(2,100,3,150000);
        cout<<endl<<"Introducir size nuevo de la casa 1"<<endl;
        int size_nuevo;
        cin>>size_nuevo;
        c_1.setSize(size_nuevo);
        cout<<"La casa 1 tiene: "<<c_1.getSize()<<" metros cuadrados."<<endl<<endl;

    // Oficinas(int _pisos, int _size, int _cubiculos, int _precio)
    Oficinas o_1 = Oficinas(7,60,3,150000);
        cout<<endl<<"Introducir cubiculos de la oficina 1"<<endl;
        int cubiculos_nuevo;
        cin>>cubiculos_nuevo;
        o_1.setCubiculos(cubiculos_nuevo);
        cout<<"La casa 1 tiene: "<<o_1.getCubiculos()<<" metros cuadrados."<<endl<<endl;
}