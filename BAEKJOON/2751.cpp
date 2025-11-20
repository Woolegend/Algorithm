#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int n;
    cin >> n;
    v.resize(n);

    for(auto& i:v) cin >> i;
    sort(v.begin(), v.end(), less<int>());
    for(auto i:v) cout << i << "\n";
}