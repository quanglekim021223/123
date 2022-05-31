#include<bits/stdc++.h>
using namespace std;

#define MAX 100
void in(int a[], int &n);
void out(int a[], int n);
void appear(int a[], int &n);
int main(){
    int a[MAX], n;
    in(a, n);
    out(a, n);
    appear(a, n);
    return 0;
}

void in(int a[], int &n){
    do{
        cout<<"Nhap so luong phan tu: ";
        cin>>n;
    }while(n<=0 || n>100);

    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}

void out(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

void appear(int a[], int &n){
    int x;
    int sum=-1;
    cout<<endl<<"Chon x: ";
    cin>>x;
    for(int i=0; i<n; i++){
        if(x=i){
            sum+=1;
        }
    }
    cout<<"Gia tri x xuat hien "<<sum<<" lan";
}