// 백준 2751
// #알고리즘#
// 1. 정렬

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n, a;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), less<int>());
    for(int i:v){
        cout << i << "\n";
    }
}