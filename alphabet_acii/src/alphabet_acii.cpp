//============================================================================
// Name        : alphabet_acii.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char start = 'a';
	char end = 'z';
	while(start!=end){
		cout << start << endl;
		start++;
	};
	cout << end << endl;
	return 0;
}
