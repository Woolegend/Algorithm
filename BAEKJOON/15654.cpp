#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M, in;
bool visited[8];
vector<int> nums;
vector<int> list;

void DFS(int a, int b){
    if(b == M){
        for(int i = 0; i < M; i++)
            cout << list[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 0; i < N; i++){
        if(!visited[i]){
            visited[i] = true;
            list.push_back(nums[i]);
            DFS(i + 1, b + 1);
            list.pop_back();    
            visited[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> in;
        nums.push_back(in);
    }
    sort(nums.begin(), nums.end(), less<int>());

    DFS(0, 0);
}