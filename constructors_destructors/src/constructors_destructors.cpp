//============================================================================
// Name        : constructors_destructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "Starting Program" << endl;

	{
	Cat cat;
	cat.speak();
	}

	cout << "Ending Program" << endl;
	return 0;
}
