/*
 * casa.cpp
 *
 *  Created on: 1 oct 2026
 *      Author: Mario
 */

#include <cstdlib>
#include <iostream>
#include "suma.h"

int suma(int arg1, int arg2) {
	return arg1 + arg2;
}

/*int main(int narg, char *arg[]) {
	int res;
	if (narg==1){
		res = suma(50,100);
		std::cout << "El resultado de sumar 50 y 100 es "<< res << std::endl;
		return 0;
	}
	if (narg==2){
		res = suma(atoi(arg[1]),100);
		std::cout << "El resultado de sumar " << arg[1] << " y 100 es "<< res << std::endl;
		return 0;
	}
	if (narg==3){
		res = suma(atoi(arg[1]),atoi(arg[2]));
		std::cout << "El resultado de sumar " << arg[1] << " y " << arg[2] << " es " << res << std::endl;
		return 0;
	}
}*/
