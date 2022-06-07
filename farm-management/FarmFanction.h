#ifndef _pet_management_farm_fanctions_h_
#define _pet_management_farm_fanctions_h_

#include <vector>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "CHicken.h"
#include "Pig.h"
using namespace std;

class FarmFanctions{
	public:
		vector<Pet*> createPets(){
			Cat	*cat1 = new Cat("Muimui", 2.5,"trang", 3);
			Dog *dog1 = new Dog("Lulu", 5.7, "black", 4);
			Chicken *chicken1 = new Chicken(" Mao ", 1.2," Red ", 1);
			Pig *pig1 = new Pig("Hi", 10.3,"Pink", 2);

			vector<Pet*> pets;
			pets.push_back(dog1);
			pets.push_back(cat1);
			pets.push_back(chicken1);
			pets.push_back(pig1);
	
			return pets;
		}
		void doFoodForPets(vector<Pet*> pets, vector<string> foods){
			for (int i = 0; i < foods.size(); i++){
				for (int i = 0; i < foods.size(); i++){
					if (pet->Eat(foods[i])){
						foods[i] = "";
					}
				}
			}
		}
};
#endif
 
