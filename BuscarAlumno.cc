#include <iostream>
#include <string>
#include "alumno.h"
#include "funcionesAlumno.h"

using namespace std;


void BuscarAlumno(){

	int opc;

	cout<<"Opciones de Busqueda: 0-->DNI    1-->Apellido"<<endl;
	cin>>opc;

	if(opc==0){
		BusquedaDNI();
	}if(opc==1){
		BusquedaApellido();
	}else{
		while(opc>1 || opc<0){	
			cout<<"Error, opción incorrecta"<<endl;
			cout<<"Introduzca de nuevo una opción"<<endl;		
			cout<<"Opciones de Busqueda: 0-->DNI    1-->Apellido"<<endl;
			cin>>opc;
			if(opc==0){
				BusquedaDNI();
			}if(opc==1){
				BusquedaApellido();
			}
		}
	}
}


void BusquedaDNI(){

	int opc2;
	string DNI;

	cout<<"Introduzca el DNI:"<<endl;
	cin>>DNI;
	//Averiguar como comprobar que el DNI esta bien escrito
	if(DNI==/*funcion que busque en la BD*/){
		cout<<"Alumno encontrado, ¿que desea hacer?"<<endl;
		cout<<"\n\n\t0-->Mostrar\n\t1-->Modificar\n\t2-->Borrar"<<endl;
		cin>>opc2;
		if(opc2<0 || opc2>2){
			while(opc2>2 || opc2<0){	
				cout<<"Error, opción incorrecta"<<endl;
				cout<<"Introduzca de nuevo una opción"<<endl;		
				cout<<"\n\n\t0-->Mostrar\n\t1-->Modificar\n\t2-->Borrar"<<endl;				
				cin>>opc2;
			}
		}
		Correcto(opc2,DNI);
		
	}else{
		cout<<"Alumno no encontrado, ¿desea insertar uno nuevo?"<<endl;
		cout<<"\n\n\t0-->Insertar\n\t1-->Buscar de nuevo"<<endl;
		if(opc2<0 || opc2>1){
			while(opc2>1 || opc2<0){	
				cout<<"Error, opción incorrecta"<<endl;
				cout<<"Introduzca de nuevo una opción"<<endl;		
				cout<<"\n\n\t0-->Insertar\n\t1-->Buscar de nuevo"<<endl;				
				cin>>opc2;
			}
		}
		Incorrecto(opc2);
	}
}


void BusquedaApellido(){

	int opc2;
	string Apellido;

	cout<<"Introduzca el Apellido:"<<endl;
	cin>>Apellido;

	if(Apellido==/*funcion que busque en la BD*/){
		string DNI=getDNI();
		cout<<"Alumno encontrado, ¿que desea hacer?"<<endl;
		cout<<"\n\n\t0-->Mostrar\n\t1-->Modificar\n\t2-->Borrar"<<endl;
		cin>>opc2;
		if(opc2<0 || opc2>2){
			while(opc2>2 || opc2<0){	
				cout<<"Error, opción incorrecta"<<endl;
				cout<<"Introduzca de nuevo una opción"<<endl;		
				cout<<"\n\n\t0-->Mostrar\n\t1-->Modificar\n\t2-->Borrar"<<endl;				
				cin>>opc2;
			}
		}
		Correcto(opc2,DNI);

	}else{
		cout<<"Alumno no encontrado, ¿desea insertar uno nuevo?"<<endl;
		cout<<"\n\n\t0-->Insertar\n\t1-->Buscar de nuevo"<<endl;
		if(opc2<0 || opc2>2){
			while(opc2>1 || opc2<0){	
				cout<<"Error, opción incorrecta"<<endl;
				cout<<"Introduzca de nuevo una opción"<<endl;		
				cout<<"\n\n\t0-->Insertar\n\t1-->Buscar de nuevo"<<endl;				
				cin>>opc2;
			}
		}
		Incorrecto(opc2);
	}



}

void Correcto(int opc2,string DNI){
	switch(opc2){
		case '0':
			MostrarAlumno(DNI);
			break;
		case '1':
			ModificarAlumno(DNI);
			break;
		case '2':
			BorrarAlumno(DNI);
			break;
	}
}

void Incorrecto(int opc2){

	switch(opc2){
		case '0':
			InsertarAlumno();
		break;
		case '1':
			BusquedaDNI();
	}


}

