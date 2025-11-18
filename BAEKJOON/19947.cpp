#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int dp[11];

int calc(int y){
    if(y < 0) return -1;
    if(y == 0) return dp[0];

    int a = (int)floor(calc(y-5) * 1.35);
    int b = (int)floor(calc(y-3) * 1.20);
    int c = (int)floor(calc(y-1) * 1.05);

    return dp[y] = max({dp[y], a, b, c});
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int y;
    cin >> dp[0] >> y;

    cout << calc(y);
}