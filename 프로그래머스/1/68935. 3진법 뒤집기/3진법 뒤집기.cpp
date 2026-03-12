#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    vector<int> base3;

    while (n > 0)
    {
        base3.push_back(n % 3);
        n /= 3;
    }
    
    int power = 1;
    
    for (int i = base3.size() - 1; i >= 0; i--)
    {
        answer = answer + base3[i] * power;
        power *= 3;
    }
    
    return answer;
}