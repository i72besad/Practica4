#include "BuscarAlumno.h"
#include <iostream>
#include <string>
#include "Alumno.h"
#include <vector>

using namespace std;



int buscarDNI() // devuelve la posicion donde esta el alumno, buscando por dni
{
	int opc;
	string DNI;
	cout<<"Introduzca el DNI:"<<endl;
	getline(cin,DNI,'\n');

	int tam = tamVect(),i;
	
	for(i=0;i<tam;i++){

		if(alumnos_[i].getDNI() == DNI){
			return i;
		}

	}
	cout<<"Error, el alumno no existe, ¿desea insertar un nuevo alumno?"<<endl;
	cout<<"\nSí-->1   No-->0"<<endl;
	cin>>opc;
	while(opc>1 || opc<0){
		cout<<"Mal escrito, repita su opción:"<<endl;
		cout<<"\nSí-->1   No-->0"<<endl;
	}if(opc==1){
		InsertarAlumno();
		return -1;
	}if(opc==0){
		return -1;
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