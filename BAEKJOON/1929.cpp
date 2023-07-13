// 백준 1929
// #알고리즘#
// 1. 소수 판별[아리스토테네스의 채]
// 자연수 N은 SQRT(N)이하의 자연수로 나눠지지 않으면 소수(PRIME)다.
// 소수는 모두 홀수 이므로 짝수는 확인하지 않았다.
// 범위 내 1과 2가 있을 경우는 예외저리함
// 1은 제외, 유일한 짝수 소수인 2는 추가

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b;
    bool flag;

    cin >> a >> b;


    if(a == 1) a = 2;  
    if(a <= 2 && b >= 2) cout << "2\n";

    for(int i = a % 2 ? a : a + 1; i <= b; i += 2){
        flag = true;
        for(int j = 3; j <= sqrt(i); j += 2){
            if(i % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag) cout << i << "\n";
    }
}