#include <iostream>

int main()
{
	int firstNumber, secondNumber;
	int arr[100] = { };

	std::cin >> firstNumber >> secondNumber;


	for (int i = 0; i < secondNumber; i++)
	{
		int j, k, num;
		std::cin >> j >> k >> num;


		for (j ; j < k + 1; j++)
		{
			arr[j - 1] = num;
		}
	}

	for (int i = 0; i < firstNumber; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}