
#include <iostream>
#include <string>
#include <fstream>
#include "alumno.h"
#include <stdlib.h>
#include <vector>

#include "Agenda.h"

using namespace std;

bool Agenda::mainmenu(){

	if(login()==true){
		return true;
	}else{
		return false;
	}

}


bool Agenda::login(){
	string usuario, usuariotxt, password, aux;
	bool encontrado=false;
	ifstream archivo_entrada;
	cout << "Introduce tu nombre de usuario: " << endl;
	getline(cin, usuario);

	cout << "Introduce tu contraseña: " << endl;
	getline(cin, password);

	usuariotxt=usuario+".txt";

	archivo_entrada.open(usuariotxt.c_str(), ios::in);

	if(archivo_entrada.is_open()){
		while(getline(archivo_entrada, aux)){
			if(aux.find(password) != string::npos){
				encontrado==true;
				cout << "Logueado correctamente!\n" << endl;
				archivo_entrada.close();
				return true;
			}
		}if(encontrado==false){
			cout << "Error de inicio de sesión.\n" << endl;
			archivo_entrada.close();
			return false;
		}
	} else{
		cout << "Error: El fichero no existe.\n" << endl;
		archivo_entrada.close();
		return false;
	}
}

/*void Agenda::registerme(){
	int confirmation;
	string usuario;
    cout << "Por favor, introduce el nombre de Usuario que deseas: " << endl;
    getline(cin, usuario);
    cout << "\nUsuario -  \""<< usuario << "\"\n¿Estás seguro? \n\n[1] Sí\n[2] No" << endl;
    cin >> confirmation;
    cin.ignore();
    if (confirmation == 1){
        registerpassword(usuario);
    }

    else; {
        cout << "Lo siento, vuelve a intentarlo.\n" << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        registerme();
    }
}

void Agenda::registerpassword(string usuario){
	string password, password2;
    cout << "Por favor, introduce la contraseña que deseas: " << endl;
    cin >> password;
    cin.ignore();

    cout << "Por favor, vuelve a introducir la contraseña: " << endl;
    cin >> password2;
    cin.ignore();

    if (password == password2){
        cin.clear();
        cin.ignore(10000,'\n');
        writetofile(usuario, password);
        exit(1);
    }
    else;{
        cout << "Lo siento, vuelve a intentarlo." << endl;
        registerpassword(usuario);
    }
}

void Agenda::writetofile(string usuario, string password){
	usuario_=usuario;
	password_=password;

    ofstream writefile;
    string file = usuario+".txt";
    writefile.open(file.c_str());
    writefile << password;
    writefile.close();
}*/


void Agenda::insertar(){
	
	
	string dni,nombre,apellidos,direccion,nacimiento,email;
	int telefono,postal,cursomax,equipo;
	int lider;
	
	Alumno al(dni,  nombre,  apellidos,  telefono, email, direccion,  postal,  nacimiento,  cursomax, equipo,  lider);

	cout<<"En el sistema hay un total de "<<alumnos_.size()<<" alumnos.\n"<<endl;
	cout << "DNI: ";
	getline(cin,dni);

	if(comprobarDNI(dni)==true){
		al.setDNI(dni);
	}else{
		cout << ".:ERROR:.\nFormato de DNI incorrecto." << endl;
	}
	
	cout << "Nombre: ";
	getline(cin,nombre);

	al.setNombre(nombre);

	
	cout << "Apellidos: ";
	getline(cin,apellidos);

	al.setApellidos(apellidos);

	
	cout << "Teléfono: ";
	cin>>telefono;
	cin.ignore();

	al.setTelefono(telefono);


	cout << "Dirección: ";
	getline(cin,direccion);

	al.setDireccion(direccion);

	cout << "Codigo Postal: ";
	cin>>postal;
	cin.ignore();

	al.setPostal(postal);

	cout << "Fecha de nacimiento: ";
	getline(cin,nacimiento);

	al.setNacimiento(nacimiento);
	
	cout << "Email: ";
	getline(cin,email);
	al.setEmail(email);

	cout << "Curso más Alto matriculado: ";
	cin>>cursomax;
	al.setCursoMasAlto(cursomax);

	cout << "Número de equipo: ";
	cin>>equipo;
	al.setEquipo(equipo);

	cout << "Líder de equipo: 1-->Sí   0--->No";	
	cin>>lider;
	cin.ignore();
	if(lider==1){
		al.setLider(true);
	}if(lider==0){
		al.setLider(false);
	}
	
	alumnos_.push_back(al);
	cout<<"En el sistema hay un total de "<<alumnos_.size()<<" alumnos.\n"<<endl;
}

bool Agenda::comprobarDNI(string nuevo_dni){
    if (nuevo_dni.size()!=9){
        return false;
    }
    if(nuevo_dni[8] != letraDNI(stoi(nuevo_dni))){
        return false;
    }
    return true;
}

char Agenda::letraDNI(int dni){
    int letra;
    letra = dni%23;
    string letras = "TRWAGMYFPDXBNJZSQVHLCKE";
    return letras[letra];
}

