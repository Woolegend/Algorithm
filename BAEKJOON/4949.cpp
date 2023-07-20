#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    stack<char> st;
    string s;
    bool flag;

    while(true){
        getline(cin, s);
        
        if(s.size() == 1) break;

        flag = false;
        while(!st.empty()) st.pop();

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[') st.push(s[i]);

            else if(s[i] == ')'){
                if(st.empty() || st.top() != '(') {
                    flag = true;
                    break;
                }
                st.pop();
            }

            else if(s[i] == ']'){
                if(st.empty() || st.top() != '[') {
                    flag = true;
                    break;
                }
                st.pop();
            }

        }

        if(!st.empty() || flag) printf("no\n");
        else printf("yes\n");
    }
}