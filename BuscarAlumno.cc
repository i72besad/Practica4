#include <iostream>
#include <string>
#include "alumno.h"
using namespace std;


Alumno BuscarAlumno(){

	int opc;

	cout<<"Opciones de Busqueda: 0-->DNI    1-->Apellido"<<endl;
	cin>>opc;

	if(opc==0){
		BusquedaDNI();
	}if(opc==1){
		BusquedaApellido();
	}else{
		cout<<"Error, opción incorrecta"<<endl;
		//Averiguar como vonver a hacer la pregunta
	}
}


void BusquedaDNI(){

	int opcDNI;
	string DNI;

	cout<<"Introduzca el DNI:"<<endl;
	cin>>DNI;
	//Averiguar como comprobar que el DNI esta bien escrito
	if(DNI==/*funcion que busque en la BD*/){
		cout<<"Alumno encontrado, ¿que desea hacer?"<<endl;
		cout<<"\n\n0-->Mostrar\n1-->Modificar\n2-->Borrar"<<endl;
		cin>>opcDNI;
		if(opcDNI<0 || opcDNI>2){
			cout<<"Error, opción incorrecta"<<endl;
			//averiguar como vonver a hacer la pregunta
		}
		DNICorrecto(opcDNI,DNI);
	}else{
		cout<<"Alumno no encontrado, ¿desea insertar uno nuevo?"<<endl;
		cout<<"\n\n0-->Insertar\n1-->Buscar de nuevo"<<endl;
	}
}


void BusquedaApellido(){

	int opcDNI;
	string Apellido;

	cout<<"Introduzca el Apellido:"<<endl;
	cin>>Apellido;

	if(Apellido==/*funcion que busque en la BD*/){
		string DNI=getDNI();
		cout<<"Alumno encontrado, ¿que desea hacer?"<<endl;
		cout<<"\n\n0-->Mostrar\n1-->Modificar\n2-->Borrar"<<endl;
		cin>>opcDNI;
		if(opcDNI<0 || opcDNI>2){
			cout<<"Error, opción incorrecta"<<endl;
			//averiguar como vonver a hacer la pregunta
		}
		DNICorrecto(opcDNI,DNI);

}



}

void DNICorrecto(int opcDNI,string DNI){
	switch(opcDNI){
		case '0':
			MostrarAlumno(DNI);
			break;
		case '1':
			ModificarAlumno(DNI);
			break;
		case '2':
			BorrarAlumno(DNI);
			break;
	}
}