#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream docFile("docFile.txt");
    if(docFile.fail()){
        cout<<"Fail";
        return -1;
    }
    while(!docFile.eof()){
        char temp[255];
        docFile.getline(temp,255);
        string line = temp;
        cout<<line<<endl;
    }
}