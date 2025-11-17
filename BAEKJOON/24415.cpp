#include<iostream>
using namespace std;

int dp[41] = {0,};
int recursive_count = 0;
int dp_count = 0;

int fib_recursive(int n) {
    if(n == 1 || n == 2) {
        recursive_count++;
        return 1;
    }
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_dp(int n) {
    dp[1] = dp[2] = 1;
    for(int i = 3; i <= n; i++) {
        dp_count++;
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    fib_recursive(n);
    fib_dp(n);

    cout << recursive_count << ' ' << dp_count;
}