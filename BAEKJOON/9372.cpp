// 최소 스패닝 트리

#include<iostream>
using namespace std;

int main(){
    int T, N ,M;
    int a,b;
    cin >> T;
    while(T--){
        cin >> N >> M;
        for(int i = 0; i < M ; i++){
            cin >> a >> b;
        }
        cout << N-1 <<endl;
    }
}