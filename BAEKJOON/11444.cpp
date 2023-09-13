#include<iostream>
#include<map>
using namespace std;
#define DIV 1000000007
#define ll long long

map<ll, ll> m;

ll func(ll a){
    if(a < 3) return 1;
    if(m.count(a) > 0) return m[a];

    ll b = (a + 1) / 2;
    ll tmp1 = func(b - 1);
    ll tmp2 = func(b);
    if(a % 2 == 0) m[a] = ((2 * tmp1 + tmp2) * tmp2) % DIV;
    else m[a] = (tmp1 * tmp1 + tmp2 * tmp2) % DIV;
    return m[a];
}

int main(){
    ll n;
    cin >> n;
    cout << func(n) << '\n';
}