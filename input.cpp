#include <iostream>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    ifstream FileInput("input.txt");
    if (FileInput.fail())
    {
        cout << "Failed to open this file" << endl;
        return -1;
    } 
    int number; 
    while (!FileInput.eof()){
		FileInput >> number;
		cout<< number << " ";
	}
	return 0;
}
