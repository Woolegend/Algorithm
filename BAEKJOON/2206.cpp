#include<iostream>
#include<queue>
using namespace std;
#define INF 16777216

struct dot{
    int x, y;
    bool f;
};

int N, M;
queue<dot> q;
bool map[1001][1001];
int dist[1001][1001][2];

void insert(int x, int y, int d, bool f){
    if(!f || (f && !map[x][y])) {
        if(map[x][y]) f = true;
        if(dist[x][y][f] > d){
            dist[x][y][f] = d;
            q.push({x, y, f});
        }
    }
}

int func(){
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= M; j++)
            dist[i][j][0] = dist[i][j][1] = INF;
    q.push({1, 1, false});
    dist[1][1][0] = dist[1][1][1] = 1;

    while(!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        bool f = q.front().f;
        int d = dist[x][y][f] + 1;
        q.pop();

        if(x > 1) insert(x - 1, y, d, f);
        if(x < N) insert(x + 1, y, d, f);
        if(y > 1) insert(x, y - 1, d, f);
        if(y < M) insert(x, y + 1, d, f);
    }

    int tmp = min(dist[N][M][0], dist[N][M][1]);
    return tmp != INF ? tmp : -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i = 1; i <= N; i++){
        string line;
        cin >> line;
        for(int j = 1; j <= M; j++){
            map[i][j] = line[j - 1] - '0';
        }
    }

    cout << func() << '\n';
}