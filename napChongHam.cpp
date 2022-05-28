#include<bits/stdc++.h>
using namespace std;

int sum(int x, int y){
    return x+y;   
}
int sum1(int x, int y, int z){
    return x+y+z;
}
int main(){
    int a(4), b(8), c(2);
    int result=sum1(a, b, c);
    cout<<result<<endl;

    return 0;
}