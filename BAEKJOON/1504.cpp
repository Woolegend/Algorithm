/*
백준 1504

1. 양방향 그래프
2. 1번 정점에서 N번 정점으로 최단거리 이동
3 특정 두 조건에 만족하며 이동
- 임의의 주어진 두 정점을 반드시 통과해야 함
- 임의의 두 정점 v, u 사이에는 간선이 최대 1개 존재
4. 이미 이동한 정점과 간선을 다시 이동 가능

#해결방법#
경로는 아래와 같다.
1. 1 -> v -> u -> N
2. 1 -> u -> v -> N
화살표에 해당하는 거리를 각각 구하여
최소한의 거리를 도출한다.

v = 1 u = N 일 경우 예외 처리
*/

#include<iostream>
#include<queue>
using namespace std;

vector<pair<int, int>> v[801];
int n, e, a, b, c, x, y, ans;
int s2x, s2y, x2y, x2n, y2n, rst1, rst2;

int BFS(int start, int end){
    queue<pair<int, int>> q;
    int vis[801] = {0,};

    q.push({start, 0});
    vis[start] = true;

    while(!q.empty()){
        int front = q.front().first;
        int sum = q.front().second;
        q.pop();

        for(int i = 0; i < v[front].size(); i++){
            int node = v[front][i].first;
            int dis = sum + v[front][i].second;
            if(vis[node] == 0 || vis[node] > dis){
                vis[node] = dis;
                q.push({node, dis});
            }
        }
    }

    return vis[end] ? vis[end] : -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> e;

    for(int i = 0; i < e; i++){
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    cin >> x >> y;
    if(x == 1 && y == n){
        ans = BFS(1, n);
    }
    else{
        s2x = BFS(1, x);
        s2y = BFS(1, y);
        x2y = BFS(x, y);
        x2n = BFS(x, n);
        y2n = BFS(y, n);

        if(s2x >= 0 && y2n >= 0)
            rst1 = s2x + x2y + y2n;
        if(s2y >= 0 && x2n >= 0)
            rst2 = s2y + x2y + x2n;
        
        if(rst1 == 0 && rst2 == 0) ans = -1;
        else if(rst1 == 0) ans = rst2;
        else if(rst2 == 0) ans = rst1;
        else ans = rst1 < rst2 ? rst1 : rst2;
    }

    cout << ans;
}