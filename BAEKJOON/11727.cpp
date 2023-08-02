#include<iostream>
#include<queue>
using namespace std;

int n, m[1001];

int bfs(int p){
    if(m[p]) return m[p];
    m[p] = (bfs(p - 1) + bfs(p - 2) + bfs(p - 2)) % 10007;
    return m[p];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    m[1] = 1;
    m[2] = 3;

    bfs(n);

    cout << m[n];
}