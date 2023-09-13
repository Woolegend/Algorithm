#include<iostream>
#include<vector>
using namespace std;

int n, ans;
bool dimY[15];
vector<int> v;

void DFS(int y){
    if(y == n){
        ans++;
        return;
    }
    for(int i = 0; i < n; i++){
        if(!dimY[i]){
            int flag = true;
            for(int j = 0; j < y; j++){
                if(v[j] - (y - j) == i) flag = false;
                else if(v[j] + (y - j) == i) flag = false;
                if(!flag) break;
            }
            if(flag) {
                v.push_back(i);
                dimY[i] = true;
                DFS(y + 1);
                dimY[i] = false;
                v.pop_back();
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    DFS(0);

    cout << ans << '\n';
}