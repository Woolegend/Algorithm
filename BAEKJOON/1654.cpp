// 백준 1654
// #알고리즘#
// 1. 이분 탐색 : 범위를 반씩 나눠가며 판단 / 범위 내 최대값 도출
// 범위 내 최소값을 min, 최대값을 max 정의
// 해당 문제에서는 min = 0, max = K개의 랜선 중 가장 큰 길이 + 1
// ※ 길이 +1 -> 오류 2
// mid = (max + min + 1) / 2 를 대입해 계산
// ※ max + min의 합이 홀수 일 경우 값 손실 방지를 위함
// 참이면 min = mid,  거짓이면 max = mid
// max = min + 1일 때 까지 반복

// #에러#
// 1. 시간 초과 : min + max의 값의 합이 int 범위를 초과
// 2. 결과 오류 : max의 값에 +1을 하지 않으면 max의 값은 확인하지 않음


#include<iostream>
using namespace std;

    int cable[10000];

int main(){
    int k, n, sum;
    long long min = 0, mid, max = 0;

    cin >> k >> n;
    for(int i = 0; i < k; i++){
        cin >> cable[i];
        if(cable[i] > max) max = cable[i];
    }

    max++;
    while(min != max - 1){
        sum = 0;
        mid = (max + min + 1) / 2;

        for(int i = 0; i < k; i++)
            sum += cable[i] / mid;

        if(sum < n) max = mid;
        else min = mid;    
    }
    cout << min << endl;
}