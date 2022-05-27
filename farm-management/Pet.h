#ifndef _farm_management_pet_h
#define _farm_management_pet_h
#include<iostream>
#include<string>

using namespace std;

class Pet{
	int Id;
	string Name;
	float Weight;
	string Color;
	int Age;
	
	public:
		Pet(string name, float weight, string color, int age){
			this->Name = name;
			this->Weight= weight;
			this->Color = color;
			this->Age = age;
		}
		void SetName(string name){
			this->Name = name;
		} 
		string GetName(){
			return this->Name;
		}
		void SetWeight(float weight){
			if (weight > 0){
				this->Weight = weight;
			}
		}
		float GetWeight(){
			return this->Weight;
		}
		void SetColor(string color){
			this->Color = color;
		}
		string GetColor(){
			return this->Color;
		}
		void SetAge(int age){
			this->Age = age;
		}
		int GetAge(){
			return this->Age;
		}
		void ShowMe(){
			cout<<"Name: "<<this->Name<<" - Weight: "<<this->Weight<<" - Color: "<<this->Color<<" - Age: "<<this->Age<<endl;
		}
};

#endif
