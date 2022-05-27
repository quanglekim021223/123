#include<iostream>
#include "Cat.h"
#include "Chicken.h"

int main(int argc, char** argv){
	Cat *c = new Cat("Meo", 3, "Red", 6);
	c->ShowMe();
	c->Meow();
	
	Chicken *g = new Chicken("Ga", 1, "Pink", 9);
	g->ShowMe();
	g->CucTac();
	
	return 0;
}
