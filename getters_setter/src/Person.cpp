/*
 * Person.cpp
 *
 *  Created on: Dec 16, 2020
 *      Author: buchholz
 */
#include "Person.h"
#include "iostream"
using namespace std;

Person::Person(){
	cout << "Constructor" << endl;
	name = "George";
};

string Person::toString(){
	return "Persons name is " + name ;
};

void Person::setName(string newName){
	name = newName;
}

Person::~Person(){
	cout << "Destructor " << endl;
};


