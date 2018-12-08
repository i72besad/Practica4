#include <iostream>
#include <string>
#include <alumno.h>

using namespace std;


void MostrarAlumno(string DNI){

	cout<<"¿Desea ver todo el listado de alumnos?"<<endl;
	cout<<"\n\t0-->Si   1-->No"<<endl;
	cin>>opc;
	if(opc==0){
		MostrarTodos();
	}if(opc>1 || opc<0){
		while(opc>1 || opc<0){
			cout<<"Error, opción incorrecta"<<endl;
			cout<<"Introduzca de nuevo una opción"<<endl;		
			cout<<"¿Desea ver todo el listado de alumnos?"<<endl;
			cout<<"\n\t0-->Si   1-->No"<<endl;				
			cin>>opc2;
			if(opc==0){
				MostrarTodos();
			}
		}
	}


	cout<<"\n\n\tDNI--> "<<alumno.getDNI()<<endl;
	cout<<"\n\n\tNombre--> "<<alumno.getnombre()<<endl;
	cout<<"\n\n\tApellidos--> "<<alumno.getApellidos()<<endl;
	cout<<"\n\n\tTelefono--> "<<alumno.getTelefono()<<endl;
	cout<<"\n\n\tDireccion--> "<<alumno.getDireccion()<<endl;
	cout<<"\n\n\temail--> "<<alumno.getEmail()<<endl;
	cout<<"\n\n\tCurso mas alto--> "<<alumno.getCursoMasAlto()<<endl;
	cout<<"\n\n\tLider--> "<<alumno.getLider()<<endl;
	cout<<"\n\n\tEquipo--> "<<alumno.getEquipo()<<endl;



}



void MostrarTodos(){

}