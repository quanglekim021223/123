#include<bits/stdc++.h>
using namespace std;

int max(int a[], int n);
int main(){
    ifstream docFile("soChan.txt");
    if(docFile.fail()){
        cout<<"Fail";
        return -1;
    }
    int number[100], i = 0;
    while(!docFile.eof()){
        docFile>>number[i];
        i++;
    }
    for(int j=0; j<i;j++){
        cout<<number[j]<<" ";
    }
    
    ofstream ghiFile("ketQuaSoChan.txt");
    int MAX = max(number, i);
    ghiFile<<MAX;
   

    return 0;
}

int max(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        if(a[i]%2==0){
            cout<<endl<<a[i];
        }
    }
    return a[i];
}