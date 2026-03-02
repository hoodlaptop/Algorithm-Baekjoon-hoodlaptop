#include <iostream>

int main()
{
	int arr[9] = { };
	int max = arr[0];
	int count;

	for (size_t i = 0; i < 9; i++)
	{
		std::cin >> arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
			count = i + 1;
		}
	}

	std::cout << max << "\n" << count;

	return 0;
}