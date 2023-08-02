/*
백준 9745

#해결과제#
1. 옷 종류와 이름 입력 받기
- map을 자료 구조로 사용
2. 입력 받은 옷으로 가능한 모든 조합들의 수

#유의사항#
1. 같은 종류의 옷은 동시에 착용 불가
2. 같은 조합은 착용 불가

#알고리즘#
1. map을 이용한 데이터 입력
    a. 처음 입력한 분류(kind)의 옷일 경우 삽입
    - key : 해당 옷의 분류응 키값으로 설정
    - value : 미착용을 포함한 해당 분류 옷의 개수
2. 옷의 조합 출력
    a. 모든 value값의 곱
    - 단, 미착용이 포함된 값이므로 알몸의 경우의 수 1을 뺀다.

ex) 3 hat headgear sunglasses eyewear turban headgear 입력 시
    # 자료구조 map { {headgear, 3}, {eyewear, 2} }
    # 경우의수 ans = 3 * 2
    # 알몸제외 ans--
    # 출력 5
*/

#include<iostream>
#include<map>
using namespace std;

int t, n, ans;
string kind, name;
map<string, int> m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    for(int i = 0; i<t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> name >> kind;
            auto iter = m.find(kind);
            if(iter == m.end()) m.insert({kind, 2});
            else iter->second++;
        }

        ans = 1;
        for(auto iter = m.begin(); iter != m.end(); iter++){
            ans *= iter->second;
        }
        cout << ans - 1 << '\n';
        m.clear();
    }
}