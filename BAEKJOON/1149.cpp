#include<iostream>
#include<vector>
using namespace std;

vector<int> v[3];
int visited[3][1000];
int color[][2] = {{1, 2},{0, 2},{0, 1}};
int t, r, g, b, ans;

int func(int i, int c){
    if(i == t) return 0;
    if(visited[c][i]) return visited[c][i];
    visited[c][i] = v[c][i] + min(func(i+1, color[c][0]), func(i+1, color[c][1]));
    return visited[c][i];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> r >> g >> b;
        v[0].push_back(r);
        v[1].push_back(g);
        v[2].push_back(b);  
    }

    ans = min(func(0, 0), min(func(0, 1), func(0, 2)));

    cout << ans;
}