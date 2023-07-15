#include<iostream>
using namespace std;

int main(){
    string a = "1 2 3 4 5 6 7 8", b = "8 7 6 5 4 3 2 1", s;
    getline(cin, s);
    if(a.compare(s) == 0)
        cout << "ascending\n";
    else if (b.compare(s) == 0)
        cout << "descending\n";
    else
        cout << "mixed\n";
}