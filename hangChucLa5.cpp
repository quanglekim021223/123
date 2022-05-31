#include<bits/stdc++.h>
using namespace std;

#define MAX 100

void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int so5HangChuc(int n);
int sum(int a[], int n);

int main(){
    int a[MAX], n;
    nhapMang(a, n);
    xuatMang(a, n);
    cout<<endl;
    int kq=sum(a, n);
    cout<<"Tong la: "<<kq;

    return 0;
}
void nhapMang(int a[], int &n){
    do{
        cout<<"Nhap so luong phan tu trong mang: ";
        cin>>n;
    }while(n<=0 || n>100);

    for(int i=0; i<n; i++){
        cout<<"Nhap phan tu trong mang a["<<i<<"]: ";
        cin>>a[i];
    }
}

void xuatMang(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int so5HangChuc(int n){
    n=abs(n);
    n/=10;
    int hangChuc = n%10;
    if(hangChuc==5){
        return 1;
    }
    return 0;
}

int sum(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if(so5HangChuc(a[i])==1){
            sum+=a[i];
        }
    }
    return sum;
}