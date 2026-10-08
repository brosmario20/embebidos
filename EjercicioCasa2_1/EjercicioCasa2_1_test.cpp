/*
 * EjercicioCasa2_1_test.cpp
 *
 *  Created on: 1 oct 2026
 *      Author: Mario
 */

#include <gtest/gtest.h>
#include "suma.h"

TEST(suma, test1) {
	ASSERT_EQ(suma(20,32),52);
}

TEST(suma, test2) {
	ASSERT_EQ(suma(50,32),92);
}


