#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    if(a.first == b.first) return false;
    else return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    vector<pair<int, string>> v;

    cin >> t; 
    v.resize(t);
    
    for(auto& i:v) cin >> i.first >> i.second;

    stable_sort(v.begin(), v.end(), compare);

    for(auto& i:v) cout << i.first << " " << i.second << "\n";
}