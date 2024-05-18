#include<iostream>
using namespace std;

int n, in, sum, _max;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum = 0;
        _max = 0;
        for(int i = 0; i < 3; i++){
            cin >> in;
            sum += in * in;
            if(in > _max) _max = in;
        }
        cout << "Scenario #" << i << ":\n";
        if(sum == (_max * _max) * 2) cout << "yes\n\n";
        else cout << "no\n\n";
    }
}