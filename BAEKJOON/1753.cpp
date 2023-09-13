#include<iostream>
#include<queue>
using namespace std;
#define INF 10000000

int N, E, B, u, v, w;
vector<pair<int, int>> ver[20001];

void func(int p){
    queue<int> q;
    bool vis[N + 1];
    int dis[N + 1];
    fill(vis, vis + N + 1, false);
    fill(dis, dis + N + 1, INF);
    q.push(p);

    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> E >> B;
    for(int i = 0; i < E; i++){
        cin >> u >> v >> w;
        ver[u].push_back({v, w});
    }
}