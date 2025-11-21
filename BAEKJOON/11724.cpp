#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> node[1001];
bool visited[1001];
queue<int> q;

void bfs(int s) {
    q.push(s);
    visited[s] = true;
    
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        for(int i:node[f]) {
            if(visited[i]) continue;
            visited[i] = true;
            q.push(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, u, v, ans = 0;

    cin >> N >> M;

    while(M--) {
        cin >> u >> v;
        node[u].push_back(v);
        node[v].push_back(u);
    }

    for(int i = 1; i <= N; i++) {
        if(!visited[i]){
            bfs(i);
            ans++;
        }
    }

    cout << ans;
}