#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;
    int big1 = 0, big2 =0;
    
    
    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] < sizes[i][1])
        {
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    
    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] > big1)
        {
            big1 = sizes[i][0];
        }
        
        if (sizes[i][1] > big2)
        {
            big2 = sizes[i][1];
        }
    }
    
    answer = big1 * big2;
    return answer;
}