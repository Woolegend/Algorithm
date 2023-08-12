#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

const int MAX = 10000;
int A, B;
bool visited[MAX];

string BFS(){
    queue<pair<int, string>> q;
    q.push({A, ""});
    visited[A] = true;

    while(!q.empty()){
        int num = q.front().first;
        string change = q.front().second;
        q.pop();

        int curNum = (2 * num) % MAX;
        if(!visited[curNum]){
            if(curNum == B) return change + "D";
            visited[curNum] = true;
            q.push({curNum, change + "D"});
        }

        curNum = (num - 1) < 0 ? 9999 : num - 1;
        if(!visited[curNum]){
            if(curNum == B) return change + "S";
            visited[curNum] = true;
            q.push({curNum, change + "S"});
        }

        curNum = (num % 1000) * 10 + num / 1000;
        if(!visited[curNum]){
            if(curNum == B) return change + "L";
            visited[curNum] = true;
            q.push({curNum, change + "L"});
        }

        curNum = (num % 10) * 1000 + num / 10;
        if(!visited[curNum]){
            if(curNum == B) return change + "R";
            visited[curNum] = true;
            q.push({curNum, change + "R"});
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        memset(visited, false, sizeof(visited));
        cin >> A >> B;
        cout << BFS() << '\n';
    }
}
