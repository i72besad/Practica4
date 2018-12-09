//persona.h
//La clase persona representa a una persona y sus datos que lo diferencian

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona{

private:

	string DNI_,nombre_,apellidos_,direccion_,localidad_,provincia_,pais_;

public:
	Persona(string DNI, string nombre="",string apellidos="",string direccion ="",string localidad="",string provincia="",string pais=""){DNI_=DNI; nombre_=nombre; apellidos_=apellidos; direccion_=direccion; localidad_=localidad; provincia_=provincia; pais_=pais;};
	
	//set y get de la variable DNI
	inline string getDNI() { return DNI_;};
	inline void setDNI(string DNI){DNI_=DNI;};
	
	//set y get de la variable nombre
	inline string getNombre() { return nombre_;};
	inline void setNombre(string nombre){nombre_=nombre;};
	
	
	//set y get de la variable apellidos
	inline string getApellidos() { return apellidos_;};
	inline void setApellidos(string apellidos){apellidos_=apellidos;};
	
	//set y get de la variable direccion
	inline string getDireccion() { return direccion_;};
	inline void setDireccion(string direccion){direccion_=direccion;};
	
	//set y get de la variable localidad
	inline string getLocalidad() { return localidad_;};
	inline void setLocalidad(string localidad){localidad_=localidad;};
	
	//set y get de la variable provincia
	inline string getProvincia() { return provincia_;};
	inline void setProvincia(string provincia){provincia_=provincia;};
	
	//set y get de la variable pais
	inline string getPais() { return pais_;};
	inline void setPais(string pais){pais_=pais;};
	
	//get de apellidos y nombre
	inline string getApellidosyNombre() {
	
	string aux;
	aux=apellidos_ +", "+ nombre_;
	
	return aux;}	
	
	
	};
	
#endif	
