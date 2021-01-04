/*
 * Cat.cpp
 *
 *  Created on: Dec 16, 2020
 *      Author: buchholz
 */
#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){
	if(happy){
		cout << "Meeewwww" << endl;
	}else{
		cout << "SSSSS" << endl;
	}
}


