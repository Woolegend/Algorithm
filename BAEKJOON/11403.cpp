#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool mat[100][100];
int n;
queue<int> q;
vector<int> v[100];

void bfs(int i, int j){
    q.push(j);
    while(!q.empty()){
        for(int k:v[q.front()]){
            if(!mat[i][k]){
                q.push(k);
                mat[i][k] = true;
            }
        }
        q.pop();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
            if(mat[i][j]){
                v[i].push_back(j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j:v[i]) bfs(i, j);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }
}