/*
백준 14940

#알고리즘#
1. 그래프 이론

#오류#
1. 재귀 탐색
*/

#include<iostream>
#include<queue>
using namespace std;

int map[1000][1000];
int visited[1000][1000];
int n, m, x, y, cnt, sum, step;
queue<pair<int, int> > q;

void push(int a, int b){
    if(map[a][b] != 1) return;
    q.push(make_pair(a, b));
    map[a][b] = 0;
    visited[a][b] = step;
    cnt++;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int a = 0; a < n; a++){
        for(int b = 0; b < m; b++){
            cin >> map[a][b];
            if(map[a][b] == 2){
                q.push(make_pair(a, b));
                map[a][b] = 0;
                sum++;
            }
        }
    }

    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        visited[y][x] = step;

        if(x > 0) push(y, x - 1);
        if(x + 1 < m) push(y, x + 1);
        if(y > 0) push(y - 1, x);
        if(y + 1 < n) push(y + 1, x);

        if(--sum == 0) {
            step++;
            sum = cnt;
            cnt = 0;
        }
        q.pop();
    }

    for(int a = 0; a < n; a++){
        for(int b = 0; b < m; b++){
            cout << (map[a][b] ? -1 : visited[a][b]) << " ";
        }
        cout << '\n';
    }
}