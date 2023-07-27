/*
백준 2805

#알고리즘#
1. 이분탐색

#해결과제#
1. 나무 절단기 최적 높이 찾기
- 저점을 -1, 고점을 가장 높은 나무의 높이 +1로 설정
- 저점이 -1인 이유는 절단기 높이가 0일 수 있기 때문
- 고점이 최고 나무 높이 +1인 이유도 위와 동일

#오류#
1. 필요한 나무를 얻기 위한 높이
나무를 m만큼 얻기 위한 높이 mid를 이분 탐색으로 구한다.
mid는 나무 m만큼을 얻기 위한 높이의 근사값이다.
그렇기에 mid의 높이에서 나무를 베어도 m보다 적은 양의 나무를 얻을 수 있다.
이를 해결하는 것이 문제의 핵심
*/

#include<iostream>
#include<vector>

int main(){
    long long n, m, in, begin, end = 0, mid, sum;
    std::vector<int> v;

    scanf("%lld %lld", &n, &m);

    for(int i = 0; i<n; i++){
        scanf("%lld", &in);
        v.push_back(in);
        if(in > end) end = in;
    }

    begin = -1;
    end += 2;
    while(begin + 1 != end){
        sum = 0;
        mid = (end + begin) / 2;
 
        for(int a:v)
            sum += a > mid ? a - mid : 0;

        if(sum == m) break;
        else if(sum < m) end = mid;
        else if(sum > m) begin = mid;
    }
    
    if(sum < m) mid--;
    std::cout << mid << "\n";
}