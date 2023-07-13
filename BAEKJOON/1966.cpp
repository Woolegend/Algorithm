#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int tc, n, m, cnt, v;

    cin >> tc;
    for(int i = 0; i<tc; i++){
        queue<pair<int, int>> seq;
        vector<int> imp;

        cin >> n >> m;

        for(int j = 0; j<n; j++){
            cin >> v;
            seq.push(make_pair(j, v));
            imp.push_back(v);
        }
        sort(imp.begin(), imp.end(), less<int>());

        cnt = 0;
        while(true){
            if(seq.front().second < imp.back()){
                seq.push(seq.front());
                seq.pop();
            }
            else{
                cnt++;
                if(seq.front().first == m) break;
                seq.pop();
                imp.pop_back();
            }
        }
        cout << cnt << "\n";
    }
}