#include<iostream>
using namespace std;

char s[600][600];
int n, m, ans;

void search(int y, int x){
    if(s[y][x] == 'X') return;

    if(s[y][x] == 'P') ans++;
    s[y][x] = 'X';

    if(y > 0) search(y - 1 ,x);
    if(x > 0) search(y, x - 1);
    if(y + 1 < n) search(y + 1, x);
    if(x + 1 < m) search(y, x + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    for(int y = 0; y < n; y++){
        for(int x = 0; x < m; x++){
            if(s[y][x] == 'I'){
                search(y, x);
                y = n;
            }
        }
    }

    if(ans) cout << ans;
    else cout << "TT";
}