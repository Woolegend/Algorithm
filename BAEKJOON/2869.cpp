// 백준 2869
// #오류#
// 1. 시간 초과
// 반복문을 이용해 계산할 경우
// 최대 10억번의 반복을 수행하기에
// 0.25초 이내에 출력 불가

#include<iostream>
using namespace std;

int main(){
    int a, b, v, ans = 0;
    scanf("%d %d %d", &a, &b, &v);
    v -= a;
    if(v % (a - b)) ans = v / (a - b) + 2;
    else ans = v / (a - b) + 1;
    printf("%d\n", ans);
}