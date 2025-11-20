#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, int> > v;
    int n, x, y;

    cin >> n;
    v.resize(n);

    for(auto& i:v) cin >> i.first >> i.second;
    stable_sort(v.begin(), v.end(), compare);
    for(auto i:v) cout << i.first << " " << i.second << "\n";
}