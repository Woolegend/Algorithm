#include<iostream>
using namespace std;
int main(){
    int m, n, cnt_W, cnt_B, min_cnt;
    string board[50],
        W = "WBWBWBWB",
        B = "BWBWBWBW",
        board_W[8],
        board_B[8];

    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> board[i];
    }

    for(int i = 0; i<8; i++){
        board_W[i] = i % 2 ? B : W;
        board_B[i] = i % 2 ? W : B;
    }

    min_cnt = 64;
    for(int h = 0; h <= m - 8; h++){
        for(int w = 0; w <= n-8; w++){
            cnt_W = 0;
            cnt_B = 0;
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if (board[h + i][w + j] != board_W[i][j])
                        cnt_W++;
                    if (board[h + i][w + j] != board_B[i][j])
                        cnt_B++;
                }
            }
            if (cnt_W < min_cnt) min_cnt = cnt_W;
            if (cnt_B < min_cnt) min_cnt = cnt_B;
        }
    }
    cout << min_cnt << endl;
}