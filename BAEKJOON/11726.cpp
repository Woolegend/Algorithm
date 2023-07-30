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

int m[1001], n, ans;

int func(int p){
    if(m[p]) return m[p];
    m[p] = (func(p - 1) + func(p - 2)) % 10007;
    return m[p];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    m[1] = 1;
    m[2] = 2;

    cin >> n;
    cout << func(n);
}