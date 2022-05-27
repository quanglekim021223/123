#include<iostream>
using namespace std;

int main()
{
	int dien, tiendien;
	cout<<"Nhap so luong tieu thu dien trong thang cua ban: ";
	cin>>dien;
	if(dien<=50){
		tiendien=dien*1678;
		cout<<"Gia dien nha ban la: "<<tiendien;
	} else if(dien>=51 && dien <=100){
		tiendien=dien*1734;
		cout<<"Gia dien nha ban la: "<<tiendien;
	} else if(dien>=101 && dien <=200){
		tiendien=dien*2014;
		cout<<"Gia dien nha ban la: "<<tiendien;
	} else if(dien>=201 && dien <=300){
		tiendien=dien*2536;
		cout<<"Gia dien nha ban la: "<<tiendien;
	} else if(dien>=301 && dien <=400){
		tiendien=dien*2834;
		cout<<"Gia dien nha ban la: "<<tiendien;
	}else{
		tiendien=dien*2927;
		cout<<"Gia dien nha ban la: "<<tiendien;
	}
	return 0;
}
