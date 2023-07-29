#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n, m, a, b, ans;
bool visited[1001];
vector<int> node[1001];

void bfs(int s){
    if(visited[s]) return;

    queue<int> q;
    visited[s] = true;
    q.push(s);

    while(!q.empty()){
        int f = q.front();
        for(int i = 0; i < node[f].size(); i++){
            if(!visited[node[f][i]]){
                visited[node[f][i]] = true;
                q.push(node[f][i]);
            }
        }
        q.pop();
    }
    ans++;
}

int main(){
    ios::sync_with_stdio();
    cin.tie(0);

    cin >> n >> m;

    for(int i = 0; i<m; i++){
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    for(int i = 1; i <= n; i++)
        bfs(i);

    cout << ans;
}