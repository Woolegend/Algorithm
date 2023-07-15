#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    queue<int> q;
    vector<int> v;
    vector<char> ans;
    int num, n;

    cin >> num;
    for(int i = 0; i<num; i++) {
        cin >> n;
        q.push(n);
    }

    for(int i = 0; i<num; i++){
        v.push_back(i+1);
        ans.push_back('+');

        while(!v.empty() && v.back() == q.front()){
            q.pop();
            v.pop_back();
            ans.push_back('-');
        }
    }

    if(v.empty()) {
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << "\n";
        }
    }
    else cout << "NO" << endl;
}