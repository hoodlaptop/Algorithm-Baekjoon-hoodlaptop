#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

vector<int> vec[1001];
bool visited[1001];

void dfs(int v) 
{
    visited[v] = true;
    cout << v << " ";
    for (int next : vec[v]) 
    {
        if (!visited[next]) dfs(next);
    }
}

void bfs(int start) 
{
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) 
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int next : vec[v]) 
        {
            if (!visited[next]) 
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() 
{
    int n, m, v;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) 
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) 
    {
        sort(vec[i].begin(), vec[i].end());
    }

    memset(visited, false, sizeof(visited));
    dfs(v);
    cout << "\n";

    memset(visited, false, sizeof(visited));
    bfs(v);

    return 0;
}
