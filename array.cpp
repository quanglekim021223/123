#include<iostream>
#include<string>

#define MAX 3
using namespace std;
int main(){
	int arr[MAX];
	cout<<"Array input: "<<endl;
	for(int i = 0; i < MAX; i++){
		cout<<"arr["<<i<<"]= ";
		cin>>arr[i];
	}
	for(int i = 0; i<MAX; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
