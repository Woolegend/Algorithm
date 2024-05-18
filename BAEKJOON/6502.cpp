#include<iostream>
using namespace std;

int r, w, l;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 1; true; i++){
        cin >> r;
        if(r == 0) break;
        cin >> w >> l;

        int a = (r + r) * (r + r);
        int b = (w * w) + (l * l);

        if(a < b) cout << "Pizza " << i << " does not fit on the table.\n";
        else cout << "Pizza " << i << " fits on the table.\n";
    }
}