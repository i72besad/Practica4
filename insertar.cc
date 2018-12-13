#include "alumno.h"
#include "agenda.h"

#include <iostream>
#include <string>
#include <list>



void insertar(){
	
	Alumno al;
	

	cout << "DNI:";
	cin>>dni;
	al.setDNI(dni);
	
	cout << "Nombre:";
	cin>>nombre;
	al.setNombre(nombre);

	
	cout << "Apellidos:";
	cin>>apellidos;
	al.setApellidos(apellidos);

	
	cout << "Teléfono:";
	cin>>telefono;
	al.setTelefono(telefono);


	cout << "Dirección:";
	cin>>direccion;
	al.setDireccion(direccion);

	cout << "Codigo Postal:";
	cin>>postal;
	al.setPostal(postal);

	cout << "Fecha de nacimiento:";
	cin>>nacimiento;
	al.setNacimiento(nacimiento);
	
	cout << "Email:";
	cin>>email;
	al.setEmail(email);

	cout << "Curso más Alto matriculado:";
	cin>>cursomax;
	al.setCursoMasAlto(cursomax);

	cout << "Número de equipo:";
	cin>>equipo;
	al.setEquipo(equipo);

	cout << "Líder de equipo: ";	
	cin>>lider;
	al.setlider(lider);

	

	alumnos_.push_back(al);



	
}


