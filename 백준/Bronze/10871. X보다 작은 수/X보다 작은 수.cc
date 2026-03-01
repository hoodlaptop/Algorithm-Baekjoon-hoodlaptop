#include <iostream>

int main()
{
	int a, b;
	int num;

	std::cin >> a >> b;

	for (int i = 0; i < a; i++)
	{
		std::cin >> num;
		if (b > num)
		{
			std::cout << num << " ";
		}
	}

	return 0;
}