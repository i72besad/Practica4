//persona.h
//La clase persona representa a una persona y sus datos que lo diferencian

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Persona{

private:

	string DNI_,nombre_,apellidos_,email_,direccion_,nacimiento_;
	int telefono_,postal_;

public:
	Persona(string DNI, string nombre,string apellidos,int telefono,string email,string direccion,int postal,string nacimiento)
	{DNI=DNI;nombre_=nombre;apellidos_=apellidos;telefono_=telefono;email_=email;direccion_=direccion;postal_=postal;nacimiento_=nacimiento;};
	
	//set y get de la variable DNI
	inline string getDNI() { return DNI_;};
	inline void setDNI(string DNI){DNI_=DNI;};
	
	//set y get de la variable nombre
	inline string getNombre() { return nombre_;};
	inline void setNombre(string nombre){nombre_=nombre;};
	
	
	//set y get de la variable apellidos
	inline string getApellidos() { return apellidos_;};
	inline void setApellidos(string apellidos){apellidos_=apellidos;};
	
	//set y get de la variable direccion
	inline string getDireccion() { return direccion_;};
	inline void setDireccion(string direccion){direccion_=direccion;};
	
	//set y get de la variable telefono
	inline int getTelefono(){ return telefono_;};
	inline void setTelefono(int telefono){telefono_=telefono;};
	
	//set y get de la variable email
	inline string getEmail(){ return email_;};
	inline void setEmail(string email){email_=email;};

	//set y get de la variable postal
	inline int getPostal(){ return postal_;};
	inline void setPostal(int postal){postal_=postal;};
	
	//set y get de la variable cursomax
	//inline int getCursomax(){ return cursomax_;};
	//inline void setCursomax(int cursomax){cursomax_=cursomax;};
	
	//set y get de la variable nacimiento
	inline string getNacimiento(){ return nacimiento_;};
	inline void setNacimiento(string nacimiento){nacimiento_=nacimiento;};
	
	//set y get de la variable lider
	/*inline bool getLider(){ return lider_;};
	inline void setLider(bool lider){lider_=lider;};
	
	//set y get de la variable equipo
	inline int getEquipo(){ return equipo_;};
	inline void setEquipo(int equipo){equipo_=equipo;};
	
*/
	
	
	};
	
#endif	
