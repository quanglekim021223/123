#include<bits/stdc++.h>
using namespace std;

void lietKe(int a, int b);
int main(){
    int a, b;
    cout<<"Nhap a, b: ";cin >> a >> b;
    lietKe(a, b);
    return 0;
}

void lietKe(int a, int b){
    for(int i=a; i<=b; i++){
        cout<<i<<" ";
    }
}
