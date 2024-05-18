#include<iostream>
#include<queue>
using namespace std;

int n, m, a, b, c;
vector<pair<int, int>> v[101];
queue<pair<int, int>> q;

void func(int p){
    int vis[101];
    fill(vis, vis + n + 1, -1);
    q.push({p, 0});
    vis[p] = 0;

    while(!q.empty()){
        int node = q.front().first;
        int dis = q.front().second;
        int len = v[node].size();
        q.pop();

        for(int i = 0; i < len; i++){
            int next = v[node][i].first;
            int sum = v[node][i].second + dis;
            if(vis[next] < 0 || vis[next] > sum){
                vis[next] = sum;
                q.push({next, sum});
            }
        }
    }

    for(int i = 1; i <= n; i++)
        cout << (vis[i] < 0 ? 0 : vis[i]) << ' ';
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    for(int i = 1; i <= n; i++)
        func(i);
}