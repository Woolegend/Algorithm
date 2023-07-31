/*
백준 5525

#알고리즘#
1. 문자열

#해결과제#
1. 문자열 비교하기
- I 발견 시 해당 I 이후에 OI가 몇 번 반복되는지 체크
- OI의 반복 횟수를 A라 칭함
- len가 N이상일 경우 len - N + 1만큼의 P가 있다고 판단

#오류#
1. (50점) 시간복잡도
- I 발견시 N번 반복해 문자열 비교
- O(NM)의 시간 복잡도를 가지게 됨
*/

#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string s;
    int n, m, cnt = 0, len = 0;

    std::cin >> n >> m >> s;

    for(int i = 0; i < s.size()-2;){
        if(s[i] == 'I' && s[i+1] == 'O' && s[i+2] == 'I'){
            len++;
            i += 2;  
            if(len >= n) cnt++;
        }
        else len = 0, i++;
    }
    std::cout << cnt << '\n';
}
