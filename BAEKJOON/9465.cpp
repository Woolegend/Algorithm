/*
백준 9465

*/

#include<iostream>
using namespace std;

int t, n, v[2][100000], vis[2][100000];

int func(int x, int y){
    if(y < n){
        if(vis[x][y] != -1) return vis[x][y];
        int a = func(x ? 0 : 1, y + 1);
        int b = func(x, y + 2);
        int c = func(x ? 0 : 1, y + 2);
        vis[x][y] = v[x][y] + max(a, max(b, c));
        return vis[x][y];
    }
    else return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < 2; i++)
            for(int k = 0; k < n; k++)
                cin >> v[i][k];

        fill(vis[0], vis[0] + n, -1);
        fill(vis[1], vis[1] + n, -1);
        int ans_1 = func(0, 0);
        int ans_2 = func(1, 0);

        cout << max(ans_1, ans_2) << '\n';
    }
}