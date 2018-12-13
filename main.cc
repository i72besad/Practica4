#include <iostream>
#include "Agenda.h"
#include "BuscarAlumno.h"
//#include "InsertarAlumno.h"
//#include "BorrarAlumno.h"
#include "ModificarAlumno.h"
#include "MostrarAlumno.h"
//#include "GestionarLideres.h"
#include "Copia_Seguridad.h"




int main(){

	int opc,save;
	Agenda a;

	a.mainmenu();
	

	cout<<"\nBienvenido a su Agenda de alumnos personal, ¿qué desea hacer?"<<endl;
	

	while(opc!=8){

		cout<<"\n\t0--> Buscar Alumno"<<endl;
		cout<<"\t1--> Insertar Alumno"<<endl;
		cout<<"\t2--> Borrar Alumno"<<endl;
		cout<<"\t3--> Modificar Alumno"<<endl;
		cout<<"\t4--> Mostrar Alumno"<<endl;
		cout<<"\t5--> Mostrar Lista de Alumnos"<<endl;
		cout<<"\t6--> Gestionar Líderes de Equipo"<<endl;
		cout<<"\t7--> Guardar"<<endl;
		cout<<"\t8--> Salir"<<endl;
		cin>>opc;
		cin.ignore();
		switch(opc){
			case 0:
				BuscarAlumno();
				break;
			case 1:
				//InsertarAlumno();
				break;
			case 2:
				//BorrarAlumno();
				break;
			case 3:
				ModificaAlumno();
				break;
			case 4:
				MostrarAlumno();
				break;
			case 5:
				//MostrarTodos();
				break;
			case 6:
				//GestionarLideres();
				break;
			case 7:
				GuardarCopia();
				break;		
			case 8:
				cout<<"¿Quiere guardar?"<<endl;
				cout<<"0--> Sí   1-->No"<<endl;
				cin>>save;
				cin.ignore();
				if(save==0){
					GuardarCopia();
					CargarCopia();
				}if(save>1 || save<0){
					
					while(save>1 || save<0){
						cout<<"Error, escriba de nuevo la opción"<<endl;
						cout<<"¿Quiere guardar?"<<endl;
						cout<<"0--> Sí   1-->No"<<endl;
						cin>>save;
						cin.ignore();
						if(save==0){
							GuardarCopia();
							CargarCopia();
						}
					}

				}
				break;

		}
	}


	return 0;
}