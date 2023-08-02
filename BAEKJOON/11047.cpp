#include<iostream>
#include<vector>
using namespace std;

vector<int> v;
int n, k, in, ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> in;
        if(in <= k) v.push_back(in);
    }

    for(int i = v.size() - 1; i > 0; i--){
        ans += k / v[i];
        k %= v[i];
    }
    ans += k;

    cout << ans;
}