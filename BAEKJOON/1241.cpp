#include<iostream>
#include<vector>
using namespace std;

int t;
int nums[1000001];
int result[1000001];
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    v.resize(t);

    for(int i = 0; i < t; i++){
        cin >> v[i];
        nums[v[i]]++;
    }

    for(int i = 0; i < t; i++){
        
    }

}