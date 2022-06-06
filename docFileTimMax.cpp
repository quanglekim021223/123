#include<bits/stdc++.h>
using namespace std;

int max(int a[], int n);
int main(){
    ifstream docFile("text.txt");
    if(docFile.fail()){
        cout<<"Fail";
        return -1;
    }
    int number[10], i =0;
    while(docFile>>number[i]){
        i++;
    }
    for(int j=0; j<i; j++){
        cout<<number[j]<<" ";
    }
    int m = max(number,i);

    ofstream ghiFile("ketqua.txt");
    ghiFile<<m;
    return 0;
}

int max(int a[], int n){
    int max=a[0];
    for(int i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
    }
   
   return max;
}