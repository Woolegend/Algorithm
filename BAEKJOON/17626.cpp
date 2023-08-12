#include<iostream>
#include<cmath>
using namespace std;

int n, a[50001];

void dp(int p){
    for(int i = 1; i * i < p; i++){
        if(a[p] == 0) a[p] = a[i * i] + a[p - i * i];
        else a[p] = min(a[p], a[i * i] + a[p - i * i]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    int size = sqrt(n);
    for(int i = 1; i <= size; i++)
        a[i * i] = 1;

    for(int i = 1; i <= n; i++){
        if(a[i] == 0) dp(i);
    }   

    cout << a[n];
}