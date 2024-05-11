#include<iostream>
#include<queue>
using namespace std;
#define INF 16777216

struct edge{ int s, e, t; };
int TC, N, M, W;
vector<edge> edges;

void func(){
    vector<int> dist(N + 1, INF);
    int start, end, time;
    dist[1] = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < edges.size(); j++){
            start = edges[j].s;
            end = edges[j].e;
            time = edges[j].t;
            if(dist[end] > dist[start] + time)
                dist[end] = dist[start] + time;
        }
    }
    for(int j = 0; j < edges.size(); j++){
        start = edges[j].s;
        end = edges[j].e;
        time = edges[j].t;
        if(dist[end] > dist[start] + time){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s, e, t;
    cin >> TC;

    while(TC--){
        cin >> N >> M >> W;
        edges.clear();
        for(int i = 0; i < M; i++){
            cin >> s >> e >> t;
            edges.push_back({s, e, t});
            edges.push_back({e, s, t});
        }
        for(int i = 0; i < W; i++){
            cin >> s >> e >> t;
            edges.push_back({s, e, -t});
        }
       func();
    }
}