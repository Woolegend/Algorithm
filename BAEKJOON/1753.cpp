#include<iostream>
#include<queue>
using namespace std;
#define INF 10000000

int N, E, B, u, v, w;
vector<pair<int, int>> ver[20001];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
int min_dis[20001];

void func(int p){
<<<<<<< HEAD
    queue<int> q;
    bool vis[N + 1];
    int dis[N + 1];
    fill(vis, vis + N + 1, false);
    fill(dis, dis + N + 1, INF);
    q.push(p);
    vis[p] = true;
    
    while(!q.empty()){
        
=======
    fill(min_dis, min_dis + 20001, INF);
    pq.push({0, p});
    min_dis[p] = 0;

    while(!pq.empty()){
        int dis =  pq.top().first;
        int node = pq.top().second;
        int len = ver[node].size();
        pq.pop();
        for(int i = 0; i < len; i++){
            int next = ver[node][i].first;
            int next_dis = dis + ver[node][i].second;
            if(min_dis[next] > next_dis){
                min_dis[next] = next_dis;
                pq.push({next_dis, next});
            }
        }
    }

    for(int i = 1; i <= N; i++){
        if(min_dis[i] == INF) cout << "INF\n";
        else cout << min_dis[i] << "\n";
>>>>>>> 797c794ae12b9e412345bcba424ca741774d16b9
    }
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

    func(B);
}