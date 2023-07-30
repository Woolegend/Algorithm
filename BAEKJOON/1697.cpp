#include<iostream>
#include<queue>
using namespace std;

int n, k, f, tmp, q_end, ans;
queue<int> q;
bool flag;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    if(n != k){
        q.push(n);

        while(!flag){
            ans++;
            q_end = q.size();
            for(int i = 0; i < q_end; i++){
                f = q.front();
                tmp = f + 1;
                if(tmp != k) q.push(tmp);
                else flag = true;
                tmp = f - 1;
                if(tmp != k) q.push(tmp);
                else flag = true;
                tmp = f * 2;
                if(tmp != k) q.push(tmp);
                else flag = true;
                q.pop();
            }
        }
    }
    cout << ans;
}