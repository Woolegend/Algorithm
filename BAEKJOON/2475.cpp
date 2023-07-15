#include<iostream>
using namespace std;

int main(){
    int num[5], rst = 0;
    for(int i = 0; i<5; i++){
        cin >> num[i];
        rst += num[i] * num[i];
    }
    rst = rst % 10;
    cout << rst << endl;
}