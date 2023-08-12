#include<iostream>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll A, B, C, ans;
    cin >> A >> B >> C;

    ans = 1;
    while(B){
        if(B % 2){
            ans *= A;
            ans %= C;
        }
        A *= A;
        A %= C;
        B /= 2;
    }

    cout << ans;
}