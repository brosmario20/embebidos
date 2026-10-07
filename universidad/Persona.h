/*
 * persona.h
 *
 *  Created on: 7 oct 2026
 *      Author: Mario
 */



#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream> 							   // declaración de std, cout ...
#include <string>   							   // declaración de string
#include <vector>   							   // declaración de vector

class Persona {
protected:										   //Los siguientes miembros son protegidos (solo pueden acceder a el las clases heredadas de Persona)
	std::string nombre;     					   // Nombre de la persona (string sirve para almacenar texto)
	std::string apellidos;  					   // Apellidos
	std::string ID;        						   // Código DNI
	static std::vector<Persona*> personList; 	   // Se define un vector llamado personlist que contiene las direcciones de memoria de los objetos persona

public:
	Persona();                                     // comnstructor sin argumentos, si se le llama sin argumentos no escribe nada
	// Inserta persona en personList si no está en la lista
	Persona(std::string ID, std::string Nombre, std::string Apellidos); //Constructor con argumentos, se definen los argumentos que hay que pasarle
	virtual ~Persona(); //Destructor

	bool isOnList(std::string identificador);      //Funcion llamada isOnList, comprueba si el identificador esta en la lista

	int nPersonas() { return personList.size(); }  //Funcion nPersonas, devuelve el numero de personas que hay en la lista personlist

	virtual void print(); 						   // void -> la funcion print() no devuelve ningun valor
	std::string printPersona() {				   //La funcion printPersona devuelve un string
		std::string ret = ID + std::string(" : ") + apellidos + std::string(" , ") + nombre;  //Se crea un string con nombre, apellidos y dni
		return ret;								   //Se devuelve el string creado con nombre apellidos y dni
	}
};


#endif /* PERSONA_H_ */
