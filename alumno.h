
#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
#include <string>
#include <iostream>

using namespace std;

class Alumno: public Persona{

private:
	
	bool lider_;
	int CursoMasAlto_;
	int Equipo_;

public:
	Alumno(string DNI, string nombre, string apellidos, int telefono,
	string email, string direccion, int postal, string nacimiento, int CursoMasAlto,int Equipo, bool lider): Persona(DNI, nombre,apellidos,
	telefono,email,direccion,postal, nacimiento)
	{lider_=lider; CursoMasAlto_=CursoMasAlto; Equipo_=Equipo;};

	inline void setlider(bool lider){lider_=lider;};
	inline bool getLider(){return lider_;};

	inline void setCursoMasAlto(int CursoMasAlto){CursoMasAlto_=CursoMasAlto;};
	inline int getCursoMasAlto(){return CursoMasAlto_;};

	inline void setEquipo(int Equipo){Equipo_=Equipo;};
	inline int getEquipo(){return Equipo_;};

}; 
	
#endif
