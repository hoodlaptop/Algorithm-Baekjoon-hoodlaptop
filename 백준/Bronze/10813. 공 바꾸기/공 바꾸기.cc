#include <iostream>

int main()
{
	int firstNumber, secondNumber;
	int arr[100] = { };

	int temp;

	std::cin >> firstNumber >> secondNumber;

	for (int i = 0; i < firstNumber; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < secondNumber; i++)
	{
		int a, b;

		std::cin >> a >> b;

		temp = arr[a -1];
		arr[a - 1] = arr[b - 1];
		arr[b - 1] = temp;
	}

	for (int i = 0; i < firstNumber; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}