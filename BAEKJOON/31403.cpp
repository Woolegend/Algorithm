#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;
    int result1 = A + B - C;
    string str = to_string(A) + to_string(B);
    int result2 = stoi(str) - C;

    cout << result1 << "\n" << result2;
}