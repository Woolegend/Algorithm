#include<iostream>
using namespace std;

int N, K, A[101][2], DP[101][100001];

void Knapsack(){
    for(int i = 1; i <= N; i++){
        for(int w = 1; w <= K; w++){
            cout << w << ' ';
            if(A[i][0] <= w){
                DP[i][w] = max(A[i][1] + DP[i-1][w-A[i][0]], DP[i-1][w]);
                cout << DP[i][w] << ' ' << A[i][1]+ DP[i-1][w-A[i][0]] << " " << DP[i-1][w] << '\n';
            }
            else{ 
                DP[i][w] = DP[i-1][w];
                cout << DP[i][w] << ' ' << DP[i-1][2] << '\n';
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        cin >> A[i][0] >> A[i][1];
    }
    Knapsack();

    cout << DP[N][K];
 }