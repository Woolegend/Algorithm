/*
백준 1931

#알고리즘#
1. 그리디 알고리즘

#해결과제#
1. 회의 입력
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool sorting(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

int main(){
    vector<pair<int, int>> v;
    int n, s, e, cnt;

    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d %d", &s, &e);
        v.push_back({s, e});
    }

    stable_sort(v.begin(), v.end(), sorting);
    
    cnt = 1;
    for(int i = 0, j = 1; j < v.size(); j++){
        if(v[i].second <= v[j].first) {
            cnt++;
            i = j;
        }
    }
    printf("%d\n", cnt);
}