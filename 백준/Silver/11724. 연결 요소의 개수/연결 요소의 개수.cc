#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> graph[1001];
bool visited[1001];

void dfs(int node) 
{
    visited[node] = true;

    for (int next : graph[node]) 
    {
        if (!visited[next]) 
        {
            dfs(next);
        }
    }
}

int main() 
{
    int node, edge;
    int component_count = 0;
    
    if (!(cin >> node >> edge)) return 0;

    for (int i = 0; i < edge; ++i)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 0; i < node; ++i)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    
    memset(visited, false, sizeof (visited));
    
    for (int i = 1; i <= node; ++i) 
    {
        if (!visited[i]) 
        {
            dfs(i);
            component_count++;
        }
    }
    
    cout << component_count << '\n';
    
    return 0;
}
