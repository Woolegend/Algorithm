#include<iostream>
using namespace std;

int main(){
    int num, mod[42] = {0}, cnt = 0;
    for(int i = 0; i<10; i++){
        cin >> num;
        if(mod[num%42]++ == 0) cnt++;
    }
    cout << cnt << endl;
}