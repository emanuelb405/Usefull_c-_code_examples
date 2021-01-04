/*
 * Cat.cpp
 *
 *  Created on: Dec 16, 2020
 *      Author: buchholz
 */
#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat(){
	cout << "Constructor" << endl;
	happy = true;
}

Cat::~Cat(){
	cout << "Cat destroyed" << endl;
}

void Cat::speak(){
	if(happy){
		cout << "Meww" << endl;
	}else{
		cout << "sssss" << endl;
	}
}


