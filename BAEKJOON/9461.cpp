/*
백준 9461

n = P(n)
0 = 0
1 = 1
2 = 1
일 때 P(n) = P(n - 2) + P(n - 3) 성립

이를 이용해 다이나믹 프로그램밍 구현

#유의사항#
P(100)일 경우 범위초과를 조심해야함

*/

#include<iostream>
using namespace std;

long long t, n, arr[101];

long long p(int a){
    if(arr[a]) return arr[a];
    arr[a] = p(a - 2) + p(a - 3);
    return arr[a];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    arr[1] = arr[2] = arr[3] = 1;

    cin >> t;
    while(t--){
        cin >> n;
        cout << p(n) << '\n';
    }
}