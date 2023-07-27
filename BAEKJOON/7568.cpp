// 백준 7568
// #순서#
// 1. 자연수 쌍을 입력받기
// 2. 각각의 자연수를 비교
// 3. 등수 매기기
// #알고리즘#
// 1. 브루트포스 알고리즘

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int, int>> v;
    int n, x, y, a, b, cnt;

    scanf("%d", &n);
    
    // 자연수 쌍 입력
    for(int i = 0; i<n; i++){
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }

    for(int i = 0; i<v.size(); i++){
        a = v[i].first;
        b = v[i].second;
        cnt = 1;
        // 비교하기
        for(int j = 0; j < v.size(); j++){
            if(v[j].first > v[i].first){
                if(v[j].second > v[i].second)
                    //등수 매기기
                    cnt++;
            }
        }
        printf("%d ", cnt);
    }
}