#include<bits/stdc++.h>
using namespace std;

void kt(int a[], int n);
int main(){
    int n;
    int a[]={21,7,63, 23, 45};
    for(auto item : a){
        cout<<item<<endl;
    }
    kt(a, n);
}
void kt(int a[], int n){
    int dem=0;
    for(int i=0; i<5; i++){
        
        if(a[i]%7==0){
            dem+=1;
        }
        
    }
    cout<<"Co "<<dem<<" so duong chia het cho 7";
}