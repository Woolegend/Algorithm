#include<iostream>
using namespace std;

const int MAX = 8;

bool visited[MAX];
int arr[MAX];
int N, M;

void DFS(int a, int b){
    if(b == M){
        for(int i = 0; i < M; i++)
            cout << arr[i] << " ";   
        cout << '\n';
        return;
    }
    for(int i = a; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[b] = i;
            DFS(i+1, b+1);
            visited[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    DFS(1, 0);
}