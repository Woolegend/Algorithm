#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;

    cin >> A >> B >> C;

    if(B == 0) {
        float x = A > 0 ? C / A : -1;
        bool flag = false;
        if(fmod(x, 1) == 0 && x >= 1 && x <= 10) {
            flag = true;
        }
        for(int i = 1; i <= 10; i++) {
            if(i == x && flag) {
                for(int j = 1; j <= 10; j++) {
                    cout << j;
                    if(j != 10) cout << ' ';
                }
                cout << '\n';
            } else {
                cout << 0 << '\n';
            }
        }
    } else {
        for(int x = 1; x <= 10; x++){
            float y = (float)((C - A * x) / B);
            if(fmod(y, 1) == 0 && y >= 1 && y <= 10) {
                cout << y;
            } else {
                cout << 0;
            }
            cout << '\n';
        }
    }
}