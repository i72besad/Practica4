#include "BuscarAlumno.h"
#include <iostream>
#include <string>
#include "Alumno.h"
#include <vector>

using namespace std;



int buscarDNI() // devuelve la posicion donde esta el alumno, buscando por dni
{

	string DNI;
	cout<<"Introduzca el DNI:"<<endl;
	getline(cin,DNI,'\n');

	int tam = tamVect(),i;
	
	for(i=0;i<tam;i++){

		if(alumnos_[i].getDNI() == DNI){
			return i;
		}

	}

}

int buscarApellido(){
	string Apellido;
	cout<<"Introduzca el Apellido:"<<endl;
	getline(cin,Apellido,'\n');

	int tam=tamVect(),i,cont=0;

	for(i=0;i<tam;i++){
		if(alumnos_[i].getApellidos()==Apellidos){
			cont++;
			auxi=i;
		}
	}
	if(cont==1){
		cout<<"Alumno encontrado"<<endl;
		return auxi;
	}else{
		cout<<"Error, más de un alumno con el mismo apellido, redirigiendo a buscar por DNI..."<<endl;
		auxi=buscarDNI();
		return auxi;
	}


}