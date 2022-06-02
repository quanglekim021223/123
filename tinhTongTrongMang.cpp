#include<bits/stdc++.h>
using namespace std;

int add(int a, int b);
int main(){
    int a, b;
    cout<<"Nhap a: "; cin>>a;
    cout<<"Nhap b: "; cin>>b;
    cout<<add(a, b);
    return 0;
}

 int add(int a, int b){
     int sum = 0;
     for(int i=a; i<=b; i++){
         sum=sum+i;
     }
     return sum;
 }