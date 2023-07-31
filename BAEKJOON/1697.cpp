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