#include<iostream>
#include<queue>
using namespace std;

int n, a, b, d, ans;
vector<pair<int, int> > v[100001];

void BFS(int p){
    vector<bool> vis(n, false);
    queue<pair<int, int> > q;

    q.push(make_pair(p, 0));
    vis[p] = true;

    while(!q.empty()){
        int node = q.front().first;
        int dis = q.front().second;
        q.pop();

        if(dis > ans) ans = dis;
        for(int i = 0; i < v[node].size(); i++){
            int tmp = v[node][i].first;
            if(!vis[tmp]){
                vis[tmp] = true;
                q.push(make_pair(tmp, dis + v[node][i].second));
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        while(true){
            cin >> b;
            if(b == -1) break;
            cin >> d;
            v[a].push_back(make_pair(b, d));
        }
    }

    for(int i = 1; i <= n; i++){
        if(v[i].size() == 1){
           BFS(i);
        }
    }

    cout << ans;
}