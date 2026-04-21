#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 100005; 
vector<int> vec[MAX];
int parent[MAX];
bool visited[MAX];

void dfs(int v)
{
    visited[v] = true;

    for (int next : vec[v])
    {
        if (!visited[next])
        {
            parent[next] = v;
            dfs(next);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int node_size;
    if (!(cin >> node_size)) return 0;
    
    for (int i = 0; i < node_size - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    
    
    memset(visited, false, sizeof visited);
    
    dfs(1);

    for (int i = 2; i <= node_size; ++i)
    {
        cout << parent[i] << '\n';
    }
    
    return 0;
}
