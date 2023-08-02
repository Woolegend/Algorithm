#include<iostream>
#include<queue>
using namespace std;

bool visited[101];
int connect[100];
int n, m, a, b, f, cnt, tmp, idx, ans;
queue<int> q;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    
    for(int i = 0; i < n + m; i++){
        cin >> a >> b;
        connect[a] = b;
    }

    q.push(1);
    visited[1] = true;

    while(!visited[100]){
        ans++;
        cnt = q.size();
        for(int i = 0; i < cnt; i++){
            f = q.front();
            for(int j = 1; j < 7; j++){
                idx = f + j;
                if(idx > 100) break;
                if(visited[idx]) continue;

                visited[idx] = true;
                if(visited[100]) break;

                tmp = connect[idx];
                if(tmp){
                    visited[tmp] = true;
                    q.push(tmp);
                }
                else q.push(idx);
            }
            if(visited[100]) break;
            q.pop();
        }
    }

    cout << ans;
}