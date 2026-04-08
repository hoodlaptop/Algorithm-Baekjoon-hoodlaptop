#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> vec[101];
bool visited[101];

int dfs(int v, int count) 
{
    visited[v] = true;
    for (int next : vec[v]) 
    {
        if (!visited[next]) 
        {
            count = dfs(next, count + 1);
        }
    }
    return count;
}

int main() 
{
    int computer_size, network_size;
    if (!(cin >> computer_size >> network_size)) return 0;

    for (int i = 0; i < network_size; i++) 
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for (int i = 1; i <= computer_size; ++i) 
    {
        sort(vec[i].begin(), vec[i].end());
    }

    memset(visited, false, sizeof(visited));
    
    cout << dfs(1, 0) << '\n';

    return 0;
}
