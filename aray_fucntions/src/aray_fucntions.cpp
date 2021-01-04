//============================================================================
// Name        : aray_fucntions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void show1(const int nrelements,string texts[]){
	for(int i=0; i<nrelements;i++){
		cout << texts[i]<< endl;
	}
}

void show2(const int nelements, string* texts){
	for(int i=0; i<nelements;i++,texts++){
		cout << *texts << endl;
	}
}

void show3(string (&texts)[4]){
	for(int i=0; i<(int)(sizeof(texts)/sizeof(string));i++){
		cout << texts[i]<< endl;
	}
}

char* getMemory(){
	char *pMem = new char[100];
	return pMem;
}

void delMemory(char* pMem){
	delete [] pMem;
}

int main() {

	string texts[] = {"one", "two", "three","four"};
	string* ptexts = texts;
	//show1(3, texts);
	//show2(4,ptexts);
	//show3(texts);

	char* pmem = getMemory();
	for(int i=0;i<(int)(100/sizeof(pmem));i++,pmem++){
		*pmem=i;
		cout << *pmem << " " << i << endl;
	}
	//cout << sizeof(pmem)<< endl;
	//cout << *pmem << endl;
	delMemory(pmem);

	char c = 'a';
	string name(2,c);
	cout << name << endl;

	return 0;
}
