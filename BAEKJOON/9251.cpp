#include<iostream>
using namespace std;

string a, b;
short vis[1000][1000];

short func(int p, int q){
    if(p == a.size() || q == b.size()) return 0;
    if(vis[p][q] != -1) return vis[p][q];
    if(a[p] == b[q]) vis[p][q] = 1 + func(p + 1, q + 1);
    else vis[p][q] = max(func(p, q + 1), func(p + 1, q));
    return vis[p][q];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    for(int i = 0; i < 1000; i++)
        for(int j = 0; j < 1000; j++)
            vis[i][j] = -1;

    cout << func(0, 0);
}