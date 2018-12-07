
#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
#include <string>
#include <iostream>

using namespace std;

class Jugador: public Persona{

private:
	
	bool lider_;
	int CursoMasAlto_;
	int Equipo_;

public:
	bool setlider();
	void getLider();
	int setCursoMasAlto();
	void getCursoMasAlto();
	int setEquipo();
	void getEquipo();

}; 
	
#endif
