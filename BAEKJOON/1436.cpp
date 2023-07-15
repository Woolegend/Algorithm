#include<iostream>
using namespace std;

//666 1666 2666 3666 4666 5666 6660 6661 6662 6663 6664 6665 6667 6668 6669
//10666 11666 12666 13666 14666 15666 16660 16661 16662 16663 16664 16665 16666 16667 16668 16669 17666 18666 19666

int main(){
    int num, front, mid, back;

    scanf("%d", num);
    front = 0;
    mid = 66;
    back = 6;
    for(int i = 1; i<num; i++){
        if(front % 10 < 6) front++;
        else{
            
        }
    }
    if(num != 0) cout << front;
    cout << mid << back;
}