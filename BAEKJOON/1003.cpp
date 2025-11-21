#include<iostream>
using namespace std;

int dp[41][2];

pair<int, int> solve(int n) {
    if(dp[n][0] || dp[n][1]) return {dp[n][0], dp[n][1]};

    pair<int, int> a = solve(n - 1);
    pair<int, int> b = solve(n - 2);

    dp[n][0] = a.first + b.first;
    dp[n][1] = a.second + b.second;

    return {dp[n][0], dp[n][1]};
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int T, N;
    cin >> T;

    dp[0][0] = 1;
    dp[1][1] = 1;

    while(T--) {
        cin >> N;
        pair<int, int> ans = solve(N);
        cout << ans.first << " " << ans.second << "\n";
    }
}