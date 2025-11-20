#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n[3];
    while(1){
        cin >> n[0] >> n[1] >> n[2];
        if (n[0] == 0 && n[1] == 0 && n[2] == 0) break;
        sort(n, n+3, less<int>());
        if(pow(n[2], 2) == pow(n[0], 2) + pow(n[1], 2)) cout << "right\n";
        else cout << "wrong\n";
    }
}