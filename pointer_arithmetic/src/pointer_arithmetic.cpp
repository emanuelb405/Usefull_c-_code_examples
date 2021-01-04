//============================================================================
// Name        : pointer_arithmetic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int NSTRINGS = 5;

	string texts[NSTRINGS] = {"one", "two", "three", "four"};

	string* ptexts = texts;

	cout << *ptexts << endl;

	ptexts += 3;

	cout << *ptexts << endl;

	ptexts -= 2;

	cout << *ptexts << endl;

	string* pStart = &texts[0];
	string* pEnd = &texts[NSTRINGS-1];

	while(pStart < pEnd){
		cout << *pStart << endl;
		pStart++;
	}

	pStart = &texts[0];

	cout << pEnd << " " << pStart << endl;
	long elements = (long)(pEnd - pStart);

	cout << elements << endl;


	return 0;
}
