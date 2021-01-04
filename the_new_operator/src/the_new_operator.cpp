//============================================================================
// Name        : new_operator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal(){cout << "Animal created" << endl;};
	Animal(const Animal &other):name(other.name){cout << "animal created by copying" << endl;};
	~Animal(){cout << "Animal destroyed"<<endl;};
	void setName(string name){this->name=name;};
	void speak(){cout << "naamme" << name<< endl;};
};

Animal* createAnimal(){
	Animal* pa = new Animal();
	pa->setName("Gunter");
	return pa;
}

int main() {
	/*//different way of instantiating
	Animal cat;
	cat.setName("Freddy");
	cat.speak();

	Animal *pcat1 = new Animal();
	pcat1->setName("Freddy");
	pcat1->speak();
	delete pcat1;
	*/

	/*//return objects from function
	Animal* a = createAnimal();

	a->speak();

	delete a;
*/

	//allocating memory

	Animal* pAnimal = new Animal[10];

	pAnimal[5].setName("hugoo");
	pAnimal[5].speak();

	delete [] pAnimal;



	return 0;
}
