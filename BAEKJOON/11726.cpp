/*
백준 11726

#알고리즘#
1. 다이나믹 프로그래밍

#오류#
1. 조합을 이용한 연산
- n값의 최대값이 1000이다.
- 1000!의 값은 너무나 큰 수이므로 시간복잡도가 유의미하게 증가한다.
2. 다이나믹 데이터 저장 허용 범위 초과
- 데이터를 저장할 때 10007로 나눈 나머지를 저장하지 않으면
  입력 데이터가 커질 경우 저장 허용 범위를 초과한다.
*/

#include<iostream>
using namespace std;

int dp[1001] = {0, 1, 2};

int solve(int n) {
  if(dp[n]) return dp[n];
  return dp[n] = (solve(n - 1) + solve(n - 2)) % 10007;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n);
}