// 백준 2292
// #알고리즘#
// 점화식

// 1 : 1 (1)
// 2 : 2 ~ 7 (6)
// 3 : 8 ~ 19 (12)
// n : (6 * (n - 1)) 단 n != 1
// 등차수열 a + (n - 1)d 활용
// a = 0, d = 6;
// 등차수열의 합 
// na + (n^2 - n)d / 2

#include<iostream>
using namespace std;

int main(){
    long long n, ans, sum;
    scanf("%llu", &n);
    if(n == 1) ans = 1;
    else{
        ans = 1;
        while(true){
            ans++;
            sum = 1 + (ans * ans - ans) * 3;
            if(sum >= n) break;
        }
    }
    printf("%llu", ans);
}