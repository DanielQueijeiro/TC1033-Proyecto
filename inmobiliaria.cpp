#include<iostream>
#include<windows.h>
#include"Inmobiliaria.h"
using namespace std;

int main(){
    //Departamentos(bool _terraza, int _habitaciones, int _baños)
    Departamentos d_1 = Departamentos(true,50,80000);
        cout<<"Introducir pisos nuevos del departamento 1"<<endl;
        int pisos_nuevo;
        cin>>pisos_nuevo;
        d_1.setHabitaciones(pisos_nuevo);
        cout<<"El departamento tiene: "<<d_1.getHabitaciones()<<" pisos."<<endl;
        if(d_1.getTerraza()==true){
            cout<<"El departamento tiene terraza."<<endl<<endl;
        }

    //Casas(int _estacionamiento, int _baños, int _habitaciones, bool _sotano)
    Casas c_1 = Casas(2,2,3,true); 
        cout<<endl<<"Introducir size nuevo de la casa 1"<<endl;
        int size_nuevo;
        cin>>size_nuevo;
        c_1.setSize(size_nuevo);
        cout<<"La casa tiene: "<<c_1.getSize()<<" metros cuadrados."<<endl;
        cout<<"La casa tiene: "<<c_1.getHabitaciones()<<" habitaciones."<<endl<<endl;

    // Oficinas(bool _salaConferencias, int _maquinasExpendedoras, int _cubiculos)
    Oficinas o_1 = Oficinas(true,5,50);
        cout<<endl<<"Introducir cubiculos de la oficina 1"<<endl;
        int cubiculos_nuevo;
        cin>>cubiculos_nuevo;
        o_1.setCubiculos(cubiculos_nuevo);
        cout<<"La oficina tiene: "<<o_1.getCubiculos()<<" cubiculos."<<endl;
        if(o_1.getSalaConferencias()==true){
            cout<<"La oficina tiene sala de conferencia."<<endl<<endl;
        }
}