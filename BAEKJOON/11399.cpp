#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;

    cin >> n;
    vector<int> v(n);

    for(auto& i:v) cin >> i;

    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < v.size(); i++)
        ans += v[i] * (i + 1);

    cout << ans << '\n';
}