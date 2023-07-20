// 백준 10773
// #해결 순서#
// 1. 순서대로 수 입력받기
// 2. 0 입력 시 가장 마지막으로 입력받은 수 지우기
// 3. 저장된 모든 수의 합 출력
// #알고리즘#
// a. 스택

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    int n, in, sum;

    scanf("%d", &n);

    sum = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &in);
        
        if(in == 0) {
            sum -= s.top();
            s.pop();
        }
        else {
            sum += in;
            s.push(in);
        }
    }
    printf("%d", sum);
}