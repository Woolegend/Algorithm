// 백준 18110
// #해결 순서#
// 1. 난이도 입력 받기
// 2. 절삭 범위 구하기
// 3. 절삭 평균 구하기

// #오류#
// 1. 입력이 0이 들어오네?

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    vector<int> v;
    int in, n, f, sum, ans;

    scanf("%d", &n);

    if(n == 0) ans = 0;
    else{
        for(int i = 0; i < n; i++){
            scanf("%d", &in);
            v.push_back(in);
        }

        sort(v.begin(), v.end(), less<int>());

        f = (n * 15 + 50) / 100;
        sum = 0;

        for(int i = f; i < v.size() - f; i++){
            sum += v[i];
        }

        ans = (((sum * 10) / (n - 2 * f)) + 5 ) / 10;
    }

    printf("%d", ans);
}