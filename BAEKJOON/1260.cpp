// 오류 정렬을 1 ~ n까지 하지 않고 0 ~ n-1까지 함

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> graph[10000];
bool bfs_visit[10000];
bool dfs_visit[10000];

void dfs(int start){
    dfs_visit[start] = true;
    int a;

    cout << start << " ";

    for(int i = 0; i < graph[start].size(); i++){
        a = graph[start][i];
        if(!dfs_visit[a]) dfs(a);
    }
}

void bfs(int start){
    queue<int> q;
    int a, b;

    a = start;
    q.push(start);
    bfs_visit[start] = true;

    while(!q.empty()){
        for(int i = 0; i < graph[a].size(); i++){
            b = graph[a][i];
            if(!bfs_visit[b]){
                bfs_visit[b] = true;
                q.push(b);
            }
        }
        cout << q.front() << " ";
        q.pop();
        a = q.front();
    }
}

int main(){
    int n, m, v, l, r;

    scanf("%d %d %d", &n, &m, &v);

    for(int i = 0; i<m; i++){
        scanf("%d %d", &l, &r);
        graph[l].push_back(r);
        graph[r].push_back(l);
    }

    for(int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end(), less<int>());

    dfs(v);
    cout << endl;
    bfs(v);
}