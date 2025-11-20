/**
 * 자연수 N!의 끝자리 0의 개수는 N!를 구성하는 소인수 10의 개수와 같다.
 * 10은 소인수분해하면 10 = 2 * 5이므로, 결국 N!의 소인수 2와 5가 몇 쌍 있는지를 찾는 문제로 귀결된다.
 *
 * 소인수 2는 짝수마다 포함되므로, 소인수 5보다 항상 더 많이 나타난다.
 * 따라서, 2와 5의 쌍의 개수는 더 적은 쪽인 소인수 5의 개수에 의해 결정된다
 *
 * N!의 끝자리 0의 개수는 N!를 소인수분해했을 때 포함된 소인수 5의 총 개수를 구하면 된다.
 */

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ans = 0;

    cin >> N;

    for(int i = 5; i <= N; i++) {
        int tmp = i;
        while(tmp % 5 == 0){
            tmp /= 5;
            ans++;
        }
    }
    
    cout << ans;
}