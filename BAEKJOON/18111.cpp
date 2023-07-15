//백준 18111
// #알고리즘#
// 1. 브르트포스 알고리즘

// #오류#
// 1. 저장범위 최대값 ? / 이론상 최대값이 int의 최대값을 넘지 않음
// 2. 시간이 같을 경우 -> 더 높은 것 출력

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n, m, b, h, s, space, build, h_max, h_min, ans_s, ans_h;

    scanf("%d %d %d", &n, &m, &b);

    h_min = 256;
    h_max = 0;
    for(int y = 0; y < n; y++){
        for(int x = 0; x < m; x++){
            scanf("%d", &h);
            v.push_back(h);
            if(h_min > h) h_min = h;
            if(h_max < h) h_max = h;
        }
    }

    ans_s = 2100000000;
    for(int i = h_min; i <= h_max; i++){

        space = 0;
        build = 0;
        for(int j = 0; j < v.size(); j++){
            space += v[j] < i ? i - v[j] : 0;
            build += v[j] > i ? v[j] - i : 0;
        }

        if(b + build >= space){
            s = space + build * 2;
            if(s <= ans_s){
                ans_s = s;
                ans_h = i;
            }
        }
    }
    printf("%d %d", ans_s, ans_h);
}