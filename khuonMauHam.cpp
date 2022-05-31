#include<bits/stdc++.h>
using namespace std;

template<typename Type>
void Swap(Type& x, Type& y){
    Type Temp = x;
    x = y;
    y = Temp;
}

int main(){
    int a(4), b(2);
    float c(1.3), d(6.9);

    Swap(a, b);
    cout<<a<<" "<<b<<endl;
    Swap(c, d);
    cout<<c<<" "<<d;

    return 0;
}