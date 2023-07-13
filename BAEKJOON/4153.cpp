#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int n[3];
    while(true){
        cin >> n[0] >> n[1] >> n[2];
        if(n[0] == n[1] && n[1] == n[2] && n[2] == 0) break;
        sort(n, n+3, less<int>());
        if(pow(n[2], 2) == pow(n[0], 2) + pow(n[1], 2))
            cout << "right\n";
        else cout << "wrong\n";
    }
}