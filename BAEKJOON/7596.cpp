/*
백준 7596

#알고리즘#
1. 너비 우선 탐색(?)

#해결과제#
1. 상자 내용물 입력
- 입력받은 내용물 중 익은 토마토의 좌표만 큐에 저장
2. 덜 익은 토마토 익히기
- 익은 토마토 좌표의 6방면 중 덜 익은 토마토가 존재하면 큐에 저장
- 전날익은 토마토와 오늘 익은 토마토 구분

#오류#
1. 시간 복잡도
- 한 단계에서 처리 과정이 복잡해지며 시간 복잡도 상승

*/

#include<iostream>
#include<queue>
using namespace std;

queue<int> q[3];
bool box[100][100][100];
int z, y, x, a, b, c, in, day, cnt;

void push(int f, int s, int t){
    if(box[f][s][t]){
        q[0].push(f);
        q[1].push(s);
        q[2].push(t);
        box[f][s][t] = false;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    cin >> x >> y >> z;

    for(a = 0; a < z; a++){
        for(b = 0; b < y; b++){
            for(c = 0; c < x; c++){
                cin >> in;
                if(in == 1){
                    q[0].push(a);
                    q[1].push(b);
                    q[2].push(c);
                    cnt++;
                }
                if(in == 0)
                    box[a][b][c] = true,
                    cnt++;
            }
        }
    }

    while(!q[0].empty()){
        int idx = q[0].size();
        for(int i = 0; i < idx; i++){
            a = q[0].front();
            b = q[1].front();
            c = q[2].front();

            if(a > 0) push(a-1, b, c);
            if(a + 1 < z)  push(a+1, b, c);
            if(b > 0) push(a, b-1, c);
            if(b + 1 < y) push(a, b+1, c);
            if(c > 0) push(a, b, c-1);
            if(c + 1 < x) push(a, b, c+1);

            q[0].pop();
            q[1].pop();
            q[2].pop();
            cnt--;
        }
        day++;
    }

    if(cnt) cout << -1;
    else cout << day - 1;
}