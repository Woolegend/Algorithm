/*
백분 20529
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> mbti;
string s;
int t, n, sum, ans;

int distance(int a, int b){
    int dis;
    dis = (mbti[a][0] != mbti[b][0]) +
          (mbti[a][1] != mbti[b][1]) +
          (mbti[a][2] != mbti[b][2]) +
          (mbti[a][3] != mbti[b][3]);
    return dis;
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> s;
            mbti.push_back(s);
        }

        if(n > 32) ans = 0;
        else{
            ans = 12;
            for(int a = 0; a < n - 2; a++){
                for(int b = a + 1; b < n - 1; b++){
                    for(int c = b + 1; c < n; c++){
                        sum = distance(a, b) +
                            distance(b, c) +
                            distance(c, a);
                        if(sum < ans) ans = sum;
                        if(ans == 0) break;
                    }
                    if(ans == 0) break;
                }
                if(ans == 0) break;
            }
        }
        cout << ans << '\n';
        mbti.clear();
    }
}