#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st;
    string s;
    int n, in;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s == "push"){
            cin >> in;
            st.push(in);
        }
        else if(s == "pop"){
            if(st.empty()) cout << "-1\n";
            else{
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if(s == "size"){
            cout << st.size() << '\n';
        }
        else if(s == "empty"){
            if(st.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else if(s == "top"){
            if(st.empty()) cout << "-1\n";
            else cout << st.top() << '\n';
        }
    }
}