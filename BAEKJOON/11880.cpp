#include<iostream>
using namespace std;

unsigned long long n, in, ans, sum, _max;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        sum = _max = 0;
        for(int j = 0; j < 3; j++){
            cin >> in;
            sum += in;
            if(in > _max) _max = in;
        }
        sum -= _max;
        ans = sum * sum + _max * _max;
        cout << ans << '\n';
    }    
}