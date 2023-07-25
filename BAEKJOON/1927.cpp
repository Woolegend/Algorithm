#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n, in;
    priority_queue<int, vector<int>, greater<int>> heap;

    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &in);
        if(in != 0) heap.push(in);
        else{
            if(heap.empty()) printf("0\n");
            else{
                printf("%d\n", heap.top());
                heap.pop();
            }
        }
    }
}