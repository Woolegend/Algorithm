#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    int n, k;

    scanf("%d %d", &n, &k);
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