#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int N, M, K;
ll a, b, c, num, nums[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;
    
    for(int i = 1; i <= N; i++){
        cin >> num;
        nums[i] = nums[i - 1] + num; 
    }

    int seq = M + K;
    for(int i = 0; i < seq; i++){
        cin >> a >> b >> c;
        if(a == 1){
            nums[b] = c;
        }
        if(a == 2){
            ll sum = 0;
            for(int x = b; x <= c; x++){
                sum += nums[x];
            }
            cout << sum << '\n';
        }
    }
}