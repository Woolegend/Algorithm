#include<iostream>
using namespace std;

int main(){
    int max_num, min_num, num, tc;

    max_num = -1000000;
    min_num = 1000000;
    cin >> tc;
    for(int i = 0; i<tc; i++){
        cin >> num;
        if(num > max_num)
            max_num = num;
        if(num < min_num)
            min_num = num;
    }
    cout << min_num << " " << max_num;
}