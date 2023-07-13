// 백준 2609
// #알고리즘#
// 1. 유클리드 호제법 : 최대공약수
// 2. 최소 공배수 : A * B / 최대공약수

#include<iostream>
using namespace std;

int main(){
    int a, b, x, y, n;
    cin >> a >> b;
    x = a, y = b;
    if(x > y){
       swap(x, y);
    }
    while(x){ 
        n = y % x;
        y = x;
        x = n;
    }
    cout << y << endl;
    cout << a * b / y << endl;
}