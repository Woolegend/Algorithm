#include<iostream>
#include<string>
using namespace std;

int N, blue, white;
bool arr[128][128];

void solve(int x, int y, int z){
    bool color = arr[y][x];

    for(int i = 0; i < z; i++) {
        for(int j = 0; j < z; j++) {
            if(arr[y + i][x + j] != color) {
                z /= 2;
                solve(x, y, z);
                solve(x + z, y, z);
                solve(x, y + z, z);
                solve(x + z, y + z, z);
                return;
            }
        }
    }

    color ? blue++ : white++;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    cin >> N;
    for(int y = 0; y < N; y++) {
        for(int x = 0; x < N; x++) {
            cin >> arr[y][x];
        }
    }

    solve(0, 0, N);
    cout << white << '\n' << blue;
}