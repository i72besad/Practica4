//Función Modificar Alumno hecha por Jorge Jesús Chaparro Ibarra

#include "alumno.h"
#include "Buscar_Alumno.h"

#include <iostream>
#include <string>
#include <list>



list <Alumno> ModificaAlumno(){

	string auxs;
	int auxi;
	list <Alumno> clase = BuscarAlumnos();

	for(list <Alumno>::iterator i=clase.begin(); i!=clase.end(); it++){

		int opcion;

		do {
			cout << "Elige el atributo del Alumno que desea modificar: \n" << endl;
			
			cout << "1. DNI:" << it->getDNI() << "\n" << endl;
			cout << "2. Nombre:" << it->getNombre() << "\n" << endl;
			cout << "3. Apellidos:" << it->getApellidos() << "\n" << endl;
			cout << "4. Teléfono:" << it->getTelefono() << "\n" <<endl;
			cout << "5. Dirección:" << it->getDireccion() << "\n" << endl;
			cout << "6. eMail:" << it->getEmail() << "\n" << endl;
			cout << "7. Curso más Alto matriculado:" << it->getCurso() << "\n" << endl;
			cout << "8. Número de equipo:" << it->getNequipo() << "\n" << endl;
			cout << "9. Líder de equipo: ";
			if(it->getLider()==true){
				cout << "Sí" << endl;
			}else{
				cout << "No" << endl;
			}
			cout << "0. Guardar alumno y salir." << "\n" << endl;

			cout << "Introduce el número de la Opción: ";
			cin >> opcion;

			switch (opcion) {
				case '1':
					cout << "Introduce el nuevo DNI:  \n";
					cin >> auxs;
					(*it).setDNI(auxs);
					break;

				case '2':
					cout << "Introduce el nuevo Nombre:  \n";
					cin >> auxs;
					(*it).setNombre(auxs);
					break;

				case '3':
					cout << "Introduce los nuevos Apellidos: \n";
					cin >> auxs;
					(*it).setApellido(auxs);
					break;

				case '4':
					cout << "Introduce el nuevo Teléfono: \n";
					cin >> auxi;
					(*it).setTelefono(auxi);
					break;

				case '5':
					cout << "Introduce la nueva Dirección: \n";
					cin >> auxs;
					(*it).setDireccion(auxs);
					break;

				case '6':
					cout << "Introduce el nuevo eMail: \n";
					cin >> auxs;
					(*it).setEmail(auxs);
					break;

				case '7':
					cout << "Introduce el nuevo Curso más Alto: \n";
					cin >> auxi;
					(*it).setCurso(auxi);
					break;

				case '8':
					cout << "Introduce su nuevo equipo: \n";
					cin >> auxi;
					(*it).setNequipo(auxi);
					break;

				case '9':
					(*it).cambiaLider();
					break;

				case '0':
					cout << "El Alumno ha sido modificado correctamente.\n";
					break;

				default: 
					cout <<opcion << "La opción introducida no está dentro del Menú.\n" << endl;
			}
		}while (opcion > 0 );

	}
	return clase;
}