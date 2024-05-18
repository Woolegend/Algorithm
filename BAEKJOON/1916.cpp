#include<iostream>
#include<queue>
using namespace std;
#define INF 100000000

struct R{ int dest, dist; };

int N, M, S, D, W, A, B;
vector<R> v[1001];

struct compare{
    bool operator()(R r1, R r2){
        return r1.dist > r2.dist;
    }
};

int BFS(int a, int b){
    priority_queue<R, vector<R>, compare> q;
    vector<bool> visited(N + 1, false);
    vector<int> dists(N + 1, INF);

    q.push({a, 0});
    dists[a] = 0;

    while(!q.empty()){
        int node = q.top().dest;
        int dist = q.top().dist;
        visited[node] = true;
        q.pop();

        if(node == b) return dist;

        for(int i = 0; i < v[node].size(); i++){
            int next = v[node][i].dest;
            int next_dist = dist + v[node][i].dist;
            if(!visited[next] && (next_dist < dists[next])){
                dists[next] = next_dist;
                q.push({next, next_dist});
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> S >> D >> W;
        v[S].push_back({D, W});
    }

    cin >> A >> B;

    cout << BFS(A, B);
}