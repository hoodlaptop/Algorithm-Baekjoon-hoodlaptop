#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) 
{
    string answer = "";
    int sum = 0;
    
    vector<string> week = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < a - 1; ++i)
    {
        sum += month[i];
    }
    sum += b - 1;
    
    answer += week[sum % 7];
    
    return answer;
}