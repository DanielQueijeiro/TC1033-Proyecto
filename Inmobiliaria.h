#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>
#include<sstream>
#include"Conjunto.h"
using namespace std;


class Inmobiliaria{
    private:
        Casas casas[3];
        Departamentos departamentos[3];
        Oficinas oficinas[3];
        string nombre;
    public:
        Inmobiliaria(){
            nombre = "";
        }
    void setNombre(string _nombre){
        nombre = _nombre;
    }
    void agregarCasa(Casas casa, int posicion){
        casas[posicion]=casa;
    }

    void agregarDepartamentos(Departamentos departamento, int posicion){
        departamentos[posicion]=departamento;
    }

    void agregarOficinas(Oficinas oficina, int posicion){
        oficinas[posicion]=oficina;
    }

    string cantidadCasas(){
    stringstream aux;
    for(int i=1; i<4; i++){
        aux<<"Casa "<<i<<"\n"<<casas[i].getCasasInfo()<<endl;
    }
    return aux.str();
}

    string cantidadDepartamentos(){
    stringstream aux;
    for(int i=1; i<4; i++){
        aux<<"Departamento "<<i<<"\n"<<departamentos[i].getDepartamentosInfo()<<endl;
    }
    return aux.str();
}
    string cantidadOficinas(){
    stringstream aux;
    for(int i=1; i<4; i++){
        aux<<"Oficina "<<i<<"\n"<<oficinas[i].getOficinasInfo()<<endl;
    }
    return aux.str();
}

};