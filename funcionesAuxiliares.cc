
#include <iostream>
#include <string>  

// Para usar atoi
#include <stdlib.h>

#include "funciones.h"


#include "macros.hpp"



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

