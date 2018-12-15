#include <iostream>
#include <string>
#include "alumno.h"
#include "persona.h"
#include "gestionarLideres.h"

#include <vector>



void gestionarLideres(int equipo)
{
	int tam = tamVect(), i, pos1=-1, pos2=-1, pos3=-1;
	int lider=-1,num;


	for(i=0;i<tam;i++){

		if(alumnos_[i].getEquipo() == equipo)
		{

			if(pos1 == -1)
				pos1 = i;
			else if(pos2 == -1)
				pos2 = i;
			else if(pos3 == -1)
				pos3 = i;

		}
	
	std::cout<<"Los miembros son: " << endl;

	if(pos1 != -1)
	{
		std::cout<< pos1 << alumnos_[pos1].getNombre() << alumnos_[pos1].getApellidos();

		if(alumnos_[pos1].getLider() == TRUE)
		{
		lider = pos1;
		std::cout<< "Este alumno es el lider"<< endl;
		}	
		
	}
	if(pos2 != -1)
	{
		std::cout<< pos2 << alumnos_[pos2].getNombre() << alumnos_[pos2].getApellidos();
		if(alumnos_[pos2].getLider() == TRUE)
		{
		lider = pos2;
		std::cout<< "Este alumno es el lider"<< endl;
		}
	}
	if(pos3 != -1)
	{
		std::cout<< pos3 << alumnos_[pos3].getNombre() << alumnos_[pos3].getApellidos();
		if(alumnos_[pos3].getLider() == TRUE)
		{
		lider = pos3;
		std::cout<< "Este alumno es el lider"<< endl;
		}
	}

	if(pos1 == -1 and pos2 == -1 and pos3 == -1)
			std::cout<< "No hay un lider "<< endl;

	std::cout<< "Cual deseas poner como lider: (escoja el numero del alumno) "
	std::cin>>num;

	if(pos1 == -1 and pos2 == -1 and pos3 == -1)
	{

		alumnos_[num].setLider(TRUE);

	}
	else
	{
	
		alumnos_[lider].setLider(FALSE);
		alumnos_[num].setLider(TRUE);

	}

	}




}
