#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count;
    int a, b;
    cin >> count;

    vector<int> result(count);

    for (int i = 0; i < count; i++)
    {
        cin >> a >> b;
        result[i] = a + b;
    }

    for (int j = 0; j < count; j++)
    {
        cout << result[j] << endl;
    }

    return 0;
}
