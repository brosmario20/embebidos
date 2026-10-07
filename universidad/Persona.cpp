/*
 * persona.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Mario
 */


#include "Persona.h"

// Declaracion de miembros estaticos y, opcionalmente, su inicializacion
std::vector<Persona *> Persona::personList;
//std::vector<Persona *>  ->  Es un vector que guarda las direcciones de memoria donde estan almacenados los objetos persona
// Persona::personlist  ->  quiere decir que personlist pertenece a la clase Persona


// Metodo que comprueba si un elemento está en la lista
bool Persona::isOnList(std::string identificador) {
//bool -> la funcion devuelve true/false. std::string identificador -> como argumento se le pasa un dni a la fun
	for( std::vector<Persona *>::iterator it=personList.begin(); it < personList.end(); it++) {
//Bucle for que empieza en el primer valor de la lista personlist, y la recorre mientras i sea menor que el ultimo valor de personlist
		if((*it)->ID==identificador) { //it apunta a un elemento, asi que *it da la direccion de memoria de ese elemento
			return true; // Encontrado!
		}
	}
	return false; // No encontrado
}

// Constructor con identificadores
Persona::Persona(std::string ID, std::string Nombre, std::string Apellidos) : nombre(Nombre),apellidos(Apellidos),ID(ID) {
// : nombre(Nombre),apellidos(Apellidos),ID(ID) asigna a nombre el valor asignado a Nombre, lo mismo con apellidos e ID
	if(isOnList(ID)==false) { //Se comprueba que la persona no este ya en la lista
		personList.emplace_back(this); // Si la persona no esta en la lista le inserta
//this -> es la direccion del objeto que se esta creando. emplace_back -> añade un elemento al final del vector
	}
}

// Constructor dummy
Persona::Persona() {} // si se llama al constructor sin argumentos no se añade nada

// Destructor
Persona::~Persona() {
	int remove= -1; // Elemento a eliminar, se le pone -1 hasta darle un valor ya que el vector no tiene posicion -1
	for(int i=0; i < nPersonas(); i++) {
		if(personList[i]==this) {
//this --> direccion de memoria del objeto que se quiere eliminar, cuando coincide con una direccion, se guarda la posicion en el vector de ese valor
			remove=i;
		}
	}
	if(remove != -1) { //si remove distinto de -1 quiere decir que hay que borrar ese objeto
		personList.erase(personList.begin()+remove);
	}
}

	// Escribe la lista de personas, una por línea
void Persona::print() {
	std::cout << "Lista de Personas en la lista" << std::endl;
	for (std::vector<Persona *>::iterator i = personList.begin(); i != personList.end(); i++) { //i recorre el vector personList
		std::cout << " Personal Data: " << (*i)->printPersona() << std::endl;
// i tiene la posicion en el vector, *i obtiene la direccion de memoria del objeto, llamando a printPersona se escriben los datos de dicho objeto por pantalla
	}
}
