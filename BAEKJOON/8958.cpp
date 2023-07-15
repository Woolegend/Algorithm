#include<iostream>
using namespace std;

int main(){
    int tc, sum, cnt;
    string s;
    cin >> tc;
    while(tc--){
        cin >> s;
        cnt = 0;
        sum = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'O') cnt++;
            else cnt = 0;
            sum += cnt;
        }
        cout << sum << endl;
    }
}