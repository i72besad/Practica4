#include <iostream>
#include "MostrarAlumno.h"
#include "Alumno.h"
#include <vector>


void MostrarAlumno(int pos){


	cout<<"\n\n\tDNI--> "<<alumnos_[pos].getDNI()<<endl;
	cout<<"\n\tNombre--> "<<alumnos_[pos].getNombre()<<endl;
	cout<<"\n\tApellidos--> "<<alumnos_[pos].getApellidos()<<endl;
	cout<<"\n\tTelefono--> "<<alumnos_[pos].getTelefono()<<endl;
	cout<<"\n\tDireccion--> "<<alumnos_[pos].getDireccion()<<endl;
	cout<<"\n\temail--> "<<alumnos_[pos].getEmail()<<endl;
	cout<<"\n\tCurso mas alto--> "<<alumnos_[pos].getCursoMasAlto()<<endl;
	cout<<"\n\tLider--> "<<alumnos_[pos].getLider()<<endl;
	cout<<"\n\tEquipo--> "<<alumnos_[pos].getEquipo()<<endl;



}


void MostrarTodos(){

	int tam=tamVect();

	for(int i=0;i<tam,i++){
		cout<<"\n\nAlumno "<<i+1<<endl;
		cout<<"\n\tDNI--> "<<alumnos_[i].getDNI()<<endl;
		cout<<"\n\tNombre--> "<<alumnos_[i].getNombre()<<endl;
		cout<<"\n\tApellidos--> "<<alumnos_[i].getApellidos()<<endl;
		cout<<"\n\tTelefono--> "<<alumnos_[i].getTelefono()<<endl;
		cout<<"\n\tDireccion--> "<<alumnos_[i].getDireccion()<<endl;
		cout<<"\n\temail--> "<<alumnos_[i].getEmail()<<endl;
		cout<<"\n\tCurso mas alto--> "<<alumnos_[i].getCursoMasAlto()<<endl;
		cout<<"\n\tLider--> "<<alumnos_[i].getLider()<<endl;
		cout<<"\n\tEquipo--> "<<alumnos_[i].getEquipo()<<endl;
	}
}