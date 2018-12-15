


#include <iostream>
#include <string>  

// Para usar atoi
#include <stdlib.h>
#include "Agenda.h"
#include "funcionesAuxiliares.h"

#include <vector>

#include "macros.hpp"

using namespace std;

int menu()
{
	int opcion;
	int posicion;

	// Se muestran las opciones del menú
	posicion=2;

	// Se borra la pantalla
	std::cout << CLEAR_SCREEN;

	PLACE(1,10);
	std::cout << BIBLUE;
	std::cout << "Programa principal | Opciones del menú";
	std::cout << RESET;

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	std::cout <<  "[1] Buscar Alumno";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	std::cout << "[2] Guardar copia de seguridad";

	PLACE(posicion++,10);
	std::cout << "[3] Cargar copia de seguridad";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;
 
	PLACE(posicion++,10);
	std::cout << "[4] Mostrar Alumnos";

	PLACE(posicion++,10);
	std::cout <<  "[5] Modificar datos del Alumno";

	PLACE(posicion++,10);
	std::cout << "[6] Insertar Alumno";

	PLACE(posicion++,10);
	std::cout << "[7] Borrar Alumno";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	std::cout << "[8] Gestionar líderes";

	PLACE(posicion++,10);
	std::cout << "[9] Por si falta algo";

	PLACE(posicion++,10);
	std::cout << "[10] Por si falta algo";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	std::cout << BIRED << "[0] Salir";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	std::cout << BIGREEN;
	std::cout << "Opción: ";
	std::cout << RESET;

	// Se lee el número de opción
	std::cin >> opcion;

    // Se elimina el salto de línea del flujo de entrada
    std::cin.ignore();

	return opcion;
}



int buscar(Agenda ag){

	int opc,aux;

	cout<<"¿Buscar por apellido o por DNI?"<<endl;
	cout <<"1-->DNI   0--->Apellido"<<endl;
	cin>>opc;
	cin.ignore();
	while(opc>1 || opc<0){
		cout<<"Mal escrito, escoja la opción correcta"<<endl;
		cout <<"1-->DNI   0--->Apellido"<<endl;
	}
	if(opc==1){
		aux=ag.buscarDNI();
		return aux;
	}if(opc==0){
		aux=ag.buscarApellido();
		return aux;
	}
}

void Modificar(Agenda ag){
	cout << "Cargando el Menú de Modificación...\n" << endl;
	ag.ModificaAlumno();
}

void Mostrar(Agenda ag){
	int opc;
	cout << "..:Menú de Mostrar Alumnos:..\n" << endl;
	cout << "Elige la opción deseada: \n 0.- Mostrar un Alumno.\n 1.- Mostrar todos los alumnos.\n" << endl;
	cin >>opc;
	cin.ignore();
	int pos = buscar(ag);

	if(opc==0){
		
		ag.MostrarAlumno(pos);
	}else if(opc==1){
		ag.MostrarTodos();
	}else{
		cout << "..:ERROR:..\n La opción no está disponible." << endl;
		exit(-1);
	}
}


void insertarAlumno(Agenda ag)
{

	ag.insertar();


}

void gestionarLiderAlumno(Agenda ag)
{

	int equipo;


	cout<<"Introduce el numero del equipo:"<<endl;
	cin>>equipo;
	cin.ignore();


	ag.gestionarLideres();



}


void eliminar(Agenda ag)
{
	
	
	ag.eliminarAlumno();




}
