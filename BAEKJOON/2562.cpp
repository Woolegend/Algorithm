#include<iostream>

using namespace std;

int main(){
    int num[9], max_num = 0, max_idx = 0;
    for(int i = 0; i<9; i++){
        cin >> num[i];
        if(num[i] > max_num){
            max_num = num[i];
            max_idx = i + 1;
        }
    }
    cout<< max_num << endl << max_idx;
}