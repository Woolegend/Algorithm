/*
백준 17144

#해결과정#
1. 미세먼지 확산하기
- Diff()
2. 확산된 값은 따로 저장 
- Meta()
3. 확산된 미세먼지값 더하기
- Update()
4. 미세먼지 순환시키기
- CircTop()
- CircBot()
*/

#include<iostream>
using namespace std;

int arr[50][50][2], r, c, t, top_r, bot_r;

//input array
void Input(){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j][0];
            if(arr[i][j][0] == -1){
                top_r ? bot_r = i : top_r = i;
            }
        }
    }
}

//Metastasis
bool Meta(int a, int b, int div){
    if(arr[a][b][0] != -1){
        arr[a][b][1] += div;
        return 1;
    }
    return 0;
}

//Diffus
void Diff(){
    for(int a = 0; a < r; a++){
        for(int b = 0; b < c; b++){
            int div = arr[a][b][0] / 5;
            int cnt = 0;

            if(a > 0) cnt += Meta(a - 1, b, div);
            if(a + 1 < r) cnt += Meta(a + 1, b, div);
            if(b > 0) cnt += Meta(a, b - 1, div);
            if(b + 1 < c) cnt += Meta(a, b + 1, div);

            arr[a][b][0] -= div * cnt;
        }
    }
}

//Zone value Update
void Update(){
    for(int a = 0; a < r; a++){
        for(int b = 0; b < c; b++){
            if(arr[a][b][1] > 0) {
                arr[a][b][0] += arr[a][b][1];
                arr[a][b][1] = 0;
            }
        }
    }
}

//Top Circulation
void CircTop(){
    int step = 0, a = top_r - 1, b = 0, aa, bb,
    cir_r[] = {-1, 0, 1, 0},
    cir_c[] = {0, 1, 0, -1};

    while(step < 4){
        aa = a + cir_r[step];
        bb = b + cir_c[step];

        arr[a][b][0] = arr[aa][bb][0];
        a = aa;
        b = bb;

        if(a + cir_r[step] < 0 || 
           a + cir_r[step] > top_r ||
           b + cir_c[step] < 0 || 
           b + cir_c[step] == c)
            step++;
    }
    arr[top_r][1][0] = 0;
}

//Bottom Circulation
void CircBottom(){
    int step = 0, a = bot_r + 1, b = 0, aa, bb,
    cir_r[] = {1, 0, -1, 0},
    cir_c[] = {0, 1, 0, -1};

    while(step < 4){
        aa = a + cir_r[step];
        bb = b + cir_c[step];

        arr[a][b][0] = arr[aa][bb][0];
        a = aa;
        b = bb;

        if(a + cir_r[step] == r || 
           a + cir_r[step] < bot_r || 
           b + cir_c[step] < 0 || 
           b + cir_c[step] == c)
            step++;
    }
    arr[bot_r][1][0] = 0;
}

//output Result
void Result(){
    int ans = 0;
    for(int a = 0; a < r; a++)
        for(int b = 0; b < c; b++)
            ans += arr[a][b][0];

    ans += 2;

    cout << ans;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c >> t;
    Input();

    while(t--){
        Diff();
        Update();
        CircTop();
        CircBottom();
    }
    Result();
}



/*

#include<iostream>
using namespace std;

int A[50][50][2], r, c, T, upR, dwR, cnt, v, ans;

void Diff(int x, int y){
    if((x == upR || x == dwR) && y == 0) return;
    A[x][y][1] += v;
    cnt++;
}

void Circ(int x, int y, int dx, int dy, int t){
    while(t--){
        A[x][y][0] = A[x+dx][y+dy][0];
        x = x + dx;
        y = y + dy;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c >> T;
    for(int x = 0; x < r; x++){
        for(int y = 0; y < c; y++){
            cin >> A[x][y][0];
            if(A[x][y][0] < 0){
                A[x][y][0] = 0;
                upR ? dwR = x : upR = x;
            }
        }
    }

    while(T--){
        for(int x = 0; x < r; x++){
            for(int y = 0; y < c; y++){
                v = A[x][y][0] / 5;
                cnt = 0;

                if(x > 0) Diff(x - 1, y);
                if(x + 1 < r) Diff(x + 1, y);
                if(y > 0) Diff(x, y - 1);
                if(y + 1 < c) Diff(x, y + 1);

                A[x][y][0] -= v * cnt;
            }
        }
        
        for(int x = 0; x < r; x++){
            for(int y = 0; y < c; y++){
                if(A[x][y][1] > 0) {
                    A[x][y][0] += A[x][y][1];
                    A[x][y][1] = 0;
                }
            }
        }
    }

    for(int x = 0; x < r; x++)
        for(int y = 0; y < c; y++)
            ans += A[x][y][0];
    cout << ans;
}

*/