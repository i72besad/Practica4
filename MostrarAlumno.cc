#include <iostream>
#include <string>
#include "alumno.h"

using namespace std;


void MostrarAlumno(list <Alumno> listaalumno){

	int opc;

	alumno a;

	cout<<"¿Qué desea ver?"<<endl;
	cout<<"\n\t0-->Mostrar Todos los Alumnos  1-->El Alumno"<<endl;
	cin>>opc;
	cin.ignore();
	if(opc==0){
		MostrarTodos();
	}if(opc>1 || opc<0){
		while(opc>1 || opc<0){
			cout<<"Error, opción incorrecta"<<endl;
			cout<<"Introduzca de nuevo una opción:\n"<<endl;		
			cout<<"¿Qué desea ver?"<<endl;
			cout<<"\n\t0-->Mostrar Todos los Alumnos   1-->El Alumno"<<endl;				
			cin>>opc2;
			if(opc==0){
				MostrarTodos();
			}
		}
	}if(opc==1){

		for(list <alumno>::iterator it = listaalumno.begin(); it != listaalumno.end(); it++){
			cout<<"\n\n\tDNI--> "<<it->getDNI()<<endl;
			cout<<"\n\n\tNombre--> "<<it->getNombre()<<endl;
			cout<<"\n\n\tApellidos--> "<<it->getApellidos()<<endl;
			cout<<"\n\n\tTelefono--> "<<it->getTelefono()<<endl;
			cout<<"\n\n\tDireccion--> "<<it->getDireccion()<<endl;
			cout<<"\n\n\temail--> "<<it->getEmail()<<endl;
			cout<<"\n\n\tCurso mas alto--> "<<it->getCursoMasAlto()<<endl;
			cout<<"\n\n\tLider--> "<<it->getLider()<<endl;
			cout<<"\n\n\tEquipo--> "<<it->getEquipo()<<endl;
		}
	}

}



void MostrarTodos(){

}