#ifndef _farm_management_dog_h
#define _farm_management_dog_h

#include "Pet.h"
class Dog : public Pet{
	public:
		Dog (string name, float weight, string color, int age) : Pet(name, weight, color, age){}
		void Gau(){
			cout<<"Gau..Gau..Gau"<<endl;
		}
};

#endif
