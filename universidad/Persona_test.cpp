/*
 * Persona_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Mario
 */

#include "gtest/gtest.h"
#include "Persona.h"

// Test destructor
TEST(Persona, destructor) {
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	{
		Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");
		//Solo tiene que haber 2 personas en la lista
		ASSERT_EQ(p2.nPersonas(), 2);
		//Comprobar que su id es correcto
		ASSERT_TRUE(p2.isOnList("000000000B"));
	}
	ASSERT_EQ(p2.nPersonas(), 1);
	ASSERT_FALSE(p2.isOnList("000000000B"));
}

// Test constructor
TEST(Persona, constructor) {
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2; // dummy: no se inserta
	ASSERT_EQ(p2.nPersonas(), 1);
	ASSERT_TRUE(p2.isOnList("123456789A"));
	ASSERT_FALSE(p2.isOnList("000000000B"));
}

// Test print
TEST(Persona, print) {
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");
	std::cout << p1.printPersona() << std::endl;
	std::cout << p3.printPersona() << std::endl;
	p1.print();
	ASSERT_EQ(p1.nPersonas(), 2);
}


