#include <iostream>
#include <string>
#include <alumno.h>

using namespace std;


void MostrarAlumno(string DNI){

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


		cout<<"\n\n\tDNI--> "<<a.getDNI()<<endl;
		cout<<"\n\n\tNombre--> "<<a.getNombre()<<endl;
		cout<<"\n\n\tApellidos--> "<<a.getApellidos()<<endl;
		cout<<"\n\n\tTelefono--> "<<a.getTelefono()<<endl;
		cout<<"\n\n\tDireccion--> "<<a.getDireccion()<<endl;
		cout<<"\n\n\temail--> "<<a.getEmail()<<endl;
		cout<<"\n\n\tCurso mas alto--> "<<a.getCursoMasAlto()<<endl;
		cout<<"\n\n\tLider--> "<<a.getLider()<<endl;
		cout<<"\n\n\tEquipo--> "<<a.getEquipo()<<endl;
	}




}



void MostrarTodos(){

}