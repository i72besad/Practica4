//Funciones de la Copia de Seguridad
//Realizadas por Jorge Jesús Chaparro Ibarra

#include <iostream>
#include "alumno.h"
#include "Agenda.h"
#include "persona.h"
#include "funcionesAuxiliares.h"
#include <fstream>
#include <string>
#include <vector>

using namespace std;

using std::ifstream;
using std::ofstream;

void GuardarCopia(){
	string aux, fichero;
	ofstream archivo_salida;
	int tam = tamVect();

	cout << "Escribe el nombre del fichero: " << endl;
	getline(cin, fichero);

	archivo_salida.open(fichero.c_str(), ios::out);

	for(int i=0; i<tam; i++){
		archivo_salida << alumnos_[i];
	}

	archivo_salida.close();

	ifstream archivo_entrada;
	archivo_entrada.open(fichero.c_str(), ios::in);

	ofstream archivo_salida1;
	archivo_salida1.open("Copia_Seguridad.bin", ios::out | ios::binary);

	while(!archivo_entrada.eof()){
		getline(archivo_entrada, aux);
		aux += "\n";
		archivo_salida1.write(aux.c_str(), aux.size());
	}
	archivo_entrada.close();
	archivo_salida1.close();
}

void CargarCopia(){
	char aux[250];
	ifstream archivo_entrada;
	archivo_entrada.open("Copia_Seguridad.bin", ios::in | ios::binary);

	ofstream archivo_salida;
	archivo_salida.open("Base_Datos");

	while(!archivo_entrada.eof()){
		archivo_entrada.read(aux, 250);
		archivo_salida << aux;
	}
	archivo_entrada.close();
	archivo_salida.close();
}