#include <iostream>

using namespace std;


int main() {

	int input;
	cin >> input;

	for (int i = 1; i <= input; i++) 
	{
		for (int k = 0; k < input - i; k++) 
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++) 
		{
			cout << "*";
		}
		cout << '\n';
	}

	return 0;
}