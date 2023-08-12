#include<iostream>
using namespace std;

int n, m, tmp, ans, map[500][500];
bool visited[500][500];

int func(int i, int j, int k){
    if((i < 0) || (i == n) || (j < 0) || (j == m)) return 0;
    if(visited[i][j]) return 0;
    if(k == 4) return map[i][j];

    visited[i][j] = true;

    int a, b, c, d;
    a = func(i - 1, j, k + 1);
    b = func(i + 1, j, k + 1);
    c = func(i, j - 1, k + 1);
    d = func(i, j + 1, k + 1);

    visited[i][j] = false;

    return map[i][j] + max(max(a, b), max(c, d));
}

int T(int i, int j){
    int a, b, c, d;
    a = i > 0 ? map[i - 1][j] : 0;
    b = i + 1 < n ? map[i + 1][j] : 0;
    c = j > 0 ? map[i][j - 1] : 0;
    d = j + 1 < m ? map[i][j + 1] : 0;
    return map[i][j] + a + b + c + d - min(min(a, b), min(c, d));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> map[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            tmp = max(func(i, j, 1), T(i, j));
            ans = max(ans, tmp);
        }
    }

    cout << ans;
}