#include<iostream>
using namespace std;

int dp[46] = {0, 1, 1};

int fib(int n) {
    if(dp[n]) return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin >> n;
    cout << fib(n);
}