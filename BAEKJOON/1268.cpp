#include<iostream>
using namespace std;
int t, s[1000][5], n, x = 0, c = 0, i, l;
int main() {
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> s[i][0] >> s[i][1] >> s[i][2] >> s[i][3] >> s[i][4];
    }
    for (i = 0; i < t; i++) {
        n = 0;
        for (l = 0; l < t; l++) {
            if (s[i][0] == s[l][0] || s[i][1] == s[l][1] || s[i][2] == s[l][2] || s[i][3] == s[l][3] || s[i][4] == s[l][4]) n++;
        }
        if (n > c) c = n, x = i;
    }
    cout << x + 1;
}
