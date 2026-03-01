#include <iostream>

int main()
{
	int arrsize;
	int arr[101] = {  };
	int find;
	int num= 0;

	std::cin >> arrsize;

	for (int i = 0; i < arrsize; i++)
	{
		std::cin >> arr[i];
	}

	std::cin >> find;
	for (int i = 0; i < arrsize; i++)
	{
		if (find == arr[i])
		{
			num++;
		}
	}

	std::cout << num;


	return 0;
}