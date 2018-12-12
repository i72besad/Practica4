//Funciones de la Copia de Seguridad
//Realizadas por Jorge Jesús Chaparro Ibarra

#include <iostream>
#include "alumno.h"
#include <fstream>
#include <string>

using namespace std;

using std::ifstream;
using std::ofstream;

void GuardarCopia(){
	string aux, fichero;
	ifstream archivo_entrada;
	cout << "Escribe el nombre del fichero: " << endl;
	getline(cin, fichero);
	int fd=open(fichero, 0_RDONLY);
	if(fd<0){
		cout << "Error, el fichero no existe.\n" << endl;
		exit(-1);
	}else{
		archivo_entrada.open(fichero.c_str(), ios::in);
	}

	ofstream archivo_salida;
	archivo_salida.open("Copia_Seguridad.bin", ios::out | ios::binary);

	while(!archivo_entrada.eof()){
		getline(archivo_entrada, aux);
		aux += "\n";
		archivo_salida.write(aux.c_str(), aux.size());
	}
	archivo_entrada.close();
	archivo_salida.close();
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