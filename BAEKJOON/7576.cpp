/*
백준 7576

#알고리즘#
1. 너비 우선 탐색(?)

#해결과제#
1. 상자 내용물 입력
- 입력받은 내용물 중 익은 토마토의 좌표만 큐에 저장
2. 덜 익은 토마토 익히기
- 익은 토마토 좌표의 4방면 중 덜 익은 토마토가 존재하면 큐에 저장
- 전날익은 토마토와 오늘 익은 토마토 구분

*/

#include<iostream>
#include<queue>
using namespace std;

queue<int> q[2];
bool box[1000][1000];
int y, x, a, b, c, in, day, cnt;

void push(int f, int s){
    if(box[f][s]){
        q[0].push(f);
        q[1].push(s);
        box[f][s] = false;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    cin >> x >> y;

    for(a = 0; a < y; a++){
        for(b = 0; b < x; b++){
            cin >> in;
            if(in == 1){
                q[0].push(a);
                q[1].push(b);
                cnt++;
            }
            if(in == 0)
                box[a][b] = true,
                cnt++;
        }
    }

    while(!q[0].empty()){
        int idx = q[0].size();
        for(int i = 0; i < idx; i++){
            a = q[0].front();
            b = q[1].front();

            if(a > 0) push(a-1, b);
            if(a + 1 < y)  push(a+1, b);
            if(b > 0) push(a, b-1);
            if(b + 1 < x) push(a, b+1);

            q[0].pop();
            q[1].pop();
            cnt--;
        }
        day++;
    }

    if(cnt) cout << -1;
    else cout << day - 1;
}