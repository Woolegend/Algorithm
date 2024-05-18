#include<iostream>
#include<cmath>
using namespace std;

int N, W, H, maxSize, input;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> W >> H;

    maxSize = sqrt(pow(W, 2) + pow(H, 2));
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        if(input <= maxSize) cout << "DA\n";
        else cout << "NE\n";
    }
}