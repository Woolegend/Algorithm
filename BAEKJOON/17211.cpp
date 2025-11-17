#include<iostream>
#include<cmath>
using namespace std;

int n, f;
double g2g, g2b, b2g, b2b;
double good[101];
double bad[101];

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> f;
    cin >> g2g >> g2b >> b2g >> b2b;

    f == 0 ? good[0] = 1 : bad[0] = 1;

    for(int i = 1; i <= n; i++){
        good[i] = good[i-1] * g2g + bad[i-1] * b2g;
        bad[i] = good[i-1] * g2b + bad[i-1] * b2b;
    }

    cout << floor(good[n] * 1000 + 0.5) << "\n";
    cout << floor(bad[n] * 1000 + 0.5);
}