#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
vector<int> v[100001]; 
int n, a, b, vis[100001];

void BFS(){
    q.push(1);
    vis[1] = 1;

    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(int i = 0; i < v[parent].size(); i++){
            int child = v[parent][i];
            if(vis[child]) continue;
            vis[child] = parent;
            q.push(child);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i < n; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    BFS();

    for(int i = 2; i <= n; i++)
        cout << vis[i] << '\n';
}