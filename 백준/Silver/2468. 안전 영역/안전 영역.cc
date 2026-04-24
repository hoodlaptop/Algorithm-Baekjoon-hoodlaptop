#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int N;
int map[101][101];
bool visited[101][101];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, int rain)
{
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < N
            && !visited[nx][ny] && map[nx][ny] > rain)
        {
            dfs(nx, ny, rain);
        }
    }
}

int main()
{
    cin >> N;

    int maxHeight = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> map[i][j];
            maxHeight = max(maxHeight, map[i][j]);
        }
    }

    int answer = 1;

    for (int rain = 1; rain < maxHeight; rain++)
    {
        memset(visited, false, sizeof(visited));
        int count = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (!visited[i][j] && map[i][j] > rain)
                {
                    dfs(i, j, rain);
                    count++;
                }
            }
        }

        answer = max(answer, count);
    }

    cout << answer << '\n';

    return 0;
}
