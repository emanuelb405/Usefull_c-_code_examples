//============================================================================
// Name        : pointer_array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string texts[4] = {"one", "two", "three", "four"};
	cout << sizeof(texts)/sizeof(string) << endl;

	string* pTexts = &texts[0];
	cout << pTexts << endl;

	int Value = 8;
	int* pValue = &Value;

	string text = "String";
	string* ptext = &text;

	cout << ptext <<endl;

	cout << *pValue << endl;



	string* pstart = &texts[0];
	string* pend = &texts[3];

	while(true) {
		int i = 0;
		cout << *pstart << " " << flush;
		if(pstart==pend){
			break;
		}
		pstart++;
		cout << text[i]<<endl;
		i++;
	}

	return 0;
}
