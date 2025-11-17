#include<iostream>
using namespace std;

int dp [31][31];

int func(int n, int k) {
    if(k == 1 || k == n) return 1;
    if(dp[n][k]) return dp[n][k];
    return dp[n][k] = func(n-1, k-1) + func(n-1, k);
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    cout << func(n, k);
}