#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first <= b.first;
}

int main(){
    vector<pair<int, int>> v;
    int n, x, y;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }

    stable_sort(v.begin(), v.end(), compare);

    for(int i = 0; i<v.size(); i++)
        printf("%d %d\n", v[i].first, v[i].second);
}