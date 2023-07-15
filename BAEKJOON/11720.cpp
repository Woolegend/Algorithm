#include<iostream>
using namespace std;

int main(){
    int len, sum = 0;
    string s;
    cin >> len >> s;
    for(int i = 0; i<len; i++){
        sum += s[i] - '0';
    }
    cout << sum << endl;
}