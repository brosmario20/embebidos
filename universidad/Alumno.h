/*
 * Alumno.h
 *
 *  Created on: 7 oct 2026
 *      Author: Mario
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include "Persona.h"

template <int curso>
class Alumno: public Persona {
public:
	std::vector<std::string> courseList; // Se crea un vector que almacena strings (nombres de las asignaturas) llamado courseList

	Alumno(std::string ID, std::string Nombre, std::string Apellidos);
	bool matricula(std::string asignatura); // Matricula en asignatura
	void print();                           // Escribe lista asignaturas
	virtual ~Alumno();
};



#endif /* ALUMNO_H_ */
