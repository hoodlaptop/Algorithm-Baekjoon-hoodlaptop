#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    
    for (int i = 0; i < s.length(); i++) 
    {
        size_t prev_pos = s.rfind(s[i], i - 1);
        
        if (i == 0)
        {
            answer.push_back(-1);
        }
        else
        {
            if (prev_pos == string::npos) 
            {
                answer.push_back(-1);
            
            } 
            else 
            {
                answer.push_back(i - (int)prev_pos);
            
            }
        }
        
    }
    
    return answer;
}