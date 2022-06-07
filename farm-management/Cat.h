#ifndef _farm_management_cat_h
#define _farm_management_cat_h

#include "Pet.h"
class Cat : public Pet{
	public:
			Cat (string name, float weight, string color, int age) : Pet(name, weight, color, age){}
		void Meow(){
			cout<<"Meow..Meow..Meow"<<endl;
		}
		bool Eat(string food){
			if(food.compare("ca")==0){
				this->SetWeight(this->GetWeight()+ 0.1);
				return true;
			}
			return false;	
		}
};

#endif
