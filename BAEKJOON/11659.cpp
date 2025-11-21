/*
백준 11659

#알고리즘#
1. 누적합
- 배열 [ 1, 2, 3, 4, 5]
- 누적합 배열 [ 1, 3, 6, 10, 15]
- 1 ~ 3까지의 합 10 - 1 = 9

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    vector<int> v;
    int n, m, a, b;

    cin >> n >> m;
    v.resize(n + 1);

    for(int i = 1; i < v.size(); i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    while(m--) {
        cin >> a >> b;
        cout << v[b] - v[a-1] << '\n';
    }
}