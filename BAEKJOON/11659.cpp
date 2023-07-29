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
    cin.tie(0);

    vector<int> v;
    int n, m, a, b, in, sum;
 
    cin >> n >> m;

    v.push_back(0);
    for (int i = 0; i < n; i++){
        cin >> in;
        v.push_back(in + v[i]);
    }

    for(int i = 0; i < m; i++){
        cin >> a >> b;
        sum = v[b] - v[a-1]; 
        cout << sum << '\n';
    }
}