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

int dp[1000001];

int func(int num){
    int a, b, c, min = 1000000;

    if(dp[num]) return dp[num];
    if(num == 1) return 0;

    if(num % 3 == 0){
        a = func(num / 3);
        if(a < min) min = a;
    }

    if(num % 2 == 0){
        b = func(num / 2);
        if(b < min) min = b;
    }

    c = func(num - 1);
    if(c < min) min = c;

    dp[num] = min + 1; 
    return dp[num];
}


int main(){
    int n;
    dp[2] = dp[3] = 1;
    scanf("%d", &n);
    cout << func(n);
}