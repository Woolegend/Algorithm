#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;

bool search(int a){
    int min = 0;
    int max = v.size() - 1;
    while(min <= max) {
        int mid = (min + max) / 2;
        if(v[mid] == a) return true;
        if(v[mid] < a) min = mid + 1;
        else max = mid - 1;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, a;

    cin >> n;
    v.resize(n);

    for(auto& i:v) cin >> i;

    sort(v.begin(), v.end(), less<int>());

    cin >> m;
    while(m--){
        cin >> a;
        cout << (int)search(a) << '\n';
    }
}

// #include<iostream>
// #include<set>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false); 
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N, M, a;
//     set<int> s;

//     cin >> N;
//     while(N--){
//         cin >> a;
//         s.insert(a);
//     }

//     cin >> M;
//     while(M--){
//         cin >> a;
//         if(s.find(a) != s.end()) cout << 1 << '\n';
//         else cout << 0 << '\n';
//     }
// }