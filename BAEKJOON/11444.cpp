#include<iostream>
#include<vector>
using namespace std;
#define ll long long

vector<ll> v;

ll f(int m){
    if(v.size() <= m){
        ll tmp = (f(m - 1) + f(m - 2)) % 1000000007;
        v.push_back(tmp);
        return tmp;
    }
    else return v[m];
}

int main(){
    int n;
    cin >> n;

    if(n < 3) cout << 1;
    else{
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        for(int i = 0; i < 100; i++){
            cout << f(i) << '\n';
        }
    }

}