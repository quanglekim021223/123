#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    ifstream FileInput("text.txt");
    if(FileInput.fail()){
        cout<<"Fali"<<endl;
        return 0;
    }   else{
        cout<<"Success";
    }

    return 0;
}