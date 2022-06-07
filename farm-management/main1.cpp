#include<iostream>
#include "FarmFanction.h"
#include<vector>

int main(int argc, char** argv){
	
	FarmFanctions *farm = new FarmFanctions();
	vector<Pet*> pets= farm->createPets();
	cout<<"Thong tin cac con vat trong nong trai: "<<endl;
	for (int i = 0; i < pets.size(); i++){
		pets[i]->ShowMe();
	}
	
	vector<string> foods = {"xuong", "ca", "thoc", "cam"};
	farm->doFoodForPets(pets, foods);
	for (int i = 0; i < pets.size(); i++){
		pets[i]->ShowMe();
	} 
	return 0;
}
