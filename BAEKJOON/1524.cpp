#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int t, n, m, sn, bm;
    vector<int> s, b;

    cin >> t;

    while (t--) {
        cin >> n >> m;
        s.resize(n);
        b.resize(m);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(s.begin(), s.end());
        sort(b.begin(), b.end());
        sn = bm = 0;

        while (sn < n && bm < m) {
            if (s[sn] > b[bm]) {
                bm++;
            }
            else if (s[sn] < b[bm]) {
                sn++;
            }
            else {
                bm++;
            }
        }



        if (sn == n) {
            cout << "B" << endl;
        }
        else if (bm == m) {
            cout << "S" << endl;
        }
        else {
            cout << "C" << endl;
        }      
    }
    return 0;
}