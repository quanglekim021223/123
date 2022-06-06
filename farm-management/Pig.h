#ifndef _farm_management_pig_h
#define _farm_management_pig_h

#include "Pet.h"
class Pig : public Pet{
	public: 
		Pig (string name, float weight, string color, int age) : Pet(name, weight, color, age){}
		void Eo(){
			cout<<"Eo..Eo..Eo"<<endl;
		}
};

#endif
