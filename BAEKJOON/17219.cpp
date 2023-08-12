#include<iostream>
#include<map>
using namespace std;

map<string, string> mp;
string dn, pw;
int n, m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> dn >> pw;
        mp.insert({dn, pw});
    }

    for(int j = 0; j < m; j++){
        cin >> dn;
        auto iter = mp.find(dn);
        if(iter != mp.end()){
            cout << iter->second << '\n';
        }
    }
}