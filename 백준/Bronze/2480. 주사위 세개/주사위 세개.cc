#include <iostream>
using namespace std;

int main()
{
    int input_1, input_2, input_3;

    cin >> input_1 >> input_2 >> input_3;

    if (input_1 == input_2 && input_2 == input_3)
    {
        cout << 10000 + (input_1 * 1000);
    }
    else if (input_1 == input_2 || input_1 == input_3)
    {
        cout << 1000 + (input_1 * 100);
    }
    else if (input_2 == input_3)
        cout << 1000 + (input_2 * 100);
    else
        cout << max(max(input_1, input_2), input_3) * 100;

    return 0;
}
