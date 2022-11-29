#include<iostream>
#include<windows.h>
#include"Inmobiliaria.h"
#include<windows.h>
#include<cstdlib>
using namespace std;

int main(){
    int op;
    Casas c1;
    while (true)
    {
        cout<<"Bienvenido al sistema de Inmobiliaria ABC"<<endl;
        cout<<"Por favor ingrese lo que desea realizar"<<endl;
        cout<<"1.- Ver edificios disponibles"<<endl;
        cout<<"2.- Agregar edificios"<<endl;
        cout<<"3.- Salir"<<endl;
        cin>>op;
        if (op==1)
        //Ver edificios
        {
            

            // if(c1.imprimeDatos()==""){
            //     cout<<"No hay ningun edificio registrado"<<endl;
            // }
            // else{
            // c1.imprimeDatos();
            // }
            break;
        }
        else if (op==2)
        //Añadir
        {   
            system("cls");
            cout<<"Ingrese el tipo de edificio que desea agregar"<<endl;
            cout<<"1.- Casa"<<endl;
            cout<<"2.- Departamento"<<endl;
            cout<<"3.- Oficina"<<endl;
            cin>>op;
            if (op==1){
                //casa
                system("cls");
                cout<<"Ingrese los datos de la casa"<<endl;
                cout<<"Metros cuadrados: "<<endl;
                cout<<"Precio: "<<endl;
                cout<<"Pisos: "<<endl;
                cout<<"Habitaciones: "<<endl;
                cout<<"Baños: "<<endl;
                cout<<"Estacionamientos: "<<endl;
                cout<<"Tiene sotano? (y/n): "<<endl;
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
        else if (op==3)
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