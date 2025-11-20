// 백준 10816
// #해결 순서#
// 맵 노드 Key -> 숫자 카듭 번호 / Value -> 카드 개수
// 1. 숫자 카드와 개수 저장
// 2. 숫자 카드 개수 확인

// #오류#
// 1. map사용 시간 초과 (복잡도 O(n^2))
// 2. upper, lower bound 사용 시간 초과

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int N, M, a;

    cin >> N;
    v.resize(N);
    for(auto& i:v) cin >> i;
    sort(v.begin(), v.end(), less<int>());

    cin >> M;
    while(M--){
        cin >> a;
        cout << upper_bound(v.begin(), v.end(), a) - lower_bound(v.begin(), v.end(), a) << ' ';
    }   
}

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false); 
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N, M, a;
//     map<int, int> mp;
//     cin >> N;
//     for(int i = 0; i < N; i++){
//         cin >> a;
//         if(mp.find(a) != mp.end()) mp[a]++;
//         else mp.insert({a, 1});
//     }
//     cin >> M;
//     for(int i = 0; i < M; i++) {
//         cin >> a;
//         cout << mp[a] << ' ';
//     }
// }