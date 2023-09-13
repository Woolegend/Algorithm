#include<iostream>
#include<queue>
using namespace std;

int n, k, vis[100001];
bool map[100001];

void search(){
    queue<pair<int, int>> q;
    q.push({n, 0});

    while(!q.empty()){
        int tmp = q.front().first;
        int dis = q.front().second;
        q.pop();

        if(tmp > 100000 || tmp < 0) continue;
        if(!map[tmp]) map[tmp] = true, vis[tmp] = dis;
        else if(vis[tmp] > dis) vis[tmp] = dis;
        else continue;

        q.push({tmp * 2, dis});
        q.push({tmp + 1, dis + 1});
        q.push({tmp - 1, dis + 1});
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    search();
    cout << vis[k] << '\n';
}