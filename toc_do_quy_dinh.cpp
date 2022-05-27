#include<iostream>
using namespace std;

int main()
{
	int toc_do_quy_dinh=50;
	int toc_do_thuc_te;
	
	cout<<"Nhap toc do thuc te: ";
	cin>>toc_do_thuc_te;
	if(toc_do_thuc_te > toc_do_quy_dinh && toc_do_thuc_te <= 60){
		cout<<"Tien phat la: 300 000d";
	} else if(toc_do_thuc_te > 60 && toc_do_thuc_te <= 70){
		cout<<"Tien phat la: 1 000 000d";
	} else if (toc_do_thuc_te>70) {
		cout<<"Tien phat la: 5 000 000d";
	}
	return 0;
}
