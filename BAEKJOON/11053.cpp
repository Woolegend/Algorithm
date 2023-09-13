#include<iostream>
#include<vector>
using namespace std;

int n;
vector<int> v;
vector<int> vis;

int DP(int p, int a){
    if(p == n) return 0;
    if(vis[p]) return vis[p];
    for(int i = p; i < n; i++){
        if(a < v[i]){
            int tmp = 1 + DP(i + 1, v[i]);
            if(tmp > vis[p]) vis[p] = tmp; 
        }
    }
    return vis[p];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    v.resize(n);
    vis.resize(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    cout << DP(0, 0);
}