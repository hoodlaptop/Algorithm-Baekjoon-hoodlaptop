#include <iostream>

int main()
{
	int students[30] = { };

	for (int i = 0; i < 28; i++)
	{
		int num;
		std::cin >> num;

		students[num - 1] = 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (students[i] == 0)
		{
			std::cout << i + 1 << std::endl;
		}
	}

	return 0;
}