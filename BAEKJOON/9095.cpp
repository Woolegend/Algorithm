#include<iostream>
using namespace std;

int dp[12] = {0, 1, 2, 4};

int solve(int n) {
    if(dp[n]) return dp[n];
    return dp[n] = solve(n - 3) + solve(n - 2) + solve(n - 1);
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int T, n;

    cin >> T;

    while(T--) {
        cin >> n;
        cout << solve(n) << '\n';
    }
}