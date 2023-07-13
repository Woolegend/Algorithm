#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s;
    bool flag;
    int tc;
    cin >> tc;
    while(tc--){
        stack<int> t;
        cin >> s;
        flag = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') t.push(1);
            else if(s[i] == ')'){
                if(t.empty()) {
                    flag = true;
                    break;
                }
                else t.pop();
            }
        }
        if(flag || !t.empty()) cout << "NO\n";
        else if(t.empty()) cout << "YES\n";
    }
}