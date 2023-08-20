#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int N, M;
bool vis[8];
vector<int> num, list;
string ans;

void DFS(int depth){
    if(depth == M){
        for(int i = 0; i < M; i++)
            ans += to_string(list[i]) + ' ';
        ans.back() = '\n';
        return;
    }

    int tmp = 0;
    for(int i = 0; i < N; i++){
        if(vis[i]) continue;
        if(tmp < num[i]){
            vis[i] = true;
            list[depth] = tmp = num[i];
            DFS(depth + 1);
            vis[i] = false;
        } 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    num.resize(N);
    list.resize(M);

    for(int i = 0; i < N; i++)
        cin >> num[i];

    sort(num.begin(), num.end(), less<int>());

    DFS(0);

    cout << ans;
}