void Agenda::ModificaAlumno(){

	string auxs;
	int auxi;
	int pos = buscarDNI();

		int opcion;

		do {
			cout << "Elige el atributo del Alumno que desea modificar: \n" << endl;
			
			cout << "1. DNI: " << alumnos_[pos].getDNI() << "\n" << endl;
			cout << "2. Nombre: " << alumnos_[pos].getNombre() << "\n" << endl;
			cout << "3. Apellidos: " << alumnos_[pos].getApellidos() << "\n" << endl;
			cout << "4. Teléfono: " << alumnos_[pos].getTelefono() << "\n" <<endl;
			cout << "5. Dirección:" << alumnos_[pos].getDireccion() << "\n" << endl;
			cout << "6. eMail: " << alumnos_[pos].getEmail() << "\n" << endl;
			cout << "7. Curso más Alto matriculado: " << alumnos_[pos].getCursoMasAlto() << "\n" << endl;
			cout << "8. Número de equipo: " << alumnos_[pos].getEquipo() << "\n" << endl;
			cout << "9. Líder de equipo: ";
			if(alumnos_[pos].getLider()==true){
				cout << "Sí" << endl;
			}else{
				cout << "No" << endl;
			}
			cout << "0. Guardar alumno y salir." << "\n" << endl;

			cout << "Introduce el número de la Opción: ";
			cin >> opcion;
			cin.ignore();

			switch (opcion) {
				case 1:
					cout << "Introduce el nuevo DNI:  \n";
					getline(cin, auxs);
					alumnos_[pos].setDNI(auxs);
					break;

				case 2:
					cout << "Introduce el nuevo Nombre:  \n";
					getline(cin, auxs);
					alumnos_[pos].setNombre(auxs);
					break;

				case 3:
					cout << "Introduce los nuevos Apellidos: \n";
					getline(cin, auxs);
					alumnos_[pos].setApellidos(auxs);
					break;

				case 4:
					cout << "Introduce el nuevo Teléfono: \n";
					cin >> auxi;
					cin.ignore();
					alumnos_[pos].setTelefono(auxi);
					break;

				case 5:
					cout << "Introduce la nueva Dirección: \n";
					getline(cin, auxs);
					alumnos_[pos].setDireccion(auxs);
					break;

				case 6:
					cout << "Introduce el nuevo eMail: \n";
					getline(cin, auxs);
					alumnos_[pos].setEmail(auxs);
					break;

				case 7:
					cout << "Introduce el nuevo Curso más Alto: \n";
					cin >> auxi;
					cin.ignore();
					alumnos_[pos].setCursoMasAlto(auxi);
					break;

				case 8:
					cout << "Introduce su nuevo equipo: \n";
					cin >> auxi;
					cin.ignore();
					alumnos_[pos].setEquipo(auxi);
					break;

				case 9:
					cout << "Introduce lider: \n";
					cin >> auxi;
					if(auxi == 1)
						alumnos_[pos].setLider(true);
					else
						alumnos_[pos].setLider(false);
					break;

				case 0:
					cout << "El Alumno ha sido modificado correctamente.\n";
					break;

				default: 
					cout << opcion << "La opción introducida no está dentro del Menú.\n" << endl;
					break;
			}

			cout << "opcion tiene  "<< opcion;


		}while (opcion > 0 );
}



