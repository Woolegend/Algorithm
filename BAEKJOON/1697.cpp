#include<iostream>
#include<queue>
using namespace std;

int N, K;
int visited[100001];
queue<pair<int, int>> q;

int solve(int n) {
    if(n == K) return 0;
    q.push({n, 0});

    while(!visited[K]){
        auto a = q.front();
        q.pop();

        if(visited[a.first]) continue;
        visited[a.first] = a.second;

        if(a.first > 0) q.push({a.first-1, a.second+1});
        if(a.first < 100000) q.push({a.first+1, a.second+1});
        if(a.first*2 < 100001) q.push({a.first*2, a.second+1});
    }

    return visited[K];
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    cin >> N >> K;
    cout << solve(N);
}

/*
#include<iostream>
#include<queue>
using namespace std;

int n, k, tmp, dst, ans;
queue<int> q;
bool visited[100001];

void push(int p) {
    if (p < 0 || p > 100000) return;
    if (visited[p]) return;
    visited[p] = true;
    q.push(p);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    q.push(n);
    visited[n] = true;

    while (!visited[k]) {
        ans++;
        dst = q.size();
        for (int i = 0; i < dst; i++) {
            tmp = q.front();
            push(tmp + 1);
            push(tmp - 1);
            push(tmp * 2);
            if (visited[k]) break;
            q.pop();
        }
    }

    cout << ans;
}
*/