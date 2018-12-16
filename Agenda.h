//Clase Agenda

#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <string>
#include <vector>


#include "alumno.h"

using namespace std;

class Agenda {
private:
	std::vector <Alumno> alumnos_;
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
	bool mainmenu();
	bool login();

	//Funciones del Vector de alumnos
	
	void insertar();
	bool comprobarDNI(string nuevo_dni);
	char letraDNI(int dni);
	void ModificaAlumno();
	void MostrarAlumno();
	void MostrarTodos();
	void gestionarLideres();
	int buscarDNI();
	int buscarApellido();
	inline int tamVect(){return alumnos_.size();};
	void eliminarAlumno();

	//Funciones de la Copia de Seguridad
	
	//void GuardarCopia();
	//void CargarCopia();
	void guardarEnFichero();
	//void cargarDeFichero();
	void cargar_backup();

};

#endif
