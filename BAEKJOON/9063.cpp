#include<iostream>
using namespace std;

int n, x, y, minX, maxX, minY, maxY, ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    maxX = maxY = -10000;
    minX = minY = 10000;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x < minX) minX = x;
        if(x > maxX) maxX = x;
        if(y < minY) minY = y;
        if(y > maxY) maxY = y;
    }

    ans = (maxX - minX) * (maxY - minY);

    cout << ans;
}