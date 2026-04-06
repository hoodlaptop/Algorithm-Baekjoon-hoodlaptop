#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) 
{
    int answer = 0;
    
    string can[4] = {"aya", "ye", "woo", "ma"};
    
    for (int i = 0; i < babbling.size(); ++i)
    {
        string word = babbling[i];
        int perIndex = -1;
        
        for (int j = 0; j < 4; ++j)
        {
            if (word.length() >= can[j].length() && 
                word.substr(0, can[j].size()) == can[j] && perIndex != j)
            {
                word.erase(0, can[j].size());
                
                perIndex = j;
                j = -1;
            }

            if (word.empty())
            {
                break;
            }
        }

        if (word.size() == 0)
        {
            answer++;
        }
    }
    
    return answer;
}