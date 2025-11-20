#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M = 0;
    cin >> N;
    for(int i = 1; i < N; i++) {
        int sum = i;
        int tmp = i;
        while(tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if(sum == N) {
            M = i;
            break;
        }
    }
    cout << M;
}