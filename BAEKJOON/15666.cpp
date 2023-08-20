#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

vector<int> num, list;
int N, M;
string ans;

void DFS(int val, int depth){
    if(depth == M){
        for(int i = 0; i < M; i++)
            ans += to_string(list[i]) + ' ';
        ans.back() = '\n';
        return;
    }

    int tmp = 0;
    for(int i = val; i < N; i++){
        if(tmp < num[i]){
            list[depth] = tmp = num[i];
            DFS(i, depth+1);
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

    DFS(0, 0);

    cout << ans;
}