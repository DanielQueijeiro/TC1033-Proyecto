#include<iostream>
#include<windows.h>
#include"Inmobiliaria.h"
#include<windows.h>
#include<cstdlib>
using namespace std;

int main(){
    system("cls");
    //Casas(int _estacionamiento, int _baños, int _habitaciones, bool _sotano)
    Casas c1(2,3,4,true);
    Casas c2(0,0,0,false);
    Casas c3(0,0,0,false);
    //Departamentos(bool _terraza, int _habitaciones, int _baños)
    Departamentos d1(true,2,2);
    Departamentos d2(false,0,0);
    Departamentos d3(false,0,0);
    //Oficinas(bool _salaConferencias, int _maquinasExpendedoras, int _cubiculos)
    Oficinas o1(true,4,10);
    Oficinas o2(false,0,0);
    Oficinas o3(false,0,0);
    int op;
    int _size;
    int _precio;
    int _pisos;
    int _baños;
    int _habitaciones;
    int _estacionamiento;
    int _cubiculos;
    int _maquinasExpendedoras;
    bool _sotano;
    bool _terraza;
    bool _salaConferencias;
    string checkBool;
    string nombreEdificio;

    while (true)
    {
        cout<<"Bienvenido al sistema de Inmobiliaria ABC"<<endl;
        cout<<"Por favor ingrese lo que desea realizar"<<endl;
        cout<<"1.- Ver edificios disponibles"<<endl;
        cout<<"2.- Ver datos de los edificios"<<endl;
        cout<<"3.- Agregar edificios"<<endl;
        cout<<"4.- Eliminar edificios"<<endl;
        cout<<"5.- Salir"<<endl;
        cin>>op;

        if(op==1){

        }

        if (op==2)
        //Ver edificios
        {
            system("cls");
            if((c1.getHabitaciones()==0)){
                cout<<"Casa 1 no tiene datos"<<endl<<endl;
            }
            else if(c1.getHabitaciones()!=0){
                cout<<"Datos casa 1"<<endl;
                c1.imprimeDatos();
                cout<<endl;
            }

            if((c2.getHabitaciones()==0)){
                cout<<"Casa 2 no tiene datos"<<endl<<endl;
            }
            else if(c2.getHabitaciones()!=0){
                cout<<"Datos casa 2"<<endl;
                c2.imprimeDatos();              
                cout<<endl;  
            }
    
            if((c3.getHabitaciones()==0)){
                cout<<"Casa 3 no tiene datos"<<endl<<endl;
            }
            else if(c3.getHabitaciones()!=0){
                cout<<"Datos casa 3"<<endl;
                c3.imprimeDatos();                
                cout<<endl;
            }
            if((d1.getHabitaciones()==0)){
                cout<<"Departamento 1 no tiene datos"<<endl<<endl;
            }
            else if(d1.getHabitaciones()!=0){
                cout<<"Datos departamento 1"<<endl;
                d1.imprimeDatos();
                cout<<endl;                
            }

            if((d2.getHabitaciones()==0)){
                cout<<"Departamento 2 no tiene datos"<<endl<<endl;
            }
            else if(d2.getHabitaciones()!=0){
                cout<<"Datos departamento 2"<<endl;
                d2.imprimeDatos();              
                cout<<endl;  
            }

            if((d3.getHabitaciones()==0)){
                cout<<"Departamento 3 no tiene datos"<<endl<<endl;
            }
            else if(d3.getHabitaciones()!=0){
                cout<<"Datos departamento 3"<<endl;
                d3.imprimeDatos();                
                cout<<endl;
            }
            if((o1.getCubiculos()==0)){
                cout<<"Oficina 1 no tiene datos"<<endl<<endl;
            }
            else if(o1.getCubiculos()!=0){
                cout<<"Datos oficina 1"<<endl;
                o1.imprimeDatos();
                cout<<endl;                
            }

            if((o2.getCubiculos()==0)){
                cout<<"Oficina 2 no tiene datos"<<endl<<endl;
            }
            else if(o2.getCubiculos()!=0){
                cout<<"Datos oficina 2"<<endl;
                o2.imprimeDatos();
                cout<<endl;                
            }

            if((o3.getCubiculos()==0)){
                cout<<"Oficina 3 no tiene datos"<<endl<<endl;
            }
            else if(o3.getCubiculos()!=0){
                cout<<"Datos oficina 3"<<endl;
                o3.imprimeDatos();
                cout<<endl;                
            }

        }
        else if (op==3)
        //Añadir
        {   
            system("cls");
            cout<<"La inmobiliaria tiene un maximo de 3 edificios de cada tipo"<<endl;
            cout<<"Ingrese el tipo de edificio que desea agregar"<<endl;
            cout<<"1.- Casa"<<endl;
            cout<<"2.- Departamento"<<endl;
            cout<<"3.- Oficina"<<endl;
            cin>>op;
            if (op==1){
                //casa
                //Casas(int _estacionamiento, int _baños, int _habitaciones, bool _sotano): Edificio(0,0,0){
                system("cls");
                cout<<"Ingrese los datos de la casa"<<endl;
                cout<<"Nombre de la casa"<<endl;
                cin>>nombreEdificio;
                cout<<"Metros cuadrados: "<<endl;
                cin>>_size;
                cout<<"Precio: "<<endl;
                cin>>_precio;
                cout<<"Pisos: "<<endl;
                cin>>_pisos;
                cout<<"Habitaciones: "<<endl;
                cin>>_habitaciones;
                cout<<"Baños: "<<endl;
                cin>>_baños;
                cout<<"Estacionamientos: "<<endl;
                cin>>_estacionamiento;
                cout<<"Tiene sotano? (y/n): "<<endl;
                cin>>checkBool;
                if(checkBool=="y"){
                    _sotano=true;
                }
                else if(checkBool!="y"){
                    _sotano=false;
                }
                system("cls");
                Casas c1(_estacionamiento, _baños, _habitaciones, _sotano);
                c1.setPisos(_pisos);
                c1.setPrecio(_precio);
                c1.setSize(_size);
                c1.imprimeDatos();
                break;
            }
            if (op==2){
                //departamento
                system("cls");
                cout<<"Ingrese los datos de la casa"<<endl;
                cout<<"Metros cuadrados: "<<endl;
                cout<<"Precio: "<<endl;
                cout<<"Pisos: "<<endl;
                cout<<"Habitaciones: "<<endl;
                cout<<"Baños: "<<endl;
                cout<<"Tiene terraza? (y/n): "<<endl;
                break;
            }
            if (op==3){
                //oficina
                system("cls");
                cout<<"Ingrese los datos de la casa"<<endl;
                cout<<"Metros cuadrados: "<<endl;
                cout<<"Precio: "<<endl;
                cout<<"Pisos: "<<endl;
                cout<<"Cubiculos: "<<endl;
                cout<<"Maquinas expendedoras: "<<endl;
                cout<<"Tiene sala de conferencias? (y/n): "<<endl;
                break;
            }
            else{
            system("cls");
            cout<<"Ingrese un valor valido"<<endl;

        }   
        }
        else if(op==4){
            //eliminar
            system("cls");
            cout<<"Seleccione el edificio que desea eliminar"<<endl;
            break;

        }        
        else if (op==5)
        {
            cout<<"Gracias por usar el sistema"<<endl;
            break;
        }     
        else{
            system("cls");
            cout<<"Ingrese un valor valido"<<endl;

        }     
    }
    
}