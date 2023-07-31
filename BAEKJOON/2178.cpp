#include<iostream>
#include<queue>
using namespace std;

int n, m, a, b, ans, dst;
queue<pair<int, int>> q;
bool visited[101][101];
string s;

void bfs(int y, int x){
    if(!visited[y][x]) return;
    q.push({y, x});
    visited[y][x] = false;
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> s;
        for(int j = 0; j < m; j++)
            if(s[j] == '1') visited[i][j+1] = true;
    }

    q.push({1, 1});
    visited[1][1] = false;
    while(visited[n][m]){
        ans++;
        dst = q.size();  
        for(int i = 0; i < dst; i++){
            a = q.front().first;
            b = q.front().second;

            if(a > 1) bfs(a - 1, b);
            if(a < n) bfs(a + 1, b);
            if(b > 1) bfs(a, b - 1);
            if(b < m) bfs(a, b + 1);

            if(!visited[n][m]) break;
            q.pop();
        }
    }

    cout << ans + 1;
}