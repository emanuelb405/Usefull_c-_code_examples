//============================================================================
// Name        : getters_setter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;


int main() {
	Person person1;
	cout << person1.toString() << endl;
	string newName = "georgina";
	person1.setName(newName);
	cout << person1.toString() << endl;

	return 0;
}
