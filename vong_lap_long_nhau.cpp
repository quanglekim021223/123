#include<iostream>
using namespace std;

int main()
{
	int outer(1);
	while (outer <= 5)
	{
		int inner(1);
		while (inner <= outer)
		{
			cout << inner << " ";
			inner++;
		}
		cout << endl;
		outer++;
	}
	
	return 0;
}
