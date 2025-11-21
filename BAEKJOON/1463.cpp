/*
백준 1463

#알고리즘#
1. 재귀함수

2. 다이나믹 프로그래밍(동적 계획법)
-특정 입력에 대한 결과를 저장함
-동일한 입력이 들어오면 저장된 결과를 반환
*/
#include<iostream>
using namespace std;
#define INF 2147483647

int dp[1000001] = {0, 0, 1, 1};

int solve(int n){
    if(dp[n] || n == 1) return dp[n];
    int tmp, min = INF;

    if(n % 3 == 0) {
        tmp = solve(n / 3);
        if(tmp < min) min = tmp;
    }
    if(n % 2 == 0) {
        tmp = solve(n / 2);
        if(tmp < min) min = tmp;
    }
    tmp = solve(n - 1);
    if(tmp < min) min = tmp;

    return dp[n] = min + 1; 
}


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int N;
    cin >> N;
    cout << solve(N);
}