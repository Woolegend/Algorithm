#include<iostream>
using namespace std;

int N;
bool map[3072][6144];

void draw(int x, int y, int n){
    if(n == 3){
        map[x][y] = 1;
        map[x+1][y-1] = 1;
        map[x+1][y+1] = 1;
        for(int i = y - 2; i <= y + 2; i++){
            map[x+2][i] = 1;
        }
        return;
    }
    draw(x, y, n / 2);
    draw(x + n / 2, y - n / 2, n / 2);
    draw(x + n / 2, y + n / 2, n / 2);
}

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    cin >> N;

    draw(0, N - 1, N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N * 2 - 1; j++){
            cout << (map[i][j] ? '*' : ' ');
        }
        cout <<'\n';
    }
}