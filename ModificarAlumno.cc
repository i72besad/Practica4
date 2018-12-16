

#include "alumno.h"
#include "BuscarAlumno.h"

#include <iostream>
#include <string>
#include <vector>

void ModificaAlumno(){

	string auxs;
	int auxi;
	int pos = BuscarAlumnos();

		int opcion;

		do {
			cout << "Elige el atributo del Alumno que desea modificar: \n" << endl;
			
			cout << "1. DNI:" << alumnos_[pos].getDNI() << "\n" << endl;
			cout << "2. Nombre:" << alumnos_[pos].getNombre() << "\n" << endl;
			cout << "3. Apellidos:" << alumnos_[pos].getApellidos() << "\n" << endl;
			cout << "4. Teléfono:" << alumnos_[pos].getTelefono() << "\n" <<endl;
			cout << "5. Dirección:" << alumnos_[pos].getDireccion() << "\n" << endl;
			cout << "6. eMail:" << alumnos_[pos].getEmail() << "\n" << endl;
			cout << "7. Curso más Alto matriculado:" << alumnos_[pos].getCursoMasAlto() << "\n" << endl;
			cout << "8. Número de equipo:" << alumnos_[pos].getEquipo() << "\n" << endl;
			cout << "9. Líder de equipo: ";
			if(alumnos_[pos].getLider()==true){
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
					getline(cin, auxs);
					alumnos_[pos].setDNI(auxs);
					break;

				case '2':
					cout << "Introduce el nuevo Nombre:  \n";
					getline(cin, auxs);
					alumnos_[pos].setNombre(auxs);
					break;

				case '3':
					cout << "Introduce los nuevos Apellidos: \n";
					getline(cin, auxs)
					alumnos_[pos].setApellido(auxs);
					break;

				case '4':
					cout << "Introduce el nuevo Teléfono: \n";
					cin >> auxi;
					alumnos_[pos].setTelefono(auxi);
					break;

				case '5':
					cout << "Introduce la nueva Dirección: \n";
					getline(cin, auxs);
					alumnos_[pos].setDireccion(auxs);
					break;

				case '6':
					cout << "Introduce el nuevo eMail: \n";
					getline(cin, auxs);
					alumnos_[pos].setEmail(auxs);
					break;

				case '7':
					cout << "Introduce el nuevo Curso más Alto: \n";
					cin >> auxi;
					alumnos_[pos].setCursoMasAlto(auxi);
					break;

				case '8':
					cout << "Introduce su nuevo equipo: \n";
					cin >> auxi;
					alumnos_[pos].setEquipo(auxi);
					break;

				case '9':
					alumnos_[pos].cambiaLider();
					break;

				case '0':
					cout << "El Alumno ha sido modificado correctamente.\n";
					break;

				default: 
					cout << opcion << "La opción introducida no está dentro del Menú.\n" << endl;
			}
		}while (opcion > 0 );
}