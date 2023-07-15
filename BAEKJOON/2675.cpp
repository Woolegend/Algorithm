#include<iostream>
using namespace std;

int main(){
    int tc, rp;
    string s;

    cin >> tc;
    while(tc--){
        cin >> rp >> s;
        for(char c:s){
            for(int i = 0; i<rp; i++)
                cout << c;
        }
        cout << endl;
    }
}