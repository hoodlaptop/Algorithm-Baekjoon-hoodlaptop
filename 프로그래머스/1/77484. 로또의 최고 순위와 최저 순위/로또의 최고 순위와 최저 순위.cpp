#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) 
{
    vector<int> answer; 
    int count = 0;
    int temp = 0;
    
    for (int i = 0; i < lottos.size(); i++)
    {
        if (lottos[i] == 0)
        {
            temp++;
        }
        for (int j = 0; j < win_nums.size(); ++j)
        {
            if (lottos[i] == win_nums[j])
            {
                count++;
            }
        }
    }
    temp += count;
    
    count = -count +7;
    if (count > 6) count = 6;
    
    answer.push_back(count);
    
    temp = -temp + 7;
    if (temp > 6) temp = 6;
    answer.push_back(temp);
    sort(answer.begin(), answer.end());
    
    return answer;
}