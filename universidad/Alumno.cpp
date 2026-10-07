/*
 * Alumno.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Mario
 */

#include "Alumno.h"
#include "Persona.h"

template <int curso> // permite tener alumno<1> (curso 1) y alumno<2> (curso 2) separandoles por cursos

Alumno<curso>::Alumno(std::string ID, std::string Nombre, std::string Apellidos) : Persona::Persona(ID, Nombre, Apellidos) {
}

template <int curso>
Alumno<curso>::~Alumno() {
	// TODO Auto-generated destructor stub
}

template <int curso>
bool Alumno<curso>::matricula(std::string asignatura){ //true si la asignatura no esta en la lista (se incluye), false en caso contrario
	for (std::vector<std::string>::iterator it = courseList.begin(); it != courseList.end(); it++) {
		if (*it == asignatura) {
			return false; // Ya esta matriculado
		}
	}
	courseList.push_back(asignatura); // No esta en la lista, se inclute
	return true;
}

template <int curso>
void Alumno<curso>::print(){
	std::cout << "Listado de asignaturas en curso 24-25" << std::endl;
	std::cout << " Alumno: " << printPersona() << std::endl;
	for (std::vector<std::string>::iterator it = courseList.begin(); it != courseList.end(); it++) {
		std::cout << "  Asignatura: " << *it << std::endl;
	}

}

//template class Alumno<int>;
template class Alumno<24>;
