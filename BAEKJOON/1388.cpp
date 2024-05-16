#include <iostream>
using namespace std;

string tiles[50];
int m, n, ans;

void row(int x, int y)
{
    if (x == n) return;
    if (tiles[y][x] == '-')
    {
        tiles[y][x] = ' ';
        row(x + 1, y);
    }
}

void column(int x, int y)
{
    if (y == m) return;
    if (tiles[y][x] == '|')
    {
        tiles[y][x] = ' ';
        column(x, y + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        cin >> tiles[i];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tiles[i][j] == '-')
            {
                ans++;
                row(j, i);
            }
            else if (tiles[i][j] == '|')
            {
                ans++;
                column(j, i);
            }
        }
    }

    cout << ans;
}