void Agenda::MostrarAlumno(){

	int pos=buscarDNI();


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


void Agenda::MostrarTodos(){

	int tam;
	tam = tamVect();

	for(int i=0;i<tam;i++){
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


void Agenda::gestionarLideres()
{
	int tam = tamVect(), i, pos1=-1, pos2=-1, pos3=-1;
	int lider=-1,num;
	int equipo;


	cout<<"Equipo: "<<endl;
	cin>>equipo;




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
	}

	std::cout<<"Los miembros son: " << endl;

	if(pos1 != -1)
	{
		std::cout<< pos1 <<" " << alumnos_[pos1].getNombre() << " " << alumnos_[pos1].getApellidos() << "\n" << endl;

		if(alumnos_[pos1].getLider() == true)
		{
		lider = pos1;
		std::cout<< "Este alumno es el líder. "<< endl;
		}	
		
	}
	if(pos2 != -1)
	{
		std::cout<< pos2 << " " << alumnos_[pos2].getNombre() << " " << alumnos_[pos2].getApellidos() << "\n" << endl;
		if(alumnos_[pos2].getLider() == true)
		{
		lider = pos2;
		std::cout<< "Este alumno es el líder. "<< endl;
		}
	}
	if(pos3 != -1)
	{
		std::cout<< pos3 <<" " << alumnos_[pos3].getNombre() << " " << alumnos_[pos3].getApellidos() << "\n" << endl;
		if(alumnos_[pos3].getLider() == true)
		{
		lider = pos3;
		std::cout<< "Este alumno es el líder. "<< endl;
		}
	}

	if(pos1 == -1 and pos2 == -1 and pos3 == -1)
			std::cout<< "No hay un lider "<< endl;

	std::cout<< "Cual deseas poner como lider: (escoja el numero del alumno) ";
	std::cin>>num;
	cin.ignore();


	if(pos1 == -1 and pos2 == -1 and pos3 == -1)
	{

		alumnos_[num].setLider(true);

	}
	else
	{
	
		alumnos_[lider].setLider(false);
		alumnos_[num].setLider(true);

	}

	




}



int Agenda::buscarDNI() // devuelve la posicion donde esta el alumno, buscando por dni
{
	int opc;
	string DNI;
	cout<<"Introduzca el DNI: "<<endl;
	getline(cin,DNI,'\n');

	int tam = tamVect();
	
	for(int i=0;i<tam;i++){

		if(alumnos_[i].getDNI() == DNI){
			cout<<"Alumno encontrado!"<<endl;			
			return i;
		}

	}
	cout<<"Error, el alumno no existe, ¿desea insertar un nuevo alumno?"<<endl;
	cout<<"\nSí-->1   No-->0"<<endl;
	cin>>opc;
	cin.ignore();

	while(opc>1 || opc<0){
		cout<<"Mal escrito, repita su opción:"<<endl;
		cout<<"\nSí-->1   No-->0"<<endl;
	}if(opc==1){
		insertar();
		return -1;
	}if(opc==0){
		return -1;
	}
}

int Agenda::buscarApellido(){
	string Apellido;
	int auxi;
	int cont = 0;

	cout<<"Introduzca el Apellido:"<<endl;
	std::cin.ignore();
	getline(cin,Apellido,'\n');

	int tam=tamVect();

	for(int i=0;i<tam;i++){
		if(alumnos_[i].getApellidos()==Apellido){
			cont++;
			auxi=i;
		}
	}
	if(cont==1){
		cout<<"Alumno encontrado"<<endl;
		return auxi;
	}if(cont>1){
		cout<<"Error, más de un alumno con el mismo apellido, redirigiendo a buscar por DNI..."<<endl;
		auxi=buscarDNI();
		return auxi;
	}else{
		cout<<"Error, alumno no encontrado"<<endl;
		return auxi;
	}


}



void Agenda::eliminarAlumno()
{

	int pos = buscarDNI();


	alumnos_.erase(alumnos_.begin()+pos);

	cout<<"Alumno eliminado"<<endl;


}



void Agenda::guardarEnFichero()
{
 	string nombreFichero;
 	string ponerBin;

	std::ofstream fich;
	
	cout<<"Introduzca el nombre del fichero"<<endl;
	std::cin.ignore();
	getline(cin,nombreFichero);

	ponerBin=nombreFichero+".bin";

	fich.open(ponerBin.c_str(), ios::out | ios::binary);
	
	if(fich.fail())
	{
		std::cout << "Error al crear el fichero. "  << std::endl;
	}
	else
	{
	
		int tam = alumnos_.size();
		

		for(int i=0; i<tam; i++){
		fich << alumnos_[i].getDNI() << ",";
		fich << alumnos_[i].getNombre() << ",";
		fich << alumnos_[i].getApellidos() << ",";
		fich << alumnos_[i].getTelefono() << ",";
		fich << alumnos_[i].getDireccion() << ",";
		fich << alumnos_[i].getEmail() << ",";
		fich << alumnos_[i].getCursoMasAlto() << ",";
		fich << alumnos_[i].getLider() << ";";
	}

	
		fich.close();
	}
}


void Agenda::cargar_backup(){

  
	std::ifstream fich;
	std::string aux;
	std::string nombreFichero;
	std::string conBin;
	
	string dni,nombre,apellidos,direccion,nacimiento,email;
	int telefono,postal,cursomax,equipo;
	int lider;
	
	Alumno al(dni,  nombre,  apellidos,  telefono, email, direccion,  postal,  nacimiento,  cursomax, equipo,  lider);

	cout << "Introduce el nombre del Fichero: " << endl;
	getline(cin, nombreFichero);

	conBin=nombreFichero+".bin";

	fich.open(conBin.c_str(), ios::in | ios::binary);

	if(fich.fail()){
		
		std::cout << "Error al abrir el fichero"<< std::endl;
	}



	while (getline(fich,aux,',') && not fich.eof())
	{	
	
		al.setDNI(aux);
		getline(fich,aux,',');
		al.setNombre(aux);
		getline(fich,aux,',');
		al.setApellidos(aux);
		getline(fich,aux,',');
		al.setTelefono(atoi(aux.c_str()));
		getline(fich,aux,',');
		al.setEmail(aux);
		getline(fich,aux,',');
		al.setDireccion(aux);
		getline(fich,aux,',');
		al.setPostal(atoi(aux.c_str()));
		getline(fich,aux,',');
		al.setNacimiento(aux);
		getline(fich,aux,',');
		al.setCursoMasAlto(atoi(aux.c_str()));
		getline(fich,aux,',');
		al.setEquipo(atoi(aux.c_str()));
		getline(fich,aux,';');
		al.setLider(atoi(aux.c_str()));


		alumnos_.push_back(al);


	}


}