/*
백준 1541

#해결과제#
1. 연산 기호와 숫자를 구분해 입력받기
-입력을 문자열로 입력받음
-문자열에서 숫자가 처음 나오는 지점을 수의 시작으로 판단
-ex) 55-50+40
     ^  ^  ^   <- 해당 지점

2. 연산의 최소값 구하기
-빼기 기호가 나온 후 이후 오는 수 모두를 뺀다.
-ex) 55-50+40-100+20-10-30 입력
     55 - (50 + 40) - (100+20) - 10 - 30 일 경우 최소값

#개선#
-scanf("%d%c", &n, &c); 를 이용한 입력
-위 방법이 가능한 이유
-문제) 입력 가장 처음과 마지막 문자는 숫자이다
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    int num, sum;
    bool isMinus;

    cin >> s;

    sum = 0;
    num = 0;
    isMinus = false;

    for(int i = 0; i<s.size(); i++){    
        if(s[i] >= '0'){
            num *= 10;
            num += s[i] - '0';
        }
        else{
            if(isMinus) sum -= num;
            else sum += num;

            num = 0;
            if(s[i] == '-') isMinus = true;
        }
    }

    if(isMinus) sum -= num;
    else sum += num;

    cout << sum;
}