#include<iostream>
#include<queue>
using namespace std;

int n, num[3], max_sum[2][3], min_sum[2][3];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num[0] >> num[1] >> num[2];

        max_sum[0][0] = max_sum[1][0];
        max_sum[0][1] = max_sum[1][1];
        max_sum[0][2] = max_sum[1][2];

        min_sum[0][0] = min_sum[1][0];
        min_sum[0][1] = min_sum[1][1];
        min_sum[0][2] = min_sum[1][2];

        max_sum[1][0] = num[0] + max(max_sum[0][0], max_sum[0][1]);
        max_sum[1][1] = num[1] + max(max_sum[0][0], max(max_sum[0][1], max_sum[0][2]));
        max_sum[1][2] = num[2] + max(max_sum[0][1], max_sum[0][2]);

        min_sum[1][0] = num[0] + min(min_sum[0][0], min_sum[0][1]);
        min_sum[1][1] = num[1] + min(min_sum[0][0], min(min_sum[0][1], min_sum[0][2]));
        min_sum[1][2] = num[2] + min(min_sum[0][1], min_sum[0][2]);
    }

    cout << max(max_sum[1][0], max(max_sum[1][1], max_sum[1][2])) << ' ';
    cout << min(min_sum[1][0], min(min_sum[1][1], min_sum[1][2]));
}