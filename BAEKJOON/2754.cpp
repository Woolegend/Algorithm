#include<iostream>
using namespace std;

int main(){
    string s;
    float n;
    cin >> s;
    if(s == "A+") n = 4.3;
    else if(s == "A0") n = 4.0;
    else if(s == "A-") n = 3.7;
    else if(s == "B+") n = 3.3;
    else if(s == "B0") n = 3.0;
    else if(s == "B-") n = 2.7;
    else if(s == "C+") n = 2.3;
    else if(s == "C0") n = 2.0;
    else if(s == "C-") n = 1.7;
    else if(s == "D+") n = 1.3;
    else if(s == "D0") n = 1.0;
    else if(s == "D-") n = 0.7;
    else if(s == "F") n = 0.0;
    printf("%0.1f", n);
}