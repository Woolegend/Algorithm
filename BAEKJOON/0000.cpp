#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    string answer = "";
    bool flag;
    while(true){
        getline(cin, s);
        if(s == "end") break;
        answer += "cout << \"";

        flag = false;
        for(char c:s){
            if(c == ' ') flag = true;
            else{
                if(flag){
                    flag = false;
                    cout << ' ';
                }
                cout << c;
            }
        }

        cout << "\" << endl;";
    }
}