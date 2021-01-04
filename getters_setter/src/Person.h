/*
 * Person.h
 *
 *  Created on: Dec 16, 2020
 *      Author: buchholz
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
	string name;
public:
	Person();
	~Person();
	string toString();
	void setName(string newName);

};



#endif /* PERSON_H_ */
