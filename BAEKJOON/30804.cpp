#include<iostream>
using namespace std;

#define EMPTY -1

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int N, S;

    cin >> N;
    cin >> S;

    int a = S;
    int b = EMPTY;
    int p = 0;

    int last = a;
    int len = 1;
    int ans = len;


    for(int i = 1; i < N; i++){
        cin >> S;
        if(S != a && S != b) {
            if(last == a){
                if(b != EMPTY) len = i - p;
                b = S;
            } else if(last == b) {
                len = i - p;
                a = S;
            }
        }
        if (S != last) p = i;
        last = S;
        len++;
        if(len > ans) ans = len;
    }

    cout << ans;
}