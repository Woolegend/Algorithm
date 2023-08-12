#include<iostream>
using namespace std;

int n, cnt;

int main(){
    cin >> n;

    for(int a = 1; a < n; a++){
        for(int b = a; b < n; b++){
            int c = n - (a + b);
            if(b > c) break;
            if(a + b > c) cnt++;
        }
    }

    cout << cnt;
}