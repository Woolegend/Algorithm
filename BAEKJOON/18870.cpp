#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, a, cnt, prev;

    cin >> N;

    vector<pair<int, int>> v(N);
    vector<int> ans(N);

    for(int i = 0; i < N; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end(), compare);

    cnt = 0;
    prev = v[0].first;
    for(int i = 1; i < N; i++) {
        if(prev != v[i].first) {
            prev = v[i].first;
            cnt++;
        }
        ans[v[i].second] = cnt;
    }

    for(auto i:ans) cout << i << " ";
}