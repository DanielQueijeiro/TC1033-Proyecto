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
    int op = 0;
    int _size = 0;
    int _precio = 0;
    int _pisos = 0;
    int _baños = 0;
    int _habitaciones = 0;
    int _estacionamiento = 0;
    int _cubiculos = 0;
    int _maquinasExpendedoras = 0;
    bool _sotano;
    bool _terraza;
    bool _salaConferencias;
    string checkBool;
    int numEdificio = 0;

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
        //Ver edificios
        if(op==1){
            system("cls");
            cout<<"Edificios"<<endl;
        }
        
        //Ver datos
        else if (op==2)
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
        
        //Añadir edificios
        else if (op==3)
        {   
            system("cls");
            cout<<"La inmobiliaria tiene un maximo de 3 edificios de cada tipo"<<endl;
            cout<<"Ingrese el tipo de edificio que desea agregar"<<endl;
            cout<<"1.- Casa"<<endl;
            cout<<"2.- Departamento"<<endl;
            cout<<"3.- Oficina"<<endl;
            cin>>op;
            if (op==1){
                //Casas(int _estacionamiento, int _baños, int _habitaciones, bool _sotano): Edificio(0,0,0){
                cout<<"Ingrese el espacio donde quiere agregar la casa (1-3)"<<endl;
                cin>>numEdificio;
                if (numEdificio==1){
                    system("cls");
                    cout<<"Ingrese los datos de la casa 1"<<endl;
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
                    c1.setPisos(_pisos);
                    c1.setPrecio(_precio);
                    c1.setSize(_size);
                    c1.setBaños(_baños);
                    c1.setEstacionamiento(_estacionamiento);
                    c1.setHabitaciones(_habitaciones);
                    c1.setSotano(_sotano);
                    cout<<"Casa 1 guardada con los siguientes datos"<<endl;
                    c1.imprimeDatos();
                }
                if (numEdificio==2){
                    system("cls");
                    cout<<"Ingrese los datos de la casa 2"<<endl;
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
                    c2.setPisos(_pisos);
                    c2.setPrecio(_precio);
                    c2.setSize(_size);
                    c2.setBaños(_baños);
                    c2.setEstacionamiento(_estacionamiento);
                    c2.setHabitaciones(_habitaciones);
                    c2.setSotano(_sotano);
                    cout<<"Casa 2 guardada con los siguientes datos"<<endl;
                    c2.imprimeDatos();
                }
                if (numEdificio==3){
                    system("cls");
                    cout<<"Ingrese los datos de la casa 3"<<endl;
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
                    c3.setPisos(_pisos);
                    c3.setPrecio(_precio);
                    c3.setSize(_size);
                    c3.setBaños(_baños);
                    c3.setEstacionamiento(_estacionamiento);
                    c3.setHabitaciones(_habitaciones);
                    c3.setSotano(_sotano);
                    cout<<"Casa 3 guardada con los siguientes datos"<<endl;
                    c3.imprimeDatos();
                }
            }
            else if (op==2){
                //departamento
                cout<<"Ingrese el espacio donde quiere agregar el departamento (1-3)"<<endl;
                cin>>numEdificio;
                if (numEdificio==1){
                    system("cls");
                    cout<<"Ingrese los datos del departamento 1"<<endl;
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
                    cout<<"Tiene terraza? (y/n): "<<endl;
                    cin>>checkBool;
                    if(checkBool=="y"){
                        _terraza=true;
                    }
                    else if(checkBool!="y"){
                        _terraza=false;
                    }
                    system("cls");
                    d1.setPisos(_pisos);
                    d1.setPrecio(_precio);
                    d1.setSize(_size);
                    d1.setBaños(_baños);
                    d1.setHabitaciones(_habitaciones);
                    d1.setTerraza(_terraza);
                    cout<<"Departamento 1 guardado con los siguientes datos"<<endl;
                    d1.imprimeDatos();
                }
                if (numEdificio==2){
                    system("cls");
                    cout<<"Ingrese los datos del departamento 2"<<endl;
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
                    cout<<"Tiene terraza? (y/n): "<<endl;
                    cin>>checkBool;
                    if(checkBool=="y"){
                        _terraza=true;
                    }
                    else if(checkBool!="y"){
                        _terraza=false;
                    }
                    system("cls");
                    d2.setPisos(_pisos);
                    d2.setPrecio(_precio);
                    d2.setSize(_size);
                    d2.setBaños(_baños);
                    d2.setHabitaciones(_habitaciones);
                    d2.setTerraza(_terraza);
                    cout<<"Departamento 2 guardado con los siguientes datos"<<endl;
                    d2.imprimeDatos();
                }
                if (numEdificio==3){
                    system("cls");
                    cout<<"Ingrese los datos del departamento 3"<<endl;
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
                    cout<<"Tiene terraza? (y/n): "<<endl;
                    cin>>checkBool;
                    if(checkBool=="y"){
                        _terraza=true;
                    }
                    else if(checkBool!="y"){
                        _terraza=false;
                    }
                    system("cls");
                    d3.setPisos(_pisos);
                    d3.setPrecio(_precio);
                    d3.setSize(_size);
                    d3.setBaños(_baños);
                    d3.setHabitaciones(_habitaciones);
                    d3.setTerraza(_terraza);
                    cout<<"Departamento 3 guardado con los siguientes datos"<<endl;
                    d3.imprimeDatos();
                }
            }
            else if (op==3){
                //oficina
                cout<<"Ingrese el espacio donde quiere agregar la oficina (1-3)"<<endl;
                cin>>numEdificio;
                if (numEdificio==1){
                    system("cls");
                    cout<<"Ingrese los datos de la oficina 1"<<endl;
                    cout<<"Metros cuadrados: "<<endl;
                    cin>>_size;
                    cout<<"Precio: "<<endl;
                    cin>>_precio;
                    cout<<"Pisos: "<<endl;
                    cin>>_pisos;
                    cout<<"Cubiculos: "<<endl;
                    cin>>_cubiculos;
                    cout<<"Maquinas expendedoras: "<<endl;
                    cin>>_maquinasExpendedoras;
                    cout<<"Tiene sala de conferencias? (y/n): "<<endl;
                    cin>>checkBool;
                    if(checkBool=="y"){
                        _salaConferencias=true;
                    }
                    else if(checkBool!="y"){
                        _salaConferencias=false;
                    }
                    system("cls");
                    o1.setPisos(_pisos);
                    o1.setPrecio(_precio);
                    o1.setSize(_size);
                    o1.setMaquinasExpendedoras(_maquinasExpendedoras);
                    o1.setCubiculos(_cubiculos);
                    o1.setSalaConferencias(_salaConferencias);
                    cout<<"Oficina 1 guardada con los siguientes datos"<<endl;
                    o1.imprimeDatos();
                }
                if (numEdificio==2){
                    system("cls");
                    cout<<"Ingrese los datos de la oficina 2"<<endl;
                    cout<<"Metros cuadrados: "<<endl;
                    cin>>_size;
                    cout<<"Precio: "<<endl;
                    cin>>_precio;
                    cout<<"Pisos: "<<endl;
                    cin>>_pisos;
                    cout<<"Cubiculos: "<<endl;
                    cin>>_cubiculos;
                    cout<<"Maquinas expendedoras: "<<endl;
                    cin>>_maquinasExpendedoras;
                    cout<<"Tiene sala de conferencias? (y/n): "<<endl;
                    cin>>checkBool;
                    if(checkBool=="y"){
                        _salaConferencias=true;
                    }
                    else if(checkBool!="y"){
                        _salaConferencias=false;
                    }
                    system("cls");
                    o2.setPisos(_pisos);
                    o2.setPrecio(_precio);
                    o2.setSize(_size);
                    o2.setMaquinasExpendedoras(_maquinasExpendedoras);
                    o2.setCubiculos(_cubiculos);
                    o2.setSalaConferencias(_salaConferencias);
                    cout<<"Oficina 2 guardada con los siguientes datos"<<endl;
                    o2.imprimeDatos();
                }
                if (numEdificio==3){
                    system("cls");
                    cout<<"Ingrese los datos de la oficina 3"<<endl;
                    cout<<"Metros cuadrados: "<<endl;
                    cin>>_size;
                    cout<<"Precio: "<<endl;
                    cin>>_precio;
                    cout<<"Pisos: "<<endl;
                    cin>>_pisos;
                    cout<<"Cubiculos: "<<endl;
                    cin>>_cubiculos;
                    cout<<"Maquinas expendedoras: "<<endl;
                    cin>>_maquinasExpendedoras;
                    cout<<"Tiene sala de conferencias? (y/n): "<<endl;
                    cin>>checkBool;
                    if(checkBool=="y"){
                        _salaConferencias=true;
                    }
                    else if(checkBool!="y"){
                        _salaConferencias=false;
                    }
                    system("cls");
                    o3.setPisos(_pisos);
                    o3.setPrecio(_precio);
                    o3.setSize(_size);
                    o3.setMaquinasExpendedoras(_maquinasExpendedoras);
                    o3.setCubiculos(_cubiculos);
                    o3.setSalaConferencias(_salaConferencias);
                    cout<<"Oficina 3 guardada con los siguientes datos"<<endl;
                    o3.imprimeDatos();
                }
            }
            else{
                system("cls");
                cout<<"Ingrese un valor valido"<<endl;
            }
            cout<<"1.- Regresar a menu principal"<<endl;
            cout<<"2.- Salir"<<endl;
            cin>>op;
            if(op==1){

            }
            else if(op==2){
                cout<<"Gracias por usar el sistema"<<endl;
                break;
            }
        }
        
        //Eliminar edificios
        else if(op==4){
            system("cls");
            cout<<"Seleccione el edificio que desea eliminar"<<endl;
            cout<<"1.- Casa"<<endl;
            cout<<"2.- Departamento"<<endl;
            cout<<"3.- Oficina"<<endl;
            cin>>op;
            if (op==1){
                cout<<"Seleccione que casa quiere eliminar (1-3)"<<endl;
                cin>>numEdificio;
                if (numEdificio==1){
                    c1.setPisos(0);
                    c1.setPrecio(0);
                    c1.setSize(0);
                    c1.setBaños(0);
                    c1.setEstacionamiento(0);
                    c1.setHabitaciones(0);
                    c1.setSotano(false);
                    cout<<"La casa 1 ha sido eliminada"<<endl;
                }
                else if (numEdificio==2){
                    c2.setPisos(0);
                    c2.setPrecio(0);
                    c2.setSize(0);
                    c2.setBaños(0);
                    c2.setEstacionamiento(0);
                    c2.setHabitaciones(0);
                    c2.setSotano(false);
                    cout<<"La casa 2 ha sido eliminada"<<endl;
                }
                else if (numEdificio==3){
                    c3.setPisos(0);
                    c3.setPrecio(0);
                    c3.setSize(0);
                    c3.setBaños(0);
                    c3.setEstacionamiento(0);
                    c3.setHabitaciones(0);
                    c3.setSotano(false);
                    cout<<"La casa 3 ha sido eliminada"<<endl;
                }
            }
            else if (op==2){
                cout<<"Seleccione que departamento quiere eliminar (1-3)"<<endl;
                cin>>numEdificio;
                if (numEdificio==1){
                    d1.setPisos(0);
                    d1.setPrecio(0);
                    d1.setSize(0);
                    d1.setBaños(0);
                    d1.setHabitaciones(0);
                    d1.setTerraza(false);
                    cout<<"El departamento 1 ha sido eliminado"<<endl;
                }
                else if (numEdificio==2){
                    d2.setPisos(0);
                    d2.setPrecio(0);
                    d2.setSize(0);
                    d2.setBaños(0);
                    d2.setHabitaciones(0);
                    d2.setTerraza(false);
                    cout<<"El departamento 2 ha sido eliminado"<<endl;
                }
                else if (numEdificio==3){
                    d3.setPisos(0);
                    d3.setPrecio(0);
                    d3.setSize(0);
                    d3.setBaños(0);
                    d3.setHabitaciones(0);
                    d3.setTerraza(false);
                    cout<<"El departamento 3 ha sido eliminado"<<endl;
            }
        }
            else if (op==3){
                cout<<"Seleccione que oficina quiere eliminar (1-3)"<<endl;
                cin>>numEdificio;
                if (numEdificio==1){
                    o1.setPisos(0);
                    o1.setPrecio(0);
                    o1.setSize(0);
                    o1.setCubiculos(0);
                    o1.setMaquinasExpendedoras(0);
                    o1.setSalaConferencias(false);
                    cout<<"La oficina 1 ha sido eliminada"<<endl;
                }
                else if (numEdificio==2){
                    o2.setPisos(0);
                    o2.setPrecio(0);
                    o2.setSize(0);
                    o2.setCubiculos(0);
                    o2.setMaquinasExpendedoras(0);
                    o2.setSalaConferencias(false);
                    cout<<"La oficina 2 ha sido eliminada"<<endl;
                }
                else if (numEdificio==3){
                    o3.setPisos(0);
                    o3.setPrecio(0);
                    o3.setSize(0);
                    o3.setCubiculos(0);
                    o3.setMaquinasExpendedoras(0);
                    o3.setSalaConferencias(false);
                    cout<<"La oficina 3 ha sido eliminada"<<endl;
            }
        } 
        }         
        
        //Salir programa
        else if (op==5)
        {
            cout<<"Gracias por usar el sistema"<<endl;
            break;
        }     
        
        //Input invalido
        else{
            system("cls");
            cout<<"Ingrese un valor valido"<<endl;

        }     
    }
    
}