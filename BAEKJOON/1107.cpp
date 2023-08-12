/*
백준 1107

#반례#
1.
10 
9
1 2 3 4 5 6 7 8 9
출력 11



*/

#include<iostream>
#include<cmath>
using namespace std;

bool nums[10];
int N, M, num, ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> num;
        nums[num] = true;
    }

    ans = abs(N - 100);

    if(!nums[0]){
        if(ans > N + 1) ans = N + 1;
    }

    for(int i = 1; i < 1000000; i++){
        int ch = i;
        int cnt = abs(i - N);
        bool flag = true;

        while(ch){
            if(nums[ch % 10]){
                flag = false;
                break;
            }
            ch /= 10;
            cnt++;
        }

        if(flag) if(ans > cnt) ans = cnt;
    }

    cout << ans;
}