#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int map[26][26];
bool visited[26][26];
    
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int DFS(int x, int y)
{
    visited[x][y] = true;
    int count = 1;

    for (int d = 0; d < 4; ++d)
    {
        int new_x = x + dx[d];
        int new_y = y + dy[d];
        
        if (new_x >= 0 && new_x < N && new_y >= 0 && new_y < N
              && map[new_x][new_y] == 1 && !visited[new_x][new_y]) 
        {
            count += DFS(new_x, new_y);
        }
    }
    
    return count;
}

int main() 
{
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        string line;
        cin >> line;
        
        for (int j = 0; j < line.length(); ++j)
        {
            map[i][j] = line[j] - '0';
        }
    }
    
    vector<int> complexes;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (map[i][j] == 1 && !visited[i][j])
            {
                complexes.push_back(DFS(i, j));
            }
        }
    }
    
    sort(complexes.begin(), complexes.end());
    
    cout << complexes.size() << '\n';
    
    for (int c : complexes)
    {
        cout << c << '\n';
    }
    
    return 0;
}