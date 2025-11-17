#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int dp[11] = {0, };

int calc(int y, double r){
    int a, b, c;
    if(y >= 5) a = calc(y - 5, 1.35);
    if(y >= 3) b = calc(y - 3, 1.20);
    if(y >= 1) c = calc(y - 1, 1.05);
    return dp[y] = max({(int)floor(dp[y] * r), a, b, c});
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int y;
    cin >> dp[0] >> y;

    cout << calc(y, 1) << "\n";
}