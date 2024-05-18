#include<iostream>
using namespace std;

double w, h, n, sum, ans;

double gaussSum(double start, double end, int num){
    double value = (start + end) / 2;
    double result = value * num;
    return result;
}

int main(){ 

    cin >> w >> h >> n;

    if(int(n) % 2){
        sum = gaussSum(1, n-2, n/2);
        ans = sum / n * h * 2;
    }
    else {
        sum = gaussSum(1, n/2-1, n/2-1);
        ans = sum / n * h * 4;
    }

    cout << fixed;
    cout.precision(6);
    cout << ans;
}