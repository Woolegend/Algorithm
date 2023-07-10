#include<iostream>
using namespace std;

int main(){
    string s;
    int idx, aph[26];
    for(int i = 0; i<26; i++) aph[i] = -1;
    cin >> s;
    for(int i = 0; i<s.size(); i++){
        idx = s[i] - 'a';
        if(aph[idx] == -1){
            aph[idx] = i;
        }
    }
    for(int n:aph) cout << n << " ";
}