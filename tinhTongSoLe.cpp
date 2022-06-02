#include<bits/stdc++.h>
using namespace std;

void soLe(int a, int b);
int main(){
    int a, b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    soLe(a, b);

    return 0;
}

void soLe(int a, int b){
    int sum = 0;
    for(int i=a; i<=b; i++){
        if(i % 2 != 0){
            sum=sum+i;
        }
    }
    cout<<sum;
}