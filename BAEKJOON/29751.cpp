#include<iostream>
using namespace std;

int main(){
    double w, h;
    cin >> w >> h;
    cout << fixed;
    cout.precision(1);
    cout << (w * h)/2;
}