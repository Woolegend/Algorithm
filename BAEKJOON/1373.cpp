#include<iostream>
using namespace std;

int main(){
    string bin;
    int sum, len, i = 0;
    cin >>  bin;
    len = bin.size();
    if(len % 3 == 1){
        sum = bin[0] == '1';
        cout << sum;
        i = 1;
    }
    else if(len % 3 == 2){
        sum = (bin[0] ==  '1') * 2 + (bin[1] == '1');
        cout << sum;
        i = 2;
    }
    for(; i<len; i+=3){
        sum = (bin[i] == '1') * 4 + (bin[i+1] ==  '1') * 2 + (bin[i+2] == '1');
        cout << sum;
    }
}