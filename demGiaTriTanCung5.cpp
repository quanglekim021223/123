#include <bits/stdc++.h>
using namespace std;

#define MAX 100
void in(int a[], int &n);
void out(int a[], int n);
int count(int n);
int sum(int a[], int n);
int main(){
    int a[MAX], n;

    in(a, n);
    out(a, n);
    cout<<endl;
    int kq=sum(a, n);
    cout<<"So luong gia tri tan cung bang 5 la: "<<kq;

    return 0;
}

void in(int a[], int &n){
    do{
        cout<<"Nhap so luong: ";
        cin>>n;
    }while(n <= 0 || n > MAX);

    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}

void out(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int count(int n){
    int sum=0;
    n%=10;
    if(n==5){
        return 1;
    }
}

int sum(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if(count(a[i])==1){
            sum+=1;
        }
    }
    return sum;
}
