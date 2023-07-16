#include<iostream>
using namespace std;

int main(){
    int n, sum, tmp, ans = 0;
    scanf("%d", &n);
    for(int i = 1; i<n; i++){
        sum = i;
        tmp = i;
        while(tmp){
            sum += tmp % 10;
            tmp /= 10;
        }
        if(sum == n){
            ans = i;
            break;
        }
    }
    printf("%d", ans);
}