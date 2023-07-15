#include<iostream>
using namespace std;

int main(){
    int a, b, c, rst, num[10] = { 0, };
    cin >> a >> b >> c;
    rst = a * b * c;
    while(rst){
        num[rst % 10]++;
        rst /= 10;
    }
    for(int n:num){
        cout << n << endl;
    }
}