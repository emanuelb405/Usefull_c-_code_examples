//============================================================================
// Ncharame        : char_array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/*
	char text[] = "hello";

	for(int i=0;i<sizeof(text);i++){
		cout << i << " " << text[i] << endl;
	}
	int k = 0;
	while(true){
		if(text[k] == 0){
			break;
		}

		cout << text[k] << flush;

		k++;
	}
	*/
	/*
	char text[] = "hello";

	const int LENGTH = sizeof(text)-1;

	char* ptextStart = &text[0];
	char* ptextEnd = &text[LENGTH];
	char temp1;
	char temp2;
	int j = LENGTH;
	for(int i=0;i<(int)sizeof(text)/2;i++){
		temp1 = *ptextStart;
		temp2 = *ptextEnd;
		*ptextStart = temp1;
		*ptextEnd= temp2;
		i++;
		j--;
	}
	*/

	char text[] = "h";
	const int LENGTH = sizeof(text)-1;
	char *pstart = &text[0];
	char *pend = &text[LENGTH-1];

	cout << *pstart << *pend << endl;

	while(pstart!=pend){
		char temp = *pstart;
		*pstart = *pend;
		*pend = temp;

		pstart++;
		pend--;
	}

	cout << text << endl;

	return 0;
}
