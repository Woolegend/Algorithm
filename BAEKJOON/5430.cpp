/*
백준 5430

#알고리즘#
1. 문자열 파싱
2. 자료구조 덱(Deque)

#해결과제#
1. 문자열을 정수로 파싱
    - 입력받은 문자열을 확인
    - 1개 이상의 정수가 연속으로 나올경우 하나의 수로 판단
    - num = num * 10 + (char)str[idx] - '0'를 이용해 정수화
    - 해당 인덱스에 문자가 정수가 아닐경우 num을 push함
2. 명령 수행
    a. R 입력 시 배열 뒤집기
        - R 입력 시 마다 배열을 뒤집는 것은 시간 낭비
        - isReverse를 참 거짓으로 바꾸며 배열 상태 저장
    b. D입력 시 가장 앞 문자 제거
        - isReverse가 거짓일 때 가장 앞에 저장된 수 pop
        - isReverse가 참일 때 가장 뒤에 저장된 수 pop
        - 양방향에서 수를 pop할 수 있도록 depue를 선택
*/

#include<iostream>
#include<deque>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio();
    std::cin.tie(0);

    int t, n, num = 0;
    char c;
    bool isReverse, error;
    std::string cmd, arr;
    std::deque<int> d;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> cmd >> n >> arr;

        isReverse = false;
        error = false;

        for(int j = 0; j < arr.size(); j++){
            c = arr[j];
            if(isdigit(c)){
                num *= 10;
                num += c - '0';
            }
            else if(num != 0) {
                d.push_back(num); 
                num = 0;
            }
            else num = 0;
        }

        for(int j = 0; j < cmd.size(); j++){
            c = cmd[j];
            if(d.empty()){
                if(c == 'D') error = true;   
            } 
            else{
                if(c == 'R'){
                    isReverse = isReverse ? false : true;   
                }
                else if(c == 'D'){
                    if(!isReverse) d.pop_front();
                    else d.pop_back();
                }
            }
        }

        if(error) std::cout << "error";
        else{
            std::cout << '[';
            if(!isReverse){
                while(!d.empty()){
                    std::cout << d.front();
                    d.pop_front();
                    if(!d.empty()) std::cout << ',';
                }
            }
            else{
                while(!d.empty()){
                    std::cout << d.back();
                    d.pop_back();
                    if(!d.empty()) std::cout << ',';
                }
            }
            std::cout << ']';
        }
        std::cout << '\n';
    }
}

