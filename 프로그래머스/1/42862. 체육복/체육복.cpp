#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    vector<int> realLost, realReserve;
    for (int l : lost)
    {
        if (find(reserve.begin(), reserve.end(), l) == reserve.end())
            realLost.push_back(l);
    }
    for (int r : reserve)
    {
        if (find(lost.begin(), lost.end(), r) == lost.end())
            realReserve.push_back(r);
    }

    int answer = n - (int)realLost.size();

    for (int& r : realReserve)
    {
        for (auto it = realLost.begin(); it != realLost.end(); ++it)
        {
            if (*it == r - 1 || *it == r + 1)
            {
                answer++;
                realLost.erase(it);
                break;
            }
        }
    }

    return answer;
}