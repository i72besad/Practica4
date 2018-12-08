//Clase profesor.cc hecha por Jorge Jesús Chaparro Ibarra

#include "profesor.h"

bool Profesor::setRol(){
	if(Rol_){
		Rol_=false;
	} else{
		Rol_=true;
	}

	return Rol_;
}