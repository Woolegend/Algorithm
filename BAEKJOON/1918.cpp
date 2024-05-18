<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;

vector<string> v;
string modify;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> modify;
=======
#include <iostream>
#include <stack>
using namespace std;

string s;
stack<char> st;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (isalpha(s[i])) cout << s[i];
        else{
            if (s[i] == '(') st.push(s[i]);

            else if (s[i] == '*' || s[i] == '/'){
                while (!st.empty() && (st.top() == '*' || st.top() == '/')){
                    cout << st.top();
                    st.pop();
                }
                st.push(s[i]);
            }

            else if (s[i] == '+' || s[i] == '-'){
                while (!st.empty() && st.top() != '('){
                    cout << st.top();
                    st.pop();
                }
                st.push(s[i]);
            }

            else if (s[i] == ')'){
                while (!st.empty() && st.top() != '('){
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
        }
    }

    while (!st.empty()){
        cout << st.top();
        st.pop();
    }
>>>>>>> 797c794ae12b9e412345bcba424ca741774d16b9
}