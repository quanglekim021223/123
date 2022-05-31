#include<bits/stdc++.h>
using namespace std;

#define MAX 100
void in(int a[], int &n);

void ascending(int a[], int n);
void out(int a[], int n);
void decrease(int a[], int n);
int main(){
    int a[MAX], n;
    in(a, n);
    out(a, n);

    ascending(a, n);
    out(a, n);

    decrease(a, n);
    out(a, n);

    return 0;
}

void in(int a[], int &n){
    do{
        cout<<"Enter the number of array: ";
        cin>>n;
    }while(n<=0 || n>MAX);

    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void out(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void ascending(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

void decrease(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}