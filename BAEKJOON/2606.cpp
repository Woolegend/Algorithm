/*
백준 2606

#알고리즘#
1. 너비 우선 탐색

*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> v[101];
bool visited[101];
queue<int> q;

int solve() {
    int cnt = 0;
    q.push(1);
    visited[1] = true;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(auto i:v[f]) {
            if(visited[i]) continue;
            visited[i] = true;
            q.push(i);
            cnt++;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    cout << solve();
}