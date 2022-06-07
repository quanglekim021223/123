#ifndef _farm_management_chicken_h
#define _farm_management_chicken_h

#include "Pet.h"
class Chicken : public Pet{
	public:
		Chicken (string name, float weight, string color, int age) : Pet(name, weight, color, age){}
		void CucTac(){
			cout<<"CucTac..CucTac..CucTac"<<endl;
		}
		bool Eat(string food){
			if(food.compare("thoc")==0){
				this->SetWeight(this->GetWeight()+ 0.08);
				return true;
			}
			return false;	
		}
};

#endif
