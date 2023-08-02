#include<iostream>
#include<queue>
using namespace std;

priority_queue<int> q;
int n, x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x) q.push(x);
        else {
            if(q.empty()) cout << "0\n";
            else{
                cout << q.top() << '\n';
                q.pop();
            }
        }
    }
}

// #include<iostream>
// #include<map>
// using namespace std;

// int n, x;
// map<int, int> m;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         cin >> x;
//         if(x){
//             auto iter = m.find(x);
//             if(iter == m.end()) m.insert({x, 1});
//             else iter->second++;
//         }
//         else{
//             if(!m.empty()){
//                 auto iter = --m.end();
//                 cout << iter->first << '\n';
//                 iter->second--;
//                 if(iter->second == 0) m.erase(iter);
//             }
//             else cout << "0\n";
//         }
//     }
// }