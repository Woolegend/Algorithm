/*
백준 7662

#문제#
이중 우선순위 큐 구현
1. 자료구조 선정
- map을 자료구조로 선택
- 자동으로 오름차순으로 정렬되는 특성
- pair<입력 정수, 입력 회수>
- 중복된 key를 입력 불가. 위 형태로 입력

2. 최고(최저) 우선 순위 삭제 구현
- map의 begin의 값이 낮은 우선순위
- map의 end바로 앞 값이 높은 우선순위
- 위 두 특성을 활용해 값 삭제

3. 연산 종료 시 큐에 저장된 최댓값과 최솟값 출력
- 2번의 방법과 동일하게 출력

4. 만약 비어있는 큐일 경우 EMPTY 출력

#유의유의#
1. 입력 정수는 int형 범위와 동일
2. 값 자체가 우선순위
3. 매 테스트케이스 마다 set 비우기
4. set과 map에는 중복된 키 저장 불가
*/

#include<iostream>
#include<map>
using namespace std;

map<int, int> q;
char cmd;
int t, num_of_cmd, num;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> num_of_cmd;

        q.clear();
        for(int j = 0; j < num_of_cmd; j++){
            cin >> cmd >> num;

            if(cmd == 'I') {
                auto iter = q.find(num);
                if(iter != q.end()) iter->second++;
                else q.insert({num, 1});
            }
            else{
                if(!q.empty()){
                    if(num == 1){
                        auto iter = --q.end();
                        iter->second--;
                        if(iter->second == 0) q.erase(iter);
                    }
                    else{
                        auto iter = q.begin();
                        iter->second--;
                        if(iter->second == 0) q.erase(iter);
                    }
                }
            }
        }

        if(!q.empty()){
            auto 
                max = --q.end(),
                min = q.begin();
            cout << max->first << " " << min->first << '\n';
        }
        else cout << "EMPTY\n";
    }
}