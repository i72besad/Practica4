#include<stdlib.h>
#include<string.h>
#include<fstream>
#include"insertar.h"

void insertar(){
	
	ofstream archivo;
	string nombreFich,dni,nombre,apellidos,email,direccion,nacimiento;
	int telefono,postal,cursomax,equipo;
	bool lider;
	
	std::cout<<"Nombre fichero:";
	getline(cin,nombreFich);	
	
	archivo.open(nombreFich.c_str(),ios::app);
	
	

	cout << "DNI:";
	cin>>dni;
	
	cout << "Nombre:";
	cin>>nombre;
	
	cout << "Apellidos:";
	cin>>apellidos;
	
	cout << "Teléfono:";
	cin>>telefono;

	cout << "Dirección:";
	cin>>direccion;

	cout << "Codigo Postal:";
	cin>>postal;

	cout << "Fecha de nacimiento:";
	cin>>nacimiento;

	cout << "Email:";
	cin>>email;

	cout << "Curso más Alto matriculado:";
	cin>>cursomax;

	cout << "Número de equipo:";
	cin>>equipo;

	cout << "Líder de equipo: ";	
	cin>>lider;

	
	archivo<<dni<<endl;
	archivo<<nombre<<endl;
	archivo<<apellidos<<endl;
	archivo<<telefono<<endl;
	archivo<<direccion<<endl;
	archivo<<postal<<endl;
	archivo<<nacimiento<<endl;
	archivo<<email<<endl;
	archivo<<cursomax<<endl;
	archivo<<equipo<<endl;
	archivo<<lider<<endl;
	


	archivo.close();
	
	
}


