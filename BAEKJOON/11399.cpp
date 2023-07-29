#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, ans = 0;

    cin >> n;
    vector<int> v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < v.size(); i++)
        ans += v[i] * (i + 1);

    cout << ans << endl;
}