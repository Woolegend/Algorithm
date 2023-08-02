#include<iostream>
using namespace std;

int t, n, m, x, y, sum, ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while(t--){
        cin >> n >> m >> x >> y;
        
        ans = -1, sum = 0;
        for(int i = 0; i < m; i++){
            sum = n * i + x;
            if((sum - y) % m == 0) {
                ans = sum;
                break;
            }
        }
        cout << ans << '\n';
    }
}