// 백준 2775
// #알고리즘#
// 1. 다이나믹 프로그래밍
// 아래 조건을 이용해 재귀함수를 구현한다.
// 1. 층 수 상관없이 1호의 사람 수는 1명이다.
// 2. 0층 b호는 b명의 사람이 산다.
// 3. a 층 b호 사람 수는 a-1층 b호의 사람 수, a층 b-1호 사람 수의 합과 같다.

#include<iostream>
using namespace std;

int DP[15][15];

int func(int a, int b){
    if(a == 0 || b == 1) return b;
    if(DP[a][b]) return DP[a][b];
    DP[a][b] = func(a - 1, b) + func(a, b - 1);
    return DP[a][b];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, k, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> k >> n;
        cout << func(k, n) << '\n';
    }
}