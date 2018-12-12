//ClaseAgenda.cc realizada por Jorge Jesús Chaparro Ibarra
//Métodos de la clase Agenda

#include <iostream>
#include <string>
#include <fstream>

#include "Agenda.h"

using namespace std;

void Agenda::mainmenu(){
	int choice;
	bool cinfail;
	cout << "Hola, ¿Qué quieres hacer, loguearte o registrarte?\n[1] Login\n[2] Registrar" <<endl;
	cin >> choice; 
	do{
    cinfail = cin.fail();
    cin.clear();
    cin.ignore(10000,'\n');
    int choice;

    }while(cinfail == true);{
        switch(choice){
            case 1:
                login();
                break;

            case 2:
                registerme();
                break;
        }
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

void Agenda::registerme(){
	int confirmation;
	string usuario;
    cout << "Por favor, introduce el nombre de Usuario que deseas: " << endl;
    getline(cin, usuario);
    cout << "\nUsuario -  \""<< usuario << "\"\n¿Estás seguro? \n\n[1] Sí\n[2] No" << endl;
    cin >> confirmation;
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
    cout << "Por favor, vuelve a introducir la contraseña: " << endl;
    cin >> password2;
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
}