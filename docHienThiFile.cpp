#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    ifstream inputFile("text.txt");
    if(inputFile.fail()){
        cout<<"Fail"<<endl;
        return -1;
    } 
    int number;
    while (!inputFile.eof()){
        inputFile>>number;
        cout<<number<< " ";
    }

    return 0;
}