#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,ketqua;
	char c;
	cin>>a>>b>>c;
	switch (c){
		case '+':{
			ketqua=a+b;
			break;
		}
		case '-':{
			ketqua=a-b;
			break;
		}
		case '*':{
			ketqua=a*b;
			break;
		}
		case '/':{
			if (b!=0) ketqua=a/b;
			break;
		}
		case '%':{
			if (b!=0) ketqua=a%b;
			break;
		}
		default : cout<<"ban nhap sai";
	}
	cout<<a<<c<<b<<"="<<ketqua;
	return 0;
}
