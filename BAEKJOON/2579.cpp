/*
백준 2579

#알고리즘#
1. 다이나믹 알고리즘

#해결과제#
1. 재귀함수 구현
2. 다음 계단 밟기, 다다음 계단 밟기 함수 호출
3. 위 두 함수의 반환 값 중 더 큰 것을 선택
4. 반환조건
    a. 인덱스 범위 초과
    b. 3개의 연속된 계단 밟기
    c. 마지막 계단 밟음
5. 위 a, b 반환 시 해당 값을 선택하지 않도록 조건 설정
*/

#include<iostream>
#include<vector>

std::vector<int> v;
int data[301][2];
int n, in;

int step(int idx, int seq){
    int a, b;
    if(idx > n || seq > 2) return -5000000;
    if(idx == n) return v[n];
    if(data[idx][seq] == 0){
        a = step(idx+1, seq+1);
        b = step(idx+2, 1);
        data[idx][seq] = v[idx] + (a > b ? a : b);
    }
    return data[idx][seq];
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> n;

    v.push_back(0);
    for(int i = 0; i < n; i++){
        std::cin >> in;
        v.push_back(in);
    }
    std::cout << step(0, 0);
}