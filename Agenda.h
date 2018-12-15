//Clase Agenda realizada por Jorge Jesús Chaparro Ibarra

#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <string>
#include <vector>


#include "alumno.h"

using namespace std;

class Agenda {
private:
	vector <Alumno> alumnos_;
	string usuario_;
	string password_;
public:
	//Constructor de la Clase Agenda
	Agenda(){usuario_=""; password_="";}

	//get y set de la variable Usuario
	inline string getUsuario(){return usuario_;}

	//get y set de la variable contraseña
	inline string getContra(){return password_;}

	//Función Register
	void mainmenu();
	bool login();
	void registerme();
	void registerpassword(string usuario);
	void writetofile(string usuario, string password);
	inline int tamVect(){return alumnos_.size()};

};

#endif