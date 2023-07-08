#include<iostream>
using namespace std;

int main(){
    int tc, h, w, n, a, b;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        cin >> h >> w >> n;
        a = n % h;
        if(a == 0) a = h; 
        b = n / h + 1;
        if(a == h) --b;
        cout << a;
        if(b < 10) cout << "0";
        cout << b;
    }
}