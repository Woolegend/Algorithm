/*
백준 1764

#알고리즘#
1. STL set

#해결과제#
1. 듣도 못한 이름, 보도 못한 이름 입력
- 듣도 못한 이름은 set1에 저장
- 입력받은 보도 못한 이름과 동일 이름이 듣도 못한 이름 명단에 있는지 확인

2. 두 명단의 교집합 출력
- 두 명단의 교집합을 set2에 저장
- 입력이 종료되면 결과 출력
- 교집합 크기는 set의 크기와 동일
- set은 정렬된 자료구조이므로 시작부터 끝까지 반복문으로 출력

#다른방법#
1. set_intersection함수 사용
- 듣도 못한 이름과 보도 못한 이름을 각각 벡터에 저장
- set_intersection(교집합 함수)를 이용해 교집합 행렬 생성
- 결과 출력

*/

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<string> listen;
    set<string> ans;
    string in;
    int n, m;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        cin >> in;
        listen.insert(in);
    }

    for(int i = 0; i<m; i++){
        cin >> in;
        if(listen.find(in) != listen.end()){
            ans.insert(in);
        }
    }

    cout << ans.size() << endl;
    for(auto iter = ans.begin(); iter != ans.end(); iter++)
        cout << *iter << endl;
}