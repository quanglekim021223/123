#include<iostream>
using namespace std;

int main(){
	int lcb=2000000;
	int luong, thuong;
	cout<<"Nhap tien luong: ";
	cin>>luong;
	if(luong<2000000){
		thuong=1.3*lcb;
		cout<<"Tien thuong la: "<<thuong;
	}else if(luong>=2000000 && luong<3000000){
		thuong=1.5*lcb;
		cout<<"Tien thuong la: "<<thuong;
	} else if(luong>=3000000 && luong<5000000){
		thuong=1.7*lcb;
		cout<<"Tien thuong la: "<<thuong;
	} else {
		thuong=1.9*lcb;
		cout<<"Tien thuong la: "<<thuong;
	}
	return 0;
}
