#include<iostream>
using namespace std;

int main(){
    int tc, c;
    cin >> tc;
    for(int i = 0; i< tc; i++){
        cin >> c;
        cout << c / 25 << " ";
        c %= 25;
        cout << c / 10 << " ";
        c %= 10;
        cout << c / 5 << " ";
        c %= 5;
        cout << c << "\n";
    }
}