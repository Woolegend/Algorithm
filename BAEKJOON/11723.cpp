/*
백준 11723

#알고리즘#
1. 비트마스킹
2. 입출력 속도

#오류#
1. set 시간 초과
- set O(logN)의 복잡도
- 비트마스킹은 O(1)의 복잡도
- 유의미한 시간 차이 발생

2. 입출력 시간 극대화
-std::ios::sync_with_stdio(false); 사용
-std::cin.tie(NULL) 사용 
*/

#include<iostream>
using namespace std;

int m, num;
unsigned int nums;
int bits[20];
string cmd;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m;

    for(int i = 0; i<20; i++)
        bits[i] = 1<<i;

    for(int i = 0; i < m; i++){
        cin >> cmd;
        if(cmd == "empty") nums = 0;
        else if(cmd == "all") nums = 1048575;
        else{
            cin >> num;
            num--;
            if(cmd == "add") nums |= bits[num];
            else if(cmd == "remove") nums &= ~bits[num];
            else if(cmd == "check") cout << ((nums & bits[num]) > 0)  << '\n';
            else if(cmd == "toggle") nums ^= bits[num];
        }
    }
}