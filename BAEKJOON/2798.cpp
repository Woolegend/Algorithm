#include<iostream>
using namespace std;

int main(){
    int v[100], n, m, sum, max = 0;

    cin >> n >> m;
    for(int i = 0; i<n; i++)
        cin >> v[i];

    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                sum = v[i] + v[j] + v[k];
                if(sum > m) continue;
                if(sum > max) max = sum;
                if(sum == m) n = 0;
            }
        }
    }
    cout << max;
}