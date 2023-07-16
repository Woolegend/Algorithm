// 백준 1436
// #알고리즘#
// 1. 브루트포스 알고리즘

// #접근
// 1. 666이 반복되는 수의 패턴 분석 / 실패
// 2. 1부터 증가하며 모든 수를 검증

#include<iostream>
using namespace std;

int main(){
    int num, ans, tmp, cnt;
    scanf("%d", &num);

    ans = 0;
    for(int i = 0; i < num; i++){
        while(true){
            ans++;
            tmp = ans;
            cnt = 3;
            while(tmp && cnt){
                if(tmp % 10 != 6) cnt = 3;
                else cnt--;
                tmp /= 10;
            }
            if(cnt == 0) break;
        }
    }
    printf("%d\n", ans);
}