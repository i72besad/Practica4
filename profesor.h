//Clase profesor.h realizada por Jorge Jesús Chaparro Ibarra
//La clase Profesor hereda la clase Persona

#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include <string>
#include <iostream>

using namespace std;

class Profesor:public Persona{
private:
	int ID_;
	bool Rol_;
public:
	//Constructor de la Clase Profesor
	Profesor(string DNI="", string nombre="", string apellidos="", int telefono=0, string direccion="",
		string email="", int ID=0, bool Rol=false, int postal=0, string nacimiento=""):Persona(DNI, nombre, apellidos, telefono, 
		email, direccion, postal, nacimiento){ID_=ID; Rol_=Rol;};

	//Set y Get de Rol
		inline bool setRol();
		inline bool getRol(){return Rol_;};

	//Set y Get de ID
		inline void setID();
		inline int getID(){return ID_;};
};

#endif