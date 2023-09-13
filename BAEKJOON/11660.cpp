#include<iostream>
using namespace std;

int arr[1025][1025], n, m, in, x1, y1, x2, y2;
long long ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> in;
            arr[i][j] = in + arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    for(int i = 0; i < m; i++){
        cin >> y1 >> x1 >> y2 >> x2;
        ans = arr[y2][x2] - arr[y1 - 1][x2] - arr[y2][x1 - 1] + arr[y1 - 1][x1 - 1];
        cout << ans << '\n';
    }
}   