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
	
	cout << "Tel�fono:";
	cin>>telefono;

	cout << "Direcci�n:";
	cin>>direccion;

	cout << "Codigo Postal:";
	cin>>postal;

	cout << "Fecha de nacimiento:";
	cin>>nacimiento;

	cout << "Email:";
	cin>>email;

	cout << "Curso m�s Alto matriculado:";
	cin>>cursomax;

	cout << "N�mero de equipo:";
	cin>>equipo;

	cout << "L�der de equipo: ";	
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


