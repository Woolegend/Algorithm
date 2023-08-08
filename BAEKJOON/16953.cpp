#include<iostream>
#include<queue>
using namespace std;

long long A, B;
queue<long long> q;

int BFS(){
    q.push(A);
    int cnt = 1;
    while(!q.empty()){
        int size = q.size();
        cnt++;
        for(int i = 0; i < size; i++){
            long long num = q.front();
            q.pop();

            long long curNum = num * 2;
            if(curNum < B) q.push(curNum);
            else if(curNum == B) return cnt;

            curNum = num * 10 + 1;
            if(curNum < B) q.push(curNum);
            else if(curNum == B) return cnt;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B;

    cout << BFS();
}