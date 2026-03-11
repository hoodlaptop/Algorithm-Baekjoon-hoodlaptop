#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) 
{
    string answer = s;
        
    for (int i = 0; i < s.length(); i++)
    {
        sort(answer.begin(), answer.end(), greater<char>());
    }
    
    return answer;
}