/*
백준 2640

#알고리즘#
1. 재귀함수
2. 분할정복

#해결과제#


*/

#include<iostream>

int n, in, blue, white, board[128][128];

void division(int a, int b, int c){    
    bool flag = false; 
    for(int y = 0; y < c; y++){
        for(int x = 0; x < c; x++){
            if(board[a + y][b + x] != board[a][b]){
                flag = true;
                break;
            }
        }
    }
    if(flag){
        int cc = c / 2;
        division(a, b, cc);
        division(a + cc, b, cc);
        division(a, b + cc, cc);
        division(a + cc, b + cc, cc);
    }
    else board[a][b] ? blue++ : white++;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> n;

    for(int y = 0; y < n; y++){
        for(int x = 0; x < n; x++){
            std::cin >> board[y][x];
        }
    }

    division(0, 0, n);
    std::cout << white << '\n' << blue;
}