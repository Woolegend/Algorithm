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
#include<string>
using namespace std;

set<string> st;
set<string> ans;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string s;
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> s;
        st.insert(s);
    }
    for(int i = 0; i < M; i++) {
        cin >> s;
        if(st.find(s) != st.end()) ans.insert(s);
    }

    cout << ans.size() << '\n';
    for(auto i:ans) cout << i << '\n';
//  for(auto iter = ans.begin(); iter != ans.end(); iter++)
//  cout << *iter << endl;
}