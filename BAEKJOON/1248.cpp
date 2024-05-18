#include<iostream>
#include<queue>
using namespace std;
#define INF 10000000

int N, M, X, a, b, t, ans;
vector<pair<int, int>> ver[1001]; 
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int func(int p, int q){
    int vis[1001];
    fill(vis, vis + N + 1, INF);

    pq.push({0, p});
    vis[p] = 0;

    while(!pq.empty()){
        int node = pq.top().second;
        int dis = pq.top().first;
        int len = ver[node].size();
        pq.pop();
        for(int i = 0; i < len; i++){
            int next = ver[node][i].first;
            int next_dis = dis + ver[node][i].second;
            if(vis[next] > next_dis){
                vis[next] = next_dis;
                pq.push({next_dis, next});
            }
        }
    }

    return vis[q];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> X;

    for(int i = 0; i < M; i++){
        cin >> a >> b >> t;
        ver[a].push_back({b, t});
    }

    for(int i = 1; i <= N; i++){
        if(i != X){
            int sum = func(i, X) + func(X, i);
            if(sum > ans) ans = sum;
        }
    }

    cout << ans;
}