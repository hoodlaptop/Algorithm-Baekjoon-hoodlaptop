#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;
vector<string> graph;
vector<vector<bool>> visited;
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int x, int y, char color) 
{
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) 
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < n) 
        {
            if (!visited[nx][ny] && graph[nx][ny] == color) 
            {
                dfs(nx, ny, color);
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    graph.resize(n);
    visited.resize(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) 
    {
        cin >> graph[i];
    }

    int cnt_not_cb = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (!visited[i][j]) 
            {
                cnt_not_cb++;
                dfs(i, j, graph[i][j]);
            }
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (graph[i][j] == 'G') 
            {
                graph[i][j] = 'R';
            }
            visited[i][j] = false;
        }
    }

    int cnt_cb = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (!visited[i][j]) 
            {
                cnt_cb++;
                dfs(i, j, graph[i][j]);
            }
        }
    }

    cout << cnt_not_cb << " " << cnt_cb << endl;

    return 0;
}
