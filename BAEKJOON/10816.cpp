// 백준 10816
// #해결 순서#
// 맵 노드 Key -> 숫자 카듭 번호 / Value -> 카드 개수
// 1. 숫자 카드와 개수 저장
// 2. 숫자 카드 개수 확인

// #오류#
// 1. map사용 시간 초과 (복잡도 O(n^2))
// 2. upper, lower bound 사용 시간 초과

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    map<int, int> mp;
    vector<int> v;
    int n, m, in;

    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &in);
        
        auto tmp = mp.find(in); 
        if(tmp != mp.end()) tmp->second++;
        else mp.insert({in, 1});
    }

    scanf("%d", &m);

    for(int i = 0; i<m; i++){
        scanf("%d", &in);
        v.push_back(in);
    }

    for(int i = 0; i < m; i++){
        auto tmp = mp.find(v[i]);
        if(tmp != mp.end()) printf("%d ", tmp->second);
        else printf("0 ");
    }
}