/*
백준 18870

#알고리즘#
1. 정렬

#해결과제#
1. 정수, 인덱스 저장
- vector<pair<int, int>>
- first : 입력 정수
- second : 인덱스
2. 정렬 후 정수 변환
- first를 기준으로 정렬한다.
- 반복문을 이용해 각각 인덱스의 first값 비교
    a. 이전 인덱스 값과 같을 경우 cnt로 변환(cnt는 0이상의 정수)
    b. 이전 인덱스 값보다 클경우 cnt++후 cnt호 변환
3. 입력 시 인덱스에 맞게 정렬
- second 값을 기준으로 정렬
- 출력

#다른해법#
1. 두 개의 벡터 v1, v2 모두에 input값 저장
2. v1 벡터 중복 제거
    a. v1 오름차순 정렬
    b. v1.erase(unique(v1.begin(), v1.end(), v1.end())
3. v2값 변환 후 출력
    a. lower_bound(v1.begin(), v1.end(), v2[i]) - v1.end();
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, int> > v;
int n, x, cnt, tmp;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second < b.second;
    else return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(make_pair(x, i));
    }

    sort(v.begin(), v.end());

    tmp = v.front().first;
    for(int i = 0; i < v.size(); i++){
        if(tmp != v[i].first) cnt++;
        tmp = v[i].first;
        v[i].first = cnt;
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size(); i++)   
        cout << v[i].first << " ";
}