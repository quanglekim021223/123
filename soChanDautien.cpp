#include<bits/stdc++.h>
using namespace std;

int find(int A[], int n){
    for(int i=0; i<n; i++){
        if(A[i]%2==0){
            return A[i];
        }
    }
    return -1;
}

int main(){
    int A[]{7,1,8,3,1};
    cout<<find(A,5);

    return 0;
}