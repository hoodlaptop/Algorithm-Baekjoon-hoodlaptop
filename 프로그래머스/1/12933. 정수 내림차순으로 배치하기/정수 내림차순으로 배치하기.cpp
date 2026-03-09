#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    vector<long long> temp;

    while (n)
    {
        temp.push_back(n%10);
        n /= 10;
    }
    
    sort(temp.begin(), temp.end(), greater<long long>());
    
    for (long long i = 0; i < temp.size(); i++)
    {
        answer *= 10;
        answer += temp[i];
    }
    
    return answer;
}