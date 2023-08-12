#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

struct cmp{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)) return a > b;
        else return abs(a) > abs(b);
    }
};

priority_queue<int, vector<int>, cmp> q;
int n, x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(x) q.push(x);
        else{
            if(q.empty()) cout << "0\n";
            else{
                cout << q.top() << '\n';
                q.pop();
            }
        }
    }
}