#include<iostream>
#include "Cat.h"
#include "Dog.h"
#include "Chicken.h"
#include "Pig.h"
#include<vector>

int main(int argc, char** argv){
	
	Cat	*cat1 = new Cat("Muimui", 2.5,"trang", 3);
	Dog *dog1 = new Dog("Lulu", 5.7, "black", 4);
	Chicken *chicken1 = new Chicken(" Mao ", 1.2," Red ", 1);
	Pig *pig1 = new Pig("Hi", 10.3,"Pink", 2);

	vector<Pet*> pets;
	pets.push_back(dog1);
	pets.push_back(cat1);
	pets.push_back(chicken1);
	pets.push_back(pig1);
	
	for(auto pet : pets){
		pet->ShowMe();
	}
	
	return 0;
}
