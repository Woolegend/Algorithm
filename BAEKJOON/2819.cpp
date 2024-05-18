#include<iostream>
using namespace std;

int n, ans, cnt;
string seats;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> seats;

    for(int i = 0; i < n; i++){
        if(seats[i] == 'L')
            cnt++;
    }

    if(cnt > 0) ans = n + 1 - cnt / 2;
    else ans = n;

    std::cout << ans;
}