#include<iostream>
#include<queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    int n, k;

    cin >> n >> k;
    for(int i = 1; i<=n; i++)
        q.push(i);

    cout << "<";
    while(!q.empty()){
        for(int i = 0; i < k; i++){
            if(i < k-1) q.push(q.front());
            else {
                cout << q.front();
                if(q.size() != 1) cout << ", ";
            }
            q.pop();
        }
    }
    cout << ">";
}