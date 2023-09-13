#include<iostream>
#include<queue>
using namespace std;

int n, a, b, c;
vector<pair<int, int>> v[10001];

pair<int, int> func(int p){
    vector<bool> vis(n + 1, false);
    queue<pair<int, int>> q;
    int ret = p, max = 0;
    q.push({p, 0});
    vis[p] = true;

    while(!q.empty()){
        int node = q.front().first;
        int dis = q.front().second;
        int len = v[node].size();
        q.pop();
        for(int i = 0; i < len; i++){
            auto tmp = v[node][i];
            int next = tmp.first;
            if(!vis[next]){
                vis[next] = true;
                int sum = dis + tmp.second;
                q.push({next, sum});
                if(sum > max) ret = next, max = sum;
            }
        }
    }
    return {ret, max};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i < n; i++){
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    auto tmp = func(func(1).first);
    cout << tmp.second << '\n';
}