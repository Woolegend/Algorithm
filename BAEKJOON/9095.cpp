/*

*/

#include<iostream>
using namespace std;

int fact(int n){
    int result = 1;
    for(int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, num, tc, cnt, ans;

    cin >> tc;

    for(int i = 0; i< tc; i++){
        cin >> num;

        ans = 0;
        a = num / 3;
        for(int x = 0; x <= a; x++){
            b = (num - (3 * x)) / 2;
            for(int y = 0; y <= b; y++){
                int z = num - 3 * x - 2 * y;
                cnt = fact(x + y + z) / (fact(x) * fact(y) * fact(z));
                ans += cnt;
            }
        }
        cout << ans << '\n'; 
    }
}