/*
백준 2606

#알고리즘#
1. 너비 우선 탐색

*/

#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

std::vector<int> v[101];
std::queue<int> q;
bool vis[101];

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m, a, b, f, cnt;
    std::cin >> n >> m;
    for(int i = 0; i<m; i++){
        std::cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    cnt = -1;
    q.push(1);
    vis[1] = true;
    while(!q.empty()){
        f = q.front();
        for(int tmp:v[f]){
            if(vis[tmp]) continue;
            q.push(tmp);
            vis[tmp] = true;
        }
        q.pop();
        cnt++;
    }
    std::cout << cnt << '\n';
}