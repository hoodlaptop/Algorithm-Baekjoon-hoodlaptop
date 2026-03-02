#include <iostream>

int main()
{
	int m, b;
	int max = -1000000, min = 1000000;

	std::cin >> m;

	for (int i = 0; i < m; i++)
	{
		std::cin >> b;
		if (b < min)
			min = b;
		if (b > max)
			max = b;
	}
	
	std::cout << min << " " << max << "\n";

	return 0;
}