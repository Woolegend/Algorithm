#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int N, M;
vector<int> nums, list;
string ans;

void DFS(int a, int b){
    if(b == M){
        for(int i = 0; i < M; i++)
            ans += to_string(list[i]) + ' ';
        ans.back() = '\n';
        return;
    }
    for(int i = a; i < N; i++){
        list[b] = nums[i];
        DFS(i, b+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    nums.resize(N);
    list.resize(N);

    for(int i = 0; i < N; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end(), less<int>());

    DFS(0, 0);

    cout << ans;
}