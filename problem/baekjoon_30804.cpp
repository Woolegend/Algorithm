#include<iostream>
#include<vector> // vector
#include<algorithm> // all_of
using namespace std;

vector<int> fruits;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for(int i =0; i < N; i++){
        int fruit;
        cin >> fruit;
        fruits.push_back(fruit);
    }
}