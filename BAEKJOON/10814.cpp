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
    int tc, age;
    string name;
    vector<pair<int, string>> v;
    
    cin >> tc; 
    for(int i = 0; i < tc; i++){ 
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), compare);

    for(int i = 0; i < tc; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
}