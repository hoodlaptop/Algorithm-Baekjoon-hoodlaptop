#include <iostream>
#include <cstring>

using namespace std;

int M, N, planted;
int map[51][51];
bool visited[51][51];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) 
{
    visited[x][y] = true;
    for (int i = 0; i < 4; ++i) 
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) 
        {
            if (!visited[nx][ny] && map[nx][ny] == 1) 
            {
                dfs(nx, ny);
            }
        }
    }
}

int main() 
{
    int countTast;
    if (!(cin >> countTast)) return 0;
    
    while (countTast--) 
    {
        cin >> M >> N >> planted;

        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));
    
        for (int i = 0; i < planted; ++i) 
        {
            int x, y;
            cin >> x >> y;
            map[x][y] = 1;
        }
        
        int worm_count = 0;

        for (int i = 0; i < M; ++i) 
        {
            for (int j = 0; j < N; ++j) 
            {
                if (map[i][j] == 1 && !visited[i][j]) {
                    worm_count++;
                    dfs(i, j);
                }
            }
        }
        
        cout << worm_count << "\n";
    }
    
    return 0;
}
