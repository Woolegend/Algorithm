#include<iostream>
#include<vector> // vector
using namespace std;

vector<int> fruits;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int fruit;
        cin >> fruit;
        fruits.push_back(fruit);
    }

    int max_length = 0;
    for(int i = 0; i < N - 1; i++){
        for(int j = N; j > 1; j--) {
            int length = 0;
            int a = 0;
            int b = 0;
            for(int k = i; k < j; k++){
                length++;
                if(!a) a = fruits[k];
                else if(!b) b = fruits[k];
                else break;
            }
            if(length > max_length)
                max_length = length;
        }
    }
    cout << max_length;
}