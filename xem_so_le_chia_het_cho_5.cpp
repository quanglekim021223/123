#include<iostream>
using namespace std;

int main(){
	int x;
	cout<<"Nhap mot so nguyen: ";
	cin>>x;
	
	if(x%2!=0){
		cout<<x<<" La so le"<<endl;
		if(x%5==0){
			cout<<x<<" Chia het cho 5";
		}else{
			cout<<x<<" Khong chia het cho 5";
		}
	}else{
		cout<<x<<" Khong phai la so le";
	}
	return 0;
}
