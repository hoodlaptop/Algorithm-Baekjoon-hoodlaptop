#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    if (n == 0)
    {
        answer.push_back(0);
        return answer;
    }
    else
    {
        while (n != 0)
        {
            answer.push_back(n % 10);
            n = n / 10;
        }
    }
    
    return answer;
}