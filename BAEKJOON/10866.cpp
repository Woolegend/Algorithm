#include<iostream>
#include<deque>
using namespace std;

int main(){
    int n, in;
    string s;
    deque<int> d;

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> s;
        if(s == "push_front"){
            cin >> in;
            d.push_front(in);
        }
        else if(s == "push_back"){
            cin >> in;
            d.push_back(in);
        }
        else if(s == "size"){
            cout << d.size() << endl;
        }
        else if(s == "empty"){
            cout << d.empty() << endl;
        }
        else if(d.empty()){
            cout << -1 << endl;
        }
        else{
            if(s == "pop_front"){
                cout << d.front() << endl;
                d.pop_front();
            }
            else if(s == "pop_back"){
                cout << d.back() << endl;
                d.pop_back();
            }
            else if(s == "front"){
                cout << d.front() << endl;
            }
            else if(s == "back"){
                cout << d.back() << endl;
            }
        }
    }
}