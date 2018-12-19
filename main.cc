// Para los flujos de entrada y salida y para usar locale
#include <iostream>
#include "Agenda.h"
#include <string>
#include "alumno.h"

#include <vector>

#include "macros.hpp"
using namespace std;



/*! 
	\brief   Programa principal de la práctica 1: provincia y municipios
	\return  int
*/
int menu();

int main(){

	int opcion;
	Agenda ag;

if(ag.mainmenu()==true){

	do{
		// Se elige la opción del menún
		opcion = menu();		

		std::cout << CLEAR_SCREEN;
		PLACE(3,1);

		// Se ejecuta la opción del menú elegida
		switch(opcion)
		{
			case 0: 
					std::cout << INVERSE;
					std::cout << "Fin del programa" << std::endl;
					std::cout << RESET;
			break;

		   ///////////////////////////////////////////////////////////////////

			case 1: 
					std::cout << "[1] Buscar por dni del Alumno" << std::endl;
					ag.buscarDNI();

					break;

			//////////////////////////////////////////////////////////////////////////////
			case 2: 
					std::cout << "[2] Buscar por apellido del alumno" << std::endl;
					ag.buscarApellido();

				break;

			case 3: 
					std::cout << "[3] Cargar copia de seguridad" << std::endl;
						ag.cargar_backup();

					break;

			//////////////////////////////////////////////////////////////////////////////
			case 4: 
				  	std::cout << "[4] Guardar copia de seguridad " << std::endl;
				  	ag.guardarEnFichero();

					break;

			case 5: 
				  	std::cout << "[5] Modificar datos del Alumno" << std::endl; 
				  	ag.ModificaAlumno();

					break;


			//////////////////////////////////////////////////////////////////////////////
			case 6: 
					std::cout << "[6] Insertar Alumno" << std::endl;
					ag.insertar();

					break;


			case 7: 
					std::cout << "[7] Borrar Alumno " << std::endl;
					ag.eliminarAlumno();
					break;

			//////////////////////////////////////////////////////////////////////////////
			case 8: 
					std::cout << "[8] Gestionar líderes " << std::endl;
					ag.gestionarLideres();

					break;

			case 9: 
					std::cout << "[9] Mostrar Todos " << std::endl;
					ag.MostrarTodos();

					break;

			case 10: 
					std::cout << "[10] Mostrar uno" << std::endl;
					ag.MostrarAlumno();
					break;

			//////////////////////////////////////////////////////////////////////////////
			default:
				std::cout << BIRED;
				std::cout << "Opción incorrecta ";
				std::cout << RESET;
				std::cout << "--> ";
			  	std::cout << ONIRED;
				std::cout << opcion << std::endl;
				std::cout << RESET;
     }
  
    if (opcion !=0)
    {
		PLACE(25,1);
		std::cout << "Pulse ";
		std::cout << BIGREEN;
		std::cout << "ENTER";
		std::cout << RESET;
		std::cout << " para mostrar el ";
		std::cout << INVERSE;
		std::cout << "menú"; 
		std::cout << RESET;

		// Pausa
		std::cin.ignore();

		std::cout << CLEAR_SCREEN;
    }
	  }while(opcion!=0);
}else{
	exit(-1);
}

	return 0;
}


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
	std::cout <<  "[1] Buscar por dni del Alumno";

	PLACE(posicion++,10);
	std::cout << "[2] Buscar por apellido del alumno";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	std::cout << YELLOW << "[3] Cargar copia de seguridad";
 
	PLACE(posicion++,10);
	std::cout << YELLOW << "[4] Guardar copia de seguridad";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	std::cout << RESET <<  "[5] Modificar datos del Alumno";

	PLACE(posicion++,10);
	std::cout << "[6] Insertar Alumno";

	PLACE(posicion++,10);
	std::cout << "[7] Borrar Alumno";

	PLACE(posicion++,10);
	std::cout << "[8] Gestionar líderes";

	PLACE(posicion++,10);
	std::cout << "[9] Mostrar Todos";

	PLACE(posicion++,10);
	std::cout << "[10] Mostrar Uno";

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