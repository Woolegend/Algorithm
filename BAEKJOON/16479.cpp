#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double k, d1, d2, ans;

    cin >> k >> d1 >> d2;

    ans = pow(k, 2) - pow(((d1 - d2) / 2), 2);

    cout << ans;
}
