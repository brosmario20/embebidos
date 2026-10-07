/*
 * alumno_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Mario
 */


#include "gtest/gtest.h"
#include "Alumno.h"

TEST(Alumno, matricula) {
	Alumno<24> a1("123456789A", "Nombre 1", "Apellidos 1");
	Alumno<24> a2("000000000B", "Nombre 2", "Apellidos 2");
	Alumno<24> a3("000000000C", "Nombre 3", "Apellidos 3");
	Persona dummy;

	ASSERT_EQ(dummy.nPersonas(), 3);
	ASSERT_TRUE(dummy.isOnList("123456789A"));

	ASSERT_TRUE(a1.matricula("ASE"));
	ASSERT_TRUE(a1.matricula("Embebidos"));
	ASSERT_TRUE(a1.matricula("SEM"));
	ASSERT_FALSE(a1.matricula("ASE"));
//Como ASE ya estaba no se matricula dos veces
	ASSERT_EQ(a1.courseList.size(), 3u);

	a1.print();

	std::cout << " Cuestion a justificar en la memoria" << std::endl;
	Persona *dat;
	dat = &a1;
	dat->print();
}

