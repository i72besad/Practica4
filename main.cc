
// Para los flujos de entrada y salida y para usar locale
#include <iostream>


#include <string>



#include "funciones.h"
#include "macros.hpp"



/*! 
	\brief   Programa principal de la práctica 1: provincia y municipios
	\return  int
*/
int main(){


	int opcion;

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
					std::cout << "[1] Buscar Alumno" << std::endl;


					break;

			//////////////////////////////////////////////////////////////////////////////
			case 2: 
					std::cout << "[2] Guardar copia de seguridad" << std::endl;
					GuardarCopia();

				break;

			case 3: 
					std::cout << "[3] Cargar copia de seguridad" << std::endl;
					CargarCopia();

					break;

			//////////////////////////////////////////////////////////////////////////////
			case 4: 
				  	std::cout << "[4] Mostrar Alumno: " << std::endl; 

					break;

			case 5: 
				  	std::cout << "[5] Modificar datos del Alumno: " << std::endl; 

					break;


			//////////////////////////////////////////////////////////////////////////////
			case 6: 
					std::cout << "[6] Insertar Alumno:" << std::endl;

					break;


			case 7: 
					std::cout << "[7] Borrar Alumno: " << std::endl;

					break;

			//////////////////////////////////////////////////////////////////////////////
			case 8: 
					std::cout << "[8] Gestionar líderes: " << std::endl;

					break;

			case 9: 
					std::cout << "[9] Por si falta algo " << std::endl;

					break;

			case 10: 
					std::cout << "[10] Por si falta algo" << std::endl;

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

	return 0;
